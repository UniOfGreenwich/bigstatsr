// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// auc_sorted
double auc_sorted(const NumericVector& x, const LogicalVector& y);
RcppExport SEXP _bigstatsr_auc_sorted(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const LogicalVector& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(auc_sorted(x, y));
    return rcpp_result_gen;
END_RCPP
}
// getXPtrFBM
SEXP getXPtrFBM(std::string path, int n, int m, int type);
RcppExport SEXP _bigstatsr_getXPtrFBM(SEXP pathSEXP, SEXP nSEXP, SEXP mSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    rcpp_result_gen = Rcpp::wrap(getXPtrFBM(path, n, m, type));
    return rcpp_result_gen;
END_RCPP
}
// COPY_cdfit_gaussian_hsr
List COPY_cdfit_gaussian_hsr(Environment BM, const NumericVector& y, const IntegerVector& row_idx, const IntegerVector& col_idx, const NumericMatrix& covar, const NumericVector& lambda, const NumericVector& center, const NumericVector& scale, NumericVector& resid, double alpha, double eps, int max_iter, int dfmax, bool warn, const IntegerVector& row_idx_val, const NumericMatrix& covar_val, const NumericVector& y_val, int n_abort, int nlam_min);
RcppExport SEXP _bigstatsr_COPY_cdfit_gaussian_hsr(SEXP BMSEXP, SEXP ySEXP, SEXP row_idxSEXP, SEXP col_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP residSEXP, SEXP alphaSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP dfmaxSEXP, SEXP warnSEXP, SEXP row_idx_valSEXP, SEXP covar_valSEXP, SEXP y_valSEXP, SEXP n_abortSEXP, SEXP nlam_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type resid(residSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type warn(warnSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx_val(row_idx_valSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar_val(covar_valSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_val(y_valSEXP);
    Rcpp::traits::input_parameter< int >::type n_abort(n_abortSEXP);
    Rcpp::traits::input_parameter< int >::type nlam_min(nlam_minSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_cdfit_gaussian_hsr(BM, y, row_idx, col_idx, covar, lambda, center, scale, resid, alpha, eps, max_iter, dfmax, warn, row_idx_val, covar_val, y_val, n_abort, nlam_min));
    return rcpp_result_gen;
END_RCPP
}
// COPY_cdfit_binomial_hsr
List COPY_cdfit_binomial_hsr(Environment BM, const NumericVector& y, const IntegerVector& row_idx, const IntegerVector& col_idx, const NumericMatrix& covar, const NumericVector& lambda, const NumericVector& center, const NumericVector& scale, NumericVector& resid, double alpha, double eps, int max_iter, int dfmax, bool warn, const IntegerVector& row_idx_val, const NumericMatrix& covar_val, const NumericVector& y_val, int n_abort, int nlam_min);
RcppExport SEXP _bigstatsr_COPY_cdfit_binomial_hsr(SEXP BMSEXP, SEXP ySEXP, SEXP row_idxSEXP, SEXP col_idxSEXP, SEXP covarSEXP, SEXP lambdaSEXP, SEXP centerSEXP, SEXP scaleSEXP, SEXP residSEXP, SEXP alphaSEXP, SEXP epsSEXP, SEXP max_iterSEXP, SEXP dfmaxSEXP, SEXP warnSEXP, SEXP row_idx_valSEXP, SEXP covar_valSEXP, SEXP y_valSEXP, SEXP n_abortSEXP, SEXP nlam_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type center(centerSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type scale(scaleSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type resid(residSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< bool >::type warn(warnSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx_val(row_idx_valSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar_val(covar_valSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type y_val(y_valSEXP);
    Rcpp::traits::input_parameter< int >::type n_abort(n_abortSEXP);
    Rcpp::traits::input_parameter< int >::type nlam_min(nlam_minSEXP);
    rcpp_result_gen = Rcpp::wrap(COPY_cdfit_binomial_hsr(BM, y, row_idx, col_idx, covar, lambda, center, scale, resid, alpha, eps, max_iter, dfmax, warn, row_idx_val, covar_val, y_val, n_abort, nlam_min));
    return rcpp_result_gen;
END_RCPP
}
// bigsummaries
NumericVector bigsummaries(Environment BM, const IntegerVector& row_idx, const IntegerVector& col_idx, const NumericMatrix& covar, const IntegerVector& y, const IntegerVector& which_set, int K);
RcppExport SEXP _bigstatsr_bigsummaries(SEXP BMSEXP, SEXP row_idxSEXP, SEXP col_idxSEXP, SEXP covarSEXP, SEXP ySEXP, SEXP which_setSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type row_idx(row_idxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type col_idx(col_idxSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type which_set(which_setSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(bigsummaries(BM, row_idx, col_idx, covar, y, which_set, K));
    return rcpp_result_gen;
END_RCPP
}
// bigcolvars
ListOf<NumericVector> bigcolvars(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_bigcolvars(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(bigcolvars(BM, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// mycount1
IntegerMatrix mycount1(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& codeInd);
RcppExport SEXP _bigstatsr_mycount1(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP codeIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type codeInd(codeIndSEXP);
    rcpp_result_gen = Rcpp::wrap(mycount1(BM, rowInd, colInd, codeInd));
    return rcpp_result_gen;
END_RCPP
}
// mycount2
IntegerMatrix mycount2(Environment BM, const IntegerVector& rowInd, const IntegerVector& colInd, const IntegerVector& codeInd);
RcppExport SEXP _bigstatsr_mycount2(SEXP BMSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP codeIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type codeInd(codeIndSEXP);
    rcpp_result_gen = Rcpp::wrap(mycount2(BM, rowInd, colInd, codeInd));
    return rcpp_result_gen;
END_RCPP
}
// createFile
void createFile(std::string fileName, int nrow, int ncol, int type);
RcppExport SEXP _bigstatsr_createFile(SEXP fileNameSEXP, SEXP nrowSEXP, SEXP ncolSEXP, SEXP typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type type(typeSEXP);
    createFile(fileName, nrow, ncol, type);
    return R_NilValue;
END_RCPP
}
// decodeMat
NumericMatrix decodeMat(const RawMatrix& source, const NumericVector& code);
RcppExport SEXP _bigstatsr_decodeMat(SEXP sourceSEXP, SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type code(codeSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeMat(source, code));
    return rcpp_result_gen;
END_RCPP
}
// decodeVec
NumericVector decodeVec(const RawVector& source, const NumericVector& code);
RcppExport SEXP _bigstatsr_decodeVec(SEXP sourceSEXP, SEXP codeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawVector& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type code(codeSEXP);
    rcpp_result_gen = Rcpp::wrap(decodeVec(source, code));
    return rcpp_result_gen;
END_RCPP
}
// GET_ERROR_TYPE
const char* const GET_ERROR_TYPE();
RcppExport SEXP _bigstatsr_GET_ERROR_TYPE() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(GET_ERROR_TYPE());
    return rcpp_result_gen;
END_RCPP
}
// GET_ERROR_DIM
const char* const GET_ERROR_DIM();
RcppExport SEXP _bigstatsr_GET_ERROR_DIM() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(GET_ERROR_DIM());
    return rcpp_result_gen;
END_RCPP
}
// GET_ERROR_BOUNDS
const char* const GET_ERROR_BOUNDS();
RcppExport SEXP _bigstatsr_GET_ERROR_BOUNDS() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(GET_ERROR_BOUNDS());
    return rcpp_result_gen;
END_RCPP
}
// GET_ERROR_USHORT
const char* const GET_ERROR_USHORT();
RcppExport SEXP _bigstatsr_GET_ERROR_USHORT() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(GET_ERROR_USHORT());
    return rcpp_result_gen;
END_RCPP
}
// extractVec
RObject extractVec(RObject xpbm, const NumericVector& elemInd);
RcppExport SEXP _bigstatsr_extractVec(SEXP xpbmSEXP, SEXP elemIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type xpbm(xpbmSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type elemInd(elemIndSEXP);
    rcpp_result_gen = Rcpp::wrap(extractVec(xpbm, elemInd));
    return rcpp_result_gen;
END_RCPP
}
// extractMat
RObject extractMat(RObject xpbm, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_extractMat(SEXP xpbmSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type xpbm(xpbmSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(extractMat(xpbm, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// pMatVec4
NumericVector pMatVec4(Environment BM, const NumericVector& x, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_pMatVec4(SEXP BMSEXP, SEXP xSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(pMatVec4(BM, x, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// cpMatVec4
NumericVector cpMatVec4(Environment BM, const NumericVector& x, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_cpMatVec4(SEXP BMSEXP, SEXP xSEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(cpMatVec4(BM, x, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// replaceVecOne
void replaceVecOne(RObject xpbm, const NumericVector& elemInd, RObject val);
RcppExport SEXP _bigstatsr_replaceVecOne(SEXP xpbmSEXP, SEXP elemIndSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type xpbm(xpbmSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type elemInd(elemIndSEXP);
    Rcpp::traits::input_parameter< RObject >::type val(valSEXP);
    replaceVecOne(xpbm, elemInd, val);
    return R_NilValue;
END_RCPP
}
// replaceVec
void replaceVec(RObject xpbm, const NumericVector& elemInd, RObject vec);
RcppExport SEXP _bigstatsr_replaceVec(SEXP xpbmSEXP, SEXP elemIndSEXP, SEXP vecSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type xpbm(xpbmSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type elemInd(elemIndSEXP);
    Rcpp::traits::input_parameter< RObject >::type vec(vecSEXP);
    replaceVec(xpbm, elemInd, vec);
    return R_NilValue;
END_RCPP
}
// replaceMatOne
void replaceMatOne(RObject xpbm, const IntegerVector& rowInd, const IntegerVector& colInd, RObject val);
RcppExport SEXP _bigstatsr_replaceMatOne(SEXP xpbmSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP valSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type xpbm(xpbmSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< RObject >::type val(valSEXP);
    replaceMatOne(xpbm, rowInd, colInd, val);
    return R_NilValue;
END_RCPP
}
// replaceMat
void replaceMat(RObject xpbm, const IntegerVector& rowInd, const IntegerVector& colInd, RObject mat);
RcppExport SEXP _bigstatsr_replaceMat(SEXP xpbmSEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type xpbm(xpbmSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< RObject >::type mat(matSEXP);
    replaceMat(xpbm, rowInd, colInd, mat);
    return R_NilValue;
END_RCPP
}
// transpose3
void transpose3(Environment BM, Environment BM2);
RcppExport SEXP _bigstatsr_transpose3(SEXP BMSEXP, SEXP BM2SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< Environment >::type BM2(BM2SEXP);
    transpose3(BM, BM2);
    return R_NilValue;
END_RCPP
}
// univLinReg5
List univLinReg5(Environment BM, const arma::mat& covar_U, const arma::vec& y, const IntegerVector& rowInd, const IntegerVector& colInd);
RcppExport SEXP _bigstatsr_univLinReg5(SEXP BMSEXP, SEXP covar_USEXP, SEXP ySEXP, SEXP rowIndSEXP, SEXP colIndSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type covar_U(covar_USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    rcpp_result_gen = Rcpp::wrap(univLinReg5(BM, covar_U, y, rowInd, colInd));
    return rcpp_result_gen;
END_RCPP
}
// IRLS
List IRLS(Environment BM, arma::mat& covar, const arma::vec& y, const arma::vec& z0, const arma::vec& w0, const IntegerVector& rowInd, const IntegerVector& colInd, double tol, int maxiter);
RcppExport SEXP _bigstatsr_IRLS(SEXP BMSEXP, SEXP covarSEXP, SEXP ySEXP, SEXP z0SEXP, SEXP w0SEXP, SEXP rowIndSEXP, SEXP colIndSEXP, SEXP tolSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type covar(covarSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type z0(z0SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w0(w0SEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type rowInd(rowIndSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type colInd(colIndSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(IRLS(BM, covar, y, z0, w0, rowInd, colInd, tol, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// scaling
NumericMatrix& scaling(NumericMatrix& source, const NumericVector& mean, const NumericVector& sd);
RcppExport SEXP _bigstatsr_scaling(SEXP sourceSEXP, SEXP meanSEXP, SEXP sdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type source(sourceSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sd(sdSEXP);
    rcpp_result_gen = Rcpp::wrap(scaling(source, mean, sd));
    return rcpp_result_gen;
END_RCPP
}
// complete2
void complete2(Environment BM);
RcppExport SEXP _bigstatsr_complete2(SEXP BMSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    complete2(BM);
    return R_NilValue;
END_RCPP
}
// incrSup2
void incrSup2(Environment BM, const NumericMatrix& source);
RcppExport SEXP _bigstatsr_incrSup2(SEXP BMSEXP, SEXP sourceSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type source(sourceSEXP);
    incrSup2(BM, source);
    return R_NilValue;
END_RCPP
}
// scaleK
void scaleK(Environment BM, const NumericVector& sums, const NumericVector& mu, const NumericVector& delta, int nrow);
RcppExport SEXP _bigstatsr_scaleK(SEXP BMSEXP, SEXP sumsSEXP, SEXP muSEXP, SEXP deltaSEXP, SEXP nrowSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Environment >::type BM(BMSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type sums(sumsSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    scaleK(BM, sums, mu, delta, nrow);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigstatsr_auc_sorted", (DL_FUNC) &_bigstatsr_auc_sorted, 2},
    {"_bigstatsr_getXPtrFBM", (DL_FUNC) &_bigstatsr_getXPtrFBM, 4},
    {"_bigstatsr_COPY_cdfit_gaussian_hsr", (DL_FUNC) &_bigstatsr_COPY_cdfit_gaussian_hsr, 19},
    {"_bigstatsr_COPY_cdfit_binomial_hsr", (DL_FUNC) &_bigstatsr_COPY_cdfit_binomial_hsr, 19},
    {"_bigstatsr_bigsummaries", (DL_FUNC) &_bigstatsr_bigsummaries, 7},
    {"_bigstatsr_bigcolvars", (DL_FUNC) &_bigstatsr_bigcolvars, 3},
    {"_bigstatsr_mycount1", (DL_FUNC) &_bigstatsr_mycount1, 4},
    {"_bigstatsr_mycount2", (DL_FUNC) &_bigstatsr_mycount2, 4},
    {"_bigstatsr_createFile", (DL_FUNC) &_bigstatsr_createFile, 4},
    {"_bigstatsr_decodeMat", (DL_FUNC) &_bigstatsr_decodeMat, 2},
    {"_bigstatsr_decodeVec", (DL_FUNC) &_bigstatsr_decodeVec, 2},
    {"_bigstatsr_GET_ERROR_TYPE", (DL_FUNC) &_bigstatsr_GET_ERROR_TYPE, 0},
    {"_bigstatsr_GET_ERROR_DIM", (DL_FUNC) &_bigstatsr_GET_ERROR_DIM, 0},
    {"_bigstatsr_GET_ERROR_BOUNDS", (DL_FUNC) &_bigstatsr_GET_ERROR_BOUNDS, 0},
    {"_bigstatsr_GET_ERROR_USHORT", (DL_FUNC) &_bigstatsr_GET_ERROR_USHORT, 0},
    {"_bigstatsr_extractVec", (DL_FUNC) &_bigstatsr_extractVec, 2},
    {"_bigstatsr_extractMat", (DL_FUNC) &_bigstatsr_extractMat, 3},
    {"_bigstatsr_pMatVec4", (DL_FUNC) &_bigstatsr_pMatVec4, 4},
    {"_bigstatsr_cpMatVec4", (DL_FUNC) &_bigstatsr_cpMatVec4, 4},
    {"_bigstatsr_replaceVecOne", (DL_FUNC) &_bigstatsr_replaceVecOne, 3},
    {"_bigstatsr_replaceVec", (DL_FUNC) &_bigstatsr_replaceVec, 3},
    {"_bigstatsr_replaceMatOne", (DL_FUNC) &_bigstatsr_replaceMatOne, 4},
    {"_bigstatsr_replaceMat", (DL_FUNC) &_bigstatsr_replaceMat, 4},
    {"_bigstatsr_transpose3", (DL_FUNC) &_bigstatsr_transpose3, 2},
    {"_bigstatsr_univLinReg5", (DL_FUNC) &_bigstatsr_univLinReg5, 5},
    {"_bigstatsr_IRLS", (DL_FUNC) &_bigstatsr_IRLS, 9},
    {"_bigstatsr_scaling", (DL_FUNC) &_bigstatsr_scaling, 3},
    {"_bigstatsr_complete2", (DL_FUNC) &_bigstatsr_complete2, 1},
    {"_bigstatsr_incrSup2", (DL_FUNC) &_bigstatsr_incrSup2, 2},
    {"_bigstatsr_scaleK", (DL_FUNC) &_bigstatsr_scaleK, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigstatsr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
