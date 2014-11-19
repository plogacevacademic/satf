// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_initialize_logLikFn
LogicalVector rcpp_initialize_logLikFn(CharacterVector& dv, NumericMatrix& dm, IntegerVector& dm_ncoef, NumericMatrix& constraints, DataFrame& data, CharacterVector& cnames);
RcppExport SEXP satf_rcpp_initialize_logLikFn(SEXP dvSEXP, SEXP dmSEXP, SEXP dm_ncoefSEXP, SEXP constraintsSEXP, SEXP dataSEXP, SEXP cnamesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector& >::type dv(dvSEXP );
        Rcpp::traits::input_parameter< NumericMatrix& >::type dm(dmSEXP );
        Rcpp::traits::input_parameter< IntegerVector& >::type dm_ncoef(dm_ncoefSEXP );
        Rcpp::traits::input_parameter< NumericMatrix& >::type constraints(constraintsSEXP );
        Rcpp::traits::input_parameter< DataFrame& >::type data(dataSEXP );
        Rcpp::traits::input_parameter< CharacterVector& >::type cnames(cnamesSEXP );
        LogicalVector __result = rcpp_initialize_logLikFn(dv, dm, dm_ncoef, constraints, data, cnames);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_update_constraints_logLikFn
LogicalVector rcpp_update_constraints_logLikFn(NumericMatrix& constraints);
RcppExport SEXP satf_rcpp_update_constraints_logLikFn(SEXP constraintsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix& >::type constraints(constraintsSEXP );
        LogicalVector __result = rcpp_update_constraints_logLikFn(constraints);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_deinitialize_logLikFn
LogicalVector rcpp_deinitialize_logLikFn();
RcppExport SEXP satf_rcpp_deinitialize_logLikFn() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        LogicalVector __result = rcpp_deinitialize_logLikFn();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_is_initialized_logLikFn
LogicalVector rcpp_is_initialized_logLikFn();
RcppExport SEXP satf_rcpp_is_initialized_logLikFn() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        LogicalVector __result = rcpp_is_initialized_logLikFn();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_get_coef_names
CharacterVector rcpp_get_coef_names();
RcppExport SEXP satf_rcpp_get_coef_names() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        CharacterVector __result = rcpp_get_coef_names();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_compute_logLikFn
DoubleVector rcpp_compute_logLikFn(DoubleVector& coefs, bool by_row = false, bool tolerate_imprecision = true, bool force_update = false);
RcppExport SEXP satf_rcpp_compute_logLikFn(SEXP coefsSEXP, SEXP by_rowSEXP, SEXP tolerate_imprecisionSEXP, SEXP force_updateSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DoubleVector& >::type coefs(coefsSEXP );
        Rcpp::traits::input_parameter< bool >::type by_row(by_rowSEXP );
        Rcpp::traits::input_parameter< bool >::type tolerate_imprecision(tolerate_imprecisionSEXP );
        Rcpp::traits::input_parameter< bool >::type force_update(force_updateSEXP );
        DoubleVector __result = rcpp_compute_logLikFn(coefs, by_row, tolerate_imprecision, force_update);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_compute_logLikFn_gradient
NumericMatrix rcpp_compute_logLikFn_gradient(DoubleVector& coefs, bool by_row = false, bool tolerate_imprecision = true);
RcppExport SEXP satf_rcpp_compute_logLikFn_gradient(SEXP coefsSEXP, SEXP by_rowSEXP, SEXP tolerate_imprecisionSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DoubleVector& >::type coefs(coefsSEXP );
        Rcpp::traits::input_parameter< bool >::type by_row(by_rowSEXP );
        Rcpp::traits::input_parameter< bool >::type tolerate_imprecision(tolerate_imprecisionSEXP );
        NumericMatrix __result = rcpp_compute_logLikFn_gradient(coefs, by_row, tolerate_imprecision);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_constrain_coefs
DoubleVector rcpp_constrain_coefs(DoubleVector& coefs);
RcppExport SEXP satf_rcpp_constrain_coefs(SEXP coefsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DoubleVector& >::type coefs(coefsSEXP );
        DoubleVector __result = rcpp_constrain_coefs(coefs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_unconstrain_coefs
DoubleVector rcpp_unconstrain_coefs(DoubleVector& coefs);
RcppExport SEXP satf_rcpp_unconstrain_coefs(SEXP coefsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DoubleVector& >::type coefs(coefsSEXP );
        DoubleVector __result = rcpp_unconstrain_coefs(coefs);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_select_coef_subset
bool rcpp_select_coef_subset(Rcpp::CharacterVector& coefnames);
RcppExport SEXP satf_rcpp_select_coef_subset(SEXP coefnamesSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< Rcpp::CharacterVector& >::type coefnames(coefnamesSEXP );
        bool __result = rcpp_select_coef_subset(coefnames);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_reset_selection
void rcpp_reset_selection();
RcppExport SEXP satf_rcpp_reset_selection() {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        rcpp_reset_selection();
    }
    return R_NilValue;
END_RCPP
}
// rcpp_return_selection
IntegerVector rcpp_return_selection();
RcppExport SEXP satf_rcpp_return_selection() {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        IntegerVector __result = rcpp_return_selection();
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_set_coef_values
void rcpp_set_coef_values(DoubleVector& values);
RcppExport SEXP satf_rcpp_set_coef_values(SEXP valuesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DoubleVector& >::type values(valuesSEXP );
        rcpp_set_coef_values(values);
    }
    return R_NilValue;
END_RCPP
}
// rcpp_reset_coef_ranges
void rcpp_reset_coef_ranges(CharacterVector& names);
RcppExport SEXP satf_rcpp_reset_coef_ranges(SEXP namesSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< CharacterVector& >::type names(namesSEXP );
        rcpp_reset_coef_ranges(names);
    }
    return R_NilValue;
END_RCPP
}
// rcpp_pnorm2d
double rcpp_pnorm2d(double x_lower, double y_lower, double rho, bool second_order);
RcppExport SEXP satf_rcpp_pnorm2d(SEXP x_lowerSEXP, SEXP y_lowerSEXP, SEXP rhoSEXP, SEXP second_orderSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type x_lower(x_lowerSEXP );
        Rcpp::traits::input_parameter< double >::type y_lower(y_lowerSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< bool >::type second_order(second_orderSEXP );
        double __result = rcpp_pnorm2d(x_lower, y_lower, rho, second_order);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_pnorm2d_derivative_by_rho
double rcpp_pnorm2d_derivative_by_rho(double a, double b, double rho, bool second_order);
RcppExport SEXP satf_rcpp_pnorm2d_derivative_by_rho(SEXP aSEXP, SEXP bSEXP, SEXP rhoSEXP, SEXP second_orderSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< double >::type a(aSEXP );
        Rcpp::traits::input_parameter< double >::type b(bSEXP );
        Rcpp::traits::input_parameter< double >::type rho(rhoSEXP );
        Rcpp::traits::input_parameter< bool >::type second_order(second_orderSEXP );
        double __result = rcpp_pnorm2d_derivative_by_rho(a, b, rho, second_order);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// rcpp_correlate
DoubleVector rcpp_correlate(IntegerVector& trial_id, DoubleVector& noise, DoubleVector& rho_vec);
RcppExport SEXP satf_rcpp_correlate(SEXP trial_idSEXP, SEXP noiseSEXP, SEXP rho_vecSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector& >::type trial_id(trial_idSEXP );
        Rcpp::traits::input_parameter< DoubleVector& >::type noise(noiseSEXP );
        Rcpp::traits::input_parameter< DoubleVector& >::type rho_vec(rho_vecSEXP );
        DoubleVector __result = rcpp_correlate(trial_id, noise, rho_vec);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}