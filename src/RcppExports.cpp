// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_format_wkb
Rcpp::CharacterVector cpp_format_wkb(Rcpp::List wkb, int maxCoords, int precision, bool trim);
RcppExport SEXP _wk_cpp_format_wkb(SEXP wkbSEXP, SEXP maxCoordsSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type wkb(wkbSEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_format_wkb(wkb, maxCoords, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
// cpp_format_wkt
Rcpp::CharacterVector cpp_format_wkt(CharacterVector wkt, int maxCoords, int precision, bool trim);
RcppExport SEXP _wk_cpp_format_wkt(SEXP wktSEXP, SEXP maxCoordsSEXP, SEXP precisionSEXP, SEXP trimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type wkt(wktSEXP);
    Rcpp::traits::input_parameter< int >::type maxCoords(maxCoordsSEXP);
    Rcpp::traits::input_parameter< int >::type precision(precisionSEXP);
    Rcpp::traits::input_parameter< bool >::type trim(trimSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_format_wkt(wkt, maxCoords, precision, trim));
    return rcpp_result_gen;
END_RCPP
}
