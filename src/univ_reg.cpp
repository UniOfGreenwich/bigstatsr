// [[Rcpp::depends(bigmemory)]]
#include <Rcpp.h>
#include <bigmemory/MatrixAccessor.hpp>
#include "utils.h"

using namespace Rcpp;


/******************************************************************************/

template <typename T>
NumericVector R_squared(XPtr<BigMatrix> xpMat,
                        MatrixAccessor<T> macc,
                        const NumericVector& y,
                        const IntegerVector& rowInd) {
  int n = rowInd.size();
  int m = xpMat->ncol();

  NumericVector res(m);

  double ySum = 0, yySum = 0;
  double tmpY;
  int ind;
  double nd = (double)n;

  for (int i = 0; i < n; i++) {
    ind = rowInd[i] - 1;
    tmpY = y[ind];
    ySum += tmpY;
    yySum += tmpY * tmpY;
  }
  double denoY = yySum - ySum * ySum / nd;

  double xSum, xySum, xxSum;
  double tmp;
  double num, denoX;

  for (int j = 0; j < m; j++) {
    xSum = xySum = xxSum = 0;
    for (int i = 0; i < n; i++) {
      ind = rowInd[i] - 1;
      tmp = macc[j][ind];
      xSum += tmp;
      xySum += tmp * y[ind];
      xxSum += tmp * tmp;
    }
    num = xySum - xSum * ySum / nd;
    denoX = xxSum - xSum * xSum / nd;
    res[j] = num * num / (denoX * denoY);
  }

  return(res);
}

// Dispatch function for R_squared
// [[Rcpp::export]]
NumericVector R_squared(SEXP pBigMat,
                        const NumericVector& y,
                        const IntegerVector& rowInd) {
  // First we have to tell Rcpp what class to use for big.matrix objects.
  // This object stores the attributes of the big.matrix object passed to it
  // by R.
  XPtr<BigMatrix> xpMat(pBigMat);

  // To access values in the big.matrix, we need to create a MatrixAccessor
  // object of the appropriate type. Note that in every case we are still
  // returning a NumericVector: this is because big.matrix objects only store
  // numeric values in R, even if their type is set to 'char'. The types
  // simply correspond to the number of bytes used for each element.
  switch(xpMat->matrix_type()) {
  case 1:
    return R_squared(xpMat, MatrixAccessor<char>(*xpMat),   y, rowInd);
  case 2:
    return R_squared(xpMat, MatrixAccessor<short>(*xpMat),  y, rowInd);
  case 4:
    return R_squared(xpMat, MatrixAccessor<int>(*xpMat),    y, rowInd);
  case 6:
    return R_squared(xpMat, MatrixAccessor<float>(*xpMat),  y, rowInd);
  case 8:
    return R_squared(xpMat, MatrixAccessor<double>(*xpMat), y, rowInd);
  default:
    // This case should never be encountered unless the implementation of
    // big.matrix changes, but is necessary to implement shut up compiler
    // warnings.
    throw Rcpp::exception(ERROR_TYPE);
  }
}

/******************************************************************************/

template <typename T>
NumericMatrix betasRegLin(XPtr<BigMatrix> xpMat,
                          MatrixAccessor<T> macc,
                          const NumericVector& y,
                          const IntegerVector& rowInd) {
  int n = rowInd.size();
  int m = xpMat->ncol();

  NumericMatrix res(2, m);

  double ySum = 0;
  int ind;
  double nd = (double)n;

  for (int i = 0; i < n; i++) {
    ind = rowInd[i] - 1;
    ySum += y[ind];
  }

  double xSum, xySum, xxSum;
  double tmp, tmpB;
  double num, denoX;

  for (int j = 0; j < m; j++) {
    xSum = xySum = xxSum = 0;
    for (int i = 0; i < n; i++) {
      ind = rowInd[i] - 1;
      tmp = macc[j][ind];
      xSum += tmp;
      xySum += tmp * y[ind];
      xxSum += tmp * tmp;
    }
    num = xySum - xSum * ySum / nd;
    denoX = xxSum - xSum * xSum / nd;
    tmpB = num / denoX;
    res(1, j) = tmpB;
    res(0, j) = (ySum - tmpB * xSum) / nd;
  }

  return(res);
}

// Dispatch function for betasRegLin
// [[Rcpp::export]]
NumericMatrix betasRegLin(SEXP pBigMat,
                          const NumericVector& y,
                          const IntegerVector& rowInd) {
  // First we have to tell Rcpp what class to use for big.matrix objects.
  // This object stores the attributes of the big.matrix object passed to it
  // by R.
  XPtr<BigMatrix> xpMat(pBigMat);

  // To access values in the big.matrix, we need to create a MatrixAccessor
  // object of the appropriate type. Note that in every case we are still
  // returning a NumericVector: this is because big.matrix objects only store
  // numeric values in R, even if their type is set to 'char'. The types
  // simply correspond to the number of bytes used for each element.
  switch(xpMat->matrix_type()) {
  case 1:
    return betasRegLin(xpMat, MatrixAccessor<char>(*xpMat),   y, rowInd);
  case 2:
    return betasRegLin(xpMat, MatrixAccessor<short>(*xpMat),  y, rowInd);
  case 4:
    return betasRegLin(xpMat, MatrixAccessor<int>(*xpMat),    y, rowInd);
  case 6:
    return betasRegLin(xpMat, MatrixAccessor<float>(*xpMat),  y, rowInd);
  case 8:
    return betasRegLin(xpMat, MatrixAccessor<double>(*xpMat), y, rowInd);
  default:
    // This case should never be encountered unless the implementation of
    // big.matrix changes, but is necessary to implement shut up compiler
    // warnings.
    throw Rcpp::exception(ERROR_TYPE);
  }
}

/******************************************************************************/
