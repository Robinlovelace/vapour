// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// raster_info_cpp
List raster_info_cpp(const char* pszFilename);
RcppExport SEXP _vapour_raster_info_cpp(SEXP pszFilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type pszFilename(pszFilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_info_cpp(pszFilename));
    return rcpp_result_gen;
END_RCPP
}
// raster_io_cpp
List raster_io_cpp(CharacterVector filename, IntegerVector window, IntegerVector band, CharacterVector resample);
RcppExport SEXP _vapour_raster_io_cpp(SEXP filenameSEXP, SEXP windowSEXP, SEXP bandSEXP, SEXP resampleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type window(windowSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type band(bandSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type resample(resampleSEXP);
    rcpp_result_gen = Rcpp::wrap(raster_io_cpp(filename, window, band, resample));
    return rcpp_result_gen;
END_RCPP
}
// sds_info_cpp
CharacterVector sds_info_cpp(const char* pszFilename);
RcppExport SEXP _vapour_sds_info_cpp(SEXP pszFilenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type pszFilename(pszFilenameSEXP);
    rcpp_result_gen = Rcpp::wrap(sds_info_cpp(pszFilename));
    return rcpp_result_gen;
END_RCPP
}
// vapour_layer_names_cpp
Rcpp::CharacterVector vapour_layer_names_cpp(Rcpp::CharacterVector dsource, Rcpp::CharacterVector sql);
RcppExport SEXP _vapour_vapour_layer_names_cpp(SEXP dsourceSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dsource(dsourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(vapour_layer_names_cpp(dsource, sql));
    return rcpp_result_gen;
END_RCPP
}
// vapour_read_attributes_cpp
List vapour_read_attributes_cpp(Rcpp::CharacterVector dsource, Rcpp::IntegerVector layer, Rcpp::CharacterVector sql);
RcppExport SEXP _vapour_vapour_read_attributes_cpp(SEXP dsourceSEXP, SEXP layerSEXP, SEXP sqlSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dsource(dsourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sql(sqlSEXP);
    rcpp_result_gen = Rcpp::wrap(vapour_read_attributes_cpp(dsource, layer, sql));
    return rcpp_result_gen;
END_RCPP
}
// vapour_read_geometry_cpp
List vapour_read_geometry_cpp(Rcpp::CharacterVector dsource, Rcpp::IntegerVector layer, Rcpp::CharacterVector sql, Rcpp::CharacterVector what, Rcpp::CharacterVector textformat);
RcppExport SEXP _vapour_vapour_read_geometry_cpp(SEXP dsourceSEXP, SEXP layerSEXP, SEXP sqlSEXP, SEXP whatSEXP, SEXP textformatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dsource(dsourceSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type layer(layerSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type sql(sqlSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type what(whatSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type textformat(textformatSEXP);
    rcpp_result_gen = Rcpp::wrap(vapour_read_geometry_cpp(dsource, layer, sql, what, textformat));
    return rcpp_result_gen;
END_RCPP
}
