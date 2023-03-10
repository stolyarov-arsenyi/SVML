#ifndef  SVML__SVML_H
#define  SVML__SVML_H


#undef _mm_acos_pd
#undef _mm256_acos_pd
#undef _mm512_acos_pd
#undef _mm512_mask_acos_pd
#undef _mm_acos_ps
#undef _mm256_acos_ps
#undef _mm512_acos_ps
#undef _mm512_mask_acos_ps
#undef _mm_acosh_pd
#undef _mm256_acosh_pd
#undef _mm512_acosh_pd
#undef _mm512_mask_acosh_pd
#undef _mm_acosh_ps
#undef _mm256_acosh_ps
#undef _mm512_acosh_ps
#undef _mm512_mask_acosh_ps
#undef _mm_asin_pd
#undef _mm256_asin_pd
#undef _mm512_asin_pd
#undef _mm512_mask_asin_pd
#undef _mm_asin_ps
#undef _mm256_asin_ps
#undef _mm512_asin_ps
#undef _mm512_mask_asin_ps
#undef _mm_asinh_pd
#undef _mm256_asinh_pd
#undef _mm512_asinh_pd
#undef _mm512_mask_asinh_pd
#undef _mm_asinh_ps
#undef _mm256_asinh_ps
#undef _mm512_asinh_ps
#undef _mm512_mask_asinh_ps
#undef _mm_atan_pd
#undef _mm256_atan_pd
#undef _mm512_atan_pd
#undef _mm512_mask_atan_pd
#undef _mm_atan_ps
#undef _mm256_atan_ps
#undef _mm512_atan_ps
#undef _mm512_mask_atan_ps
#undef _mm_atan2_pd
#undef _mm256_atan2_pd
#undef _mm512_atan2_pd
#undef _mm512_mask_atan2_pd
#undef _mm_atan2_ps
#undef _mm256_atan2_ps
#undef _mm512_atan2_ps
#undef _mm512_mask_atan2_ps
#undef _mm_atanh_pd
#undef _mm256_atanh_pd
#undef _mm512_atanh_pd
#undef _mm512_mask_atanh_pd
#undef _mm_atanh_ps
#undef _mm256_atanh_ps
#undef _mm512_atanh_ps
#undef _mm512_mask_atanh_ps
#undef _mm_cbrt_pd
#undef _mm256_cbrt_pd
#undef _mm512_cbrt_pd
#undef _mm512_mask_cbrt_pd
#undef _mm_cbrt_ps
#undef _mm256_cbrt_ps
#undef _mm512_cbrt_ps
#undef _mm512_mask_cbrt_ps
#undef _mm_cdfnorm_pd
#undef _mm256_cdfnorm_pd
#undef _mm512_cdfnorm_pd
#undef _mm512_mask_cdfnorm_pd
#undef _mm_cdfnorm_ps
#undef _mm256_cdfnorm_ps
#undef _mm512_cdfnorm_ps
#undef _mm512_mask_cdfnorm_ps
#undef _mm_cdfnorminv_pd
#undef _mm256_cdfnorminv_pd
#undef _mm512_cdfnorminv_pd
#undef _mm512_mask_cdfnorminv_pd
#undef _mm_cdfnorminv_ps
#undef _mm256_cdfnorminv_ps
#undef _mm512_cdfnorminv_ps
#undef _mm512_mask_cdfnorminv_ps
#undef _mm512_ceil_pd
#undef _mm512_mask_ceil_pd
#undef _mm512_ceil_ps
#undef _mm512_mask_ceil_ps
#undef _mm_cexp_ps
#undef _mm256_cexp_ps
#undef _mm_clog_ps
#undef _mm256_clog_ps
#undef _mm_cos_pd
#undef _mm256_cos_pd
#undef _mm512_cos_pd
#undef _mm512_mask_cos_pd
#undef _mm_cos_ps
#undef _mm256_cos_ps
#undef _mm512_cos_ps
#undef _mm512_mask_cos_ps
#undef _mm_cosd_pd
#undef _mm256_cosd_pd
#undef _mm512_cosd_pd
#undef _mm512_mask_cosd_pd
#undef _mm_cosd_ps
#undef _mm256_cosd_ps
#undef _mm512_cosd_ps
#undef _mm512_mask_cosd_ps
#undef _mm_cosh_pd
#undef _mm256_cosh_pd
#undef _mm512_cosh_pd
#undef _mm512_mask_cosh_pd
#undef _mm_cosh_ps
#undef _mm256_cosh_ps
#undef _mm512_cosh_ps
#undef _mm512_mask_cosh_ps
#undef _mm_csqrt_ps
#undef _mm256_csqrt_ps
#undef _mm_div_epi16
#undef _mm256_div_epi16
#undef _mm512_div_epi16
#undef _mm_div_epi32
#undef _mm256_div_epi32
#undef _mm512_div_epi32
#undef _mm512_mask_div_epi32
#undef _mm_div_epi64
#undef _mm256_div_epi64
#undef _mm512_div_epi64
#undef _mm_div_epi8
#undef _mm256_div_epi8
#undef _mm512_div_epi8
#undef _mm_div_epu16
#undef _mm256_div_epu16
#undef _mm512_div_epu16
#undef _mm_div_epu32
#undef _mm256_div_epu32
#undef _mm512_div_epu32
#undef _mm512_mask_div_epu32
#undef _mm_div_epu64
#undef _mm256_div_epu64
#undef _mm512_div_epu64
#undef _mm_div_epu8
#undef _mm256_div_epu8
#undef _mm512_div_epu8
#undef _mm_erf_pd
#undef _mm256_erf_pd
#undef _mm512_erf_pd
#undef _mm512_mask_erf_pd
#undef _mm_erf_ps
#undef _mm256_erf_ps
#undef _mm512_erf_ps
#undef _mm512_mask_erf_ps
#undef _mm_erfc_pd
#undef _mm256_erfc_pd
#undef _mm512_erfc_pd
#undef _mm512_mask_erfc_pd
#undef _mm_erfc_ps
#undef _mm256_erfc_ps
#undef _mm512_erfc_ps
#undef _mm512_mask_erfc_ps
#undef _mm_erfcinv_pd
#undef _mm256_erfcinv_pd
#undef _mm512_erfcinv_pd
#undef _mm512_mask_erfcinv_pd
#undef _mm_erfcinv_ps
#undef _mm256_erfcinv_ps
#undef _mm512_erfcinv_ps
#undef _mm512_mask_erfcinv_ps
#undef _mm_erfinv_pd
#undef _mm256_erfinv_pd
#undef _mm512_erfinv_pd
#undef _mm512_mask_erfinv_pd
#undef _mm_erfinv_ps
#undef _mm256_erfinv_ps
#undef _mm512_erfinv_ps
#undef _mm512_mask_erfinv_ps
#undef _mm_exp_pd
#undef _mm256_exp_pd
#undef _mm512_exp_pd
#undef _mm512_mask_exp_pd
#undef _mm_exp_ps
#undef _mm256_exp_ps
#undef _mm512_exp_ps
#undef _mm512_mask_exp_ps
#undef _mm_exp10_pd
#undef _mm256_exp10_pd
#undef _mm512_exp10_pd
#undef _mm512_mask_exp10_pd
#undef _mm_exp10_ps
#undef _mm256_exp10_ps
#undef _mm512_exp10_ps
#undef _mm512_mask_exp10_ps
#undef _mm_exp2_pd
#undef _mm256_exp2_pd
#undef _mm512_exp2_pd
#undef _mm512_mask_exp2_pd
#undef _mm_exp2_ps
#undef _mm256_exp2_ps
#undef _mm512_exp2_ps
#undef _mm512_mask_exp2_ps
#undef _mm_expm1_pd
#undef _mm256_expm1_pd
#undef _mm512_expm1_pd
#undef _mm512_mask_expm1_pd
#undef _mm_expm1_ps
#undef _mm256_expm1_ps
#undef _mm512_expm1_ps
#undef _mm512_mask_expm1_ps
#undef _mm512_floor_pd
#undef _mm512_mask_floor_pd
#undef _mm512_floor_ps
#undef _mm512_mask_floor_ps
#undef _mm_hypot_pd
#undef _mm256_hypot_pd
#undef _mm512_hypot_pd
#undef _mm512_mask_hypot_pd
#undef _mm_hypot_ps
#undef _mm256_hypot_ps
#undef _mm512_hypot_ps
#undef _mm512_mask_hypot_ps
#undef _mm_idiv_epi32
#undef _mm256_idiv_epi32
#undef _mm_idivrem_epi32
#undef _mm256_idivrem_epi32
#undef _mm_invcbrt_pd
#undef _mm256_invcbrt_pd
#undef _mm_invcbrt_ps
#undef _mm256_invcbrt_ps
#undef _mm_invsqrt_pd
#undef _mm256_invsqrt_pd
#undef _mm512_invsqrt_pd
#undef _mm512_mask_invsqrt_pd
#undef _mm_invsqrt_ps
#undef _mm256_invsqrt_ps
#undef _mm512_invsqrt_ps
#undef _mm512_mask_invsqrt_ps
#undef _mm_irem_epi32
#undef _mm256_irem_epi32
#undef _mm_log_pd
#undef _mm256_log_pd
#undef _mm512_log_pd
#undef _mm512_mask_log_pd
#undef _mm_log_ps
#undef _mm256_log_ps
#undef _mm512_log_ps
#undef _mm512_mask_log_ps
#undef _mm_log10_pd
#undef _mm256_log10_pd
#undef _mm512_log10_pd
#undef _mm512_mask_log10_pd
#undef _mm_log10_ps
#undef _mm256_log10_ps
#undef _mm512_log10_ps
#undef _mm512_mask_log10_ps
#undef _mm_log1p_pd
#undef _mm256_log1p_pd
#undef _mm512_log1p_pd
#undef _mm512_mask_log1p_pd
#undef _mm_log1p_ps
#undef _mm256_log1p_ps
#undef _mm512_log1p_ps
#undef _mm512_mask_log1p_ps
#undef _mm_log2_pd
#undef _mm256_log2_pd
#undef _mm512_log2_pd
#undef _mm512_mask_log2_pd
#undef _mm_log2_ps
#undef _mm256_log2_ps
#undef _mm512_log2_ps
#undef _mm512_mask_log2_ps
#undef _mm_logb_pd
#undef _mm256_logb_pd
#undef _mm512_logb_pd
#undef _mm512_mask_logb_pd
#undef _mm_logb_ps
#undef _mm256_logb_ps
#undef _mm512_logb_ps
#undef _mm512_mask_logb_ps
#undef _mm512_mask_nearbyint_pd
#undef _mm512_nearbyint_pd
#undef _mm512_mask_nearbyint_ps
#undef _mm512_nearbyint_ps
#undef _mm_pow_pd
#undef _mm256_pow_pd
#undef _mm512_mask_pow_pd
#undef _mm512_pow_pd
#undef _mm_pow_ps
#undef _mm256_pow_ps
#undef _mm512_mask_pow_ps
#undef _mm512_pow_ps
#undef _mm512_mask_recip_pd
#undef _mm512_recip_pd
#undef _mm512_mask_recip_ps
#undef _mm512_recip_ps
#undef _mm_rem_epi16
#undef _mm256_rem_epi16
#undef _mm512_rem_epi16
#undef _mm_rem_epi32
#undef _mm256_rem_epi32
#undef _mm512_mask_rem_epi32
#undef _mm512_rem_epi32
#undef _mm_rem_epi64
#undef _mm256_rem_epi64
#undef _mm512_rem_epi64
#undef _mm_rem_epi8
#undef _mm256_rem_epi8
#undef _mm512_rem_epi8
#undef _mm_rem_epu16
#undef _mm256_rem_epu16
#undef _mm512_rem_epu16
#undef _mm_rem_epu32
#undef _mm256_rem_epu32
#undef _mm512_mask_rem_epu32
#undef _mm512_rem_epu32
#undef _mm_rem_epu64
#undef _mm256_rem_epu64
#undef _mm512_rem_epu64
#undef _mm_rem_epu8
#undef _mm256_rem_epu8
#undef _mm512_rem_epu8
#undef _mm512_mask_rint_pd
#undef _mm512_rint_pd
#undef _mm512_mask_rint_ps
#undef _mm512_rint_ps
#undef _mm_sin_pd
#undef _mm256_sin_pd
#undef _mm512_mask_sin_pd
#undef _mm512_sin_pd
#undef _mm_sin_ps
#undef _mm256_sin_ps
#undef _mm512_mask_sin_ps
#undef _mm512_sin_ps
#undef _mm_sincos_pd
#undef _mm256_sincos_pd
#undef _mm512_mask_sincos_pd
#undef _mm512_sincos_pd
#undef _mm_sincos_ps
#undef _mm256_sincos_ps
#undef _mm512_mask_sincos_ps
#undef _mm512_sincos_ps
#undef _mm_sind_pd
#undef _mm256_sind_pd
#undef _mm512_mask_sind_pd
#undef _mm512_sind_pd
#undef _mm_sind_ps
#undef _mm256_sind_ps
#undef _mm512_mask_sind_ps
#undef _mm512_sind_ps
#undef _mm_sinh_pd
#undef _mm256_sinh_pd
#undef _mm512_mask_sinh_pd
#undef _mm512_sinh_pd
#undef _mm_sinh_ps
#undef _mm256_sinh_ps
#undef _mm512_mask_sinh_ps
#undef _mm512_sinh_ps
#undef _mm_svml_ceil_pd
#undef _mm256_svml_ceil_pd
#undef _mm_svml_ceil_ps
#undef _mm256_svml_ceil_ps
#undef _mm_svml_floor_pd
#undef _mm256_svml_floor_pd
#undef _mm_svml_floor_ps
#undef _mm256_svml_floor_ps
#undef _mm_svml_round_pd
#undef _mm256_svml_round_pd
#undef _mm512_mask_svml_round_pd
#undef _mm512_svml_round_pd
#undef _mm_svml_round_ps
#undef _mm256_svml_round_ps
#undef _mm_svml_sqrt_pd
#undef _mm256_svml_sqrt_pd
#undef _mm_svml_sqrt_ps
#undef _mm256_svml_sqrt_ps
#undef _mm_tan_pd
#undef _mm256_tan_pd
#undef _mm512_mask_tan_pd
#undef _mm512_tan_pd
#undef _mm_tan_ps
#undef _mm256_tan_ps
#undef _mm512_mask_tan_ps
#undef _mm512_tan_ps
#undef _mm_tand_pd
#undef _mm256_tand_pd
#undef _mm512_mask_tand_pd
#undef _mm512_tand_pd
#undef _mm_tand_ps
#undef _mm256_tand_ps
#undef _mm512_mask_tand_ps
#undef _mm512_tand_ps
#undef _mm_tanh_pd
#undef _mm256_tanh_pd
#undef _mm512_mask_tanh_pd
#undef _mm512_tanh_pd
#undef _mm_tanh_ps
#undef _mm256_tanh_ps
#undef _mm512_mask_tanh_ps
#undef _mm512_tanh_ps
#undef _mm_trunc_pd
#undef _mm256_trunc_pd
#undef _mm512_mask_trunc_pd
#undef _mm512_trunc_pd
#undef _mm_trunc_ps
#undef _mm256_trunc_ps
#undef _mm512_mask_trunc_ps
#undef _mm512_trunc_ps
#undef _mm_udiv_epi32
#undef _mm256_udiv_epi32
#undef _mm_udivrem_epi32
#undef _mm256_udivrem_epi32
#undef _mm_urem_epi32
#undef _mm256_urem_epi32


template <typename ...> __m128d _mm_acos_pd (__m128d a);
template <typename ...> __m256d _mm256_acos_pd (__m256d a);
template <typename ...> __m512d _mm512_acos_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_acos_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_acos_ps (__m128 a);
template <typename ...> __m256 _mm256_acos_ps (__m256 a);
template <typename ...> __m512 _mm512_acos_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_acos_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_acosh_pd (__m128d a);
template <typename ...> __m256d _mm256_acosh_pd (__m256d a);
template <typename ...> __m512d _mm512_acosh_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_acosh_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_acosh_ps (__m128 a);
template <typename ...> __m256 _mm256_acosh_ps (__m256 a);
template <typename ...> __m512 _mm512_acosh_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_acosh_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_asin_pd (__m128d a);
template <typename ...> __m256d _mm256_asin_pd (__m256d a);
template <typename ...> __m512d _mm512_asin_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_asin_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_asin_ps (__m128 a);
template <typename ...> __m256 _mm256_asin_ps (__m256 a);
template <typename ...> __m512 _mm512_asin_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_asin_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_asinh_pd (__m128d a);
template <typename ...> __m256d _mm256_asinh_pd (__m256d a);
template <typename ...> __m512d _mm512_asinh_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_asinh_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_asinh_ps (__m128 a);
template <typename ...> __m256 _mm256_asinh_ps (__m256 a);
template <typename ...> __m512 _mm512_asinh_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_asinh_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_atan_pd (__m128d a);
template <typename ...> __m256d _mm256_atan_pd (__m256d a);
template <typename ...> __m512d _mm512_atan_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_atan_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_atan_ps (__m128 a);
template <typename ...> __m256 _mm256_atan_ps (__m256 a);
template <typename ...> __m512 _mm512_atan_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_atan_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_atan2_pd (__m128d a, __m128d b);
template <typename ...> __m256d _mm256_atan2_pd (__m256d a, __m256d b);
template <typename ...> __m512d _mm512_atan2_pd (__m512d a, __m512d b);
template <typename ...> __m512d _mm512_mask_atan2_pd (__m512d src, __mmask8 k, __m512d a, __m512d b);
template <typename ...> __m128 _mm_atan2_ps (__m128 a, __m128 b);
template <typename ...> __m256 _mm256_atan2_ps (__m256 a, __m256 b);
template <typename ...> __m512 _mm512_atan2_ps (__m512 a, __m512 b);
template <typename ...> __m512 _mm512_mask_atan2_ps (__m512 src, __mmask16 k, __m512 a, __m512 b);
template <typename ...> __m128d _mm_atanh_pd (__m128d a);
template <typename ...> __m256d _mm256_atanh_pd (__m256d a);
template <typename ...> __m512d _mm512_atanh_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_atanh_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_atanh_ps (__m128 a);
template <typename ...> __m256 _mm256_atanh_ps (__m256 a);
template <typename ...> __m512 _mm512_atanh_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_atanh_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_cbrt_pd (__m128d a);
template <typename ...> __m256d _mm256_cbrt_pd (__m256d a);
template <typename ...> __m512d _mm512_cbrt_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_cbrt_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_cbrt_ps (__m128 a);
template <typename ...> __m256 _mm256_cbrt_ps (__m256 a);
template <typename ...> __m512 _mm512_cbrt_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_cbrt_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_cdfnorm_pd (__m128d a);
template <typename ...> __m256d _mm256_cdfnorm_pd (__m256d a);
template <typename ...> __m512d _mm512_cdfnorm_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_cdfnorm_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_cdfnorm_ps (__m128 a);
template <typename ...> __m256 _mm256_cdfnorm_ps (__m256 a);
template <typename ...> __m512 _mm512_cdfnorm_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_cdfnorm_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_cdfnorminv_pd (__m128d a);
template <typename ...> __m256d _mm256_cdfnorminv_pd (__m256d a);
template <typename ...> __m512d _mm512_cdfnorminv_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_cdfnorminv_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_cdfnorminv_ps (__m128 a);
template <typename ...> __m256 _mm256_cdfnorminv_ps (__m256 a);
template <typename ...> __m512 _mm512_cdfnorminv_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_cdfnorminv_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512d _mm512_ceil_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_ceil_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512 _mm512_ceil_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_ceil_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128 _mm_cexp_ps (__m128 a);
template <typename ...> __m256 _mm256_cexp_ps (__m256 a);
template <typename ...> __m128 _mm_clog_ps (__m128 a);
template <typename ...> __m256 _mm256_clog_ps (__m256 a);
template <typename ...> __m128d _mm_cos_pd (__m128d a);
template <typename ...> __m256d _mm256_cos_pd (__m256d a);
template <typename ...> __m512d _mm512_cos_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_cos_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_cos_ps (__m128 a);
template <typename ...> __m256 _mm256_cos_ps (__m256 a);
template <typename ...> __m512 _mm512_cos_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_cos_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_cosd_pd (__m128d a);
template <typename ...> __m256d _mm256_cosd_pd (__m256d a);
template <typename ...> __m512d _mm512_cosd_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_cosd_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_cosd_ps (__m128 a);
template <typename ...> __m256 _mm256_cosd_ps (__m256 a);
template <typename ...> __m512 _mm512_cosd_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_cosd_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_cosh_pd (__m128d a);
template <typename ...> __m256d _mm256_cosh_pd (__m256d a);
template <typename ...> __m512d _mm512_cosh_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_cosh_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_cosh_ps (__m128 a);
template <typename ...> __m256 _mm256_cosh_ps (__m256 a);
template <typename ...> __m512 _mm512_cosh_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_cosh_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128 _mm_csqrt_ps (__m128 a);
template <typename ...> __m256 _mm256_csqrt_ps (__m256 a);
template <typename ...> __m128i _mm_div_epi16 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epi16 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epi16 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epi32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epi32 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epi32 (__m512i a, __m512i b);
template <typename ...> __m512i _mm512_mask_div_epi32 (__m512i src, __mmask16 k, __m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epi64 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epi64 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epi64 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epi8 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epi8 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epi8 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epu16 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epu16 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epu16 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epu32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epu32 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epu32 (__m512i a, __m512i b);
template <typename ...> __m512i _mm512_mask_div_epu32 (__m512i src, __mmask16 k, __m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epu64 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epu64 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epu64 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_div_epu8 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_div_epu8 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_div_epu8 (__m512i a, __m512i b);
template <typename ...> __m128d _mm_erf_pd (__m128d a);
template <typename ...> __m256d _mm256_erf_pd (__m256d a);
template <typename ...> __m512d _mm512_erf_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_erf_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_erf_ps (__m128 a);
template <typename ...> __m256 _mm256_erf_ps (__m256 a);
template <typename ...> __m512 _mm512_erf_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_erf_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_erfc_pd (__m128d a);
template <typename ...> __m256d _mm256_erfc_pd (__m256d a);
template <typename ...> __m512d _mm512_erfc_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_erfc_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_erfc_ps (__m128 a);
template <typename ...> __m256 _mm256_erfc_ps (__m256 a);
template <typename ...> __m512 _mm512_erfc_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_erfc_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_erfcinv_pd (__m128d a);
template <typename ...> __m256d _mm256_erfcinv_pd (__m256d a);
template <typename ...> __m512d _mm512_erfcinv_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_erfcinv_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_erfcinv_ps (__m128 a);
template <typename ...> __m256 _mm256_erfcinv_ps (__m256 a);
template <typename ...> __m512 _mm512_erfcinv_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_erfcinv_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_erfinv_pd (__m128d a);
template <typename ...> __m256d _mm256_erfinv_pd (__m256d a);
template <typename ...> __m512d _mm512_erfinv_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_erfinv_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_erfinv_ps (__m128 a);
template <typename ...> __m256 _mm256_erfinv_ps (__m256 a);
template <typename ...> __m512 _mm512_erfinv_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_erfinv_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_exp_pd (__m128d a);
template <typename ...> __m256d _mm256_exp_pd (__m256d a);
template <typename ...> __m512d _mm512_exp_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_exp_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_exp_ps (__m128 a);
template <typename ...> __m256 _mm256_exp_ps (__m256 a);
template <typename ...> __m512 _mm512_exp_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_exp_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_exp10_pd (__m128d a);
template <typename ...> __m256d _mm256_exp10_pd (__m256d a);
template <typename ...> __m512d _mm512_exp10_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_exp10_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_exp10_ps (__m128 a);
template <typename ...> __m256 _mm256_exp10_ps (__m256 a);
template <typename ...> __m512 _mm512_exp10_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_exp10_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_exp2_pd (__m128d a);
template <typename ...> __m256d _mm256_exp2_pd (__m256d a);
template <typename ...> __m512d _mm512_exp2_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_exp2_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_exp2_ps (__m128 a);
template <typename ...> __m256 _mm256_exp2_ps (__m256 a);
template <typename ...> __m512 _mm512_exp2_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_exp2_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_expm1_pd (__m128d a);
template <typename ...> __m256d _mm256_expm1_pd (__m256d a);
template <typename ...> __m512d _mm512_expm1_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_expm1_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_expm1_ps (__m128 a);
template <typename ...> __m256 _mm256_expm1_ps (__m256 a);
template <typename ...> __m512 _mm512_expm1_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_expm1_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512d _mm512_floor_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_floor_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512 _mm512_floor_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_floor_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_hypot_pd (__m128d a, __m128d b);
template <typename ...> __m256d _mm256_hypot_pd (__m256d a, __m256d b);
template <typename ...> __m512d _mm512_hypot_pd (__m512d a, __m512d b);
template <typename ...> __m512d _mm512_mask_hypot_pd (__m512d src, __mmask8 k, __m512d a, __m512d b);
template <typename ...> __m128 _mm_hypot_ps (__m128 a, __m128 b);
template <typename ...> __m256 _mm256_hypot_ps (__m256 a, __m256 b);
template <typename ...> __m512 _mm512_hypot_ps (__m512 a, __m512 b);
template <typename ...> __m512 _mm512_mask_hypot_ps (__m512 src, __mmask16 k, __m512 a, __m512 b);
template <typename ...> __m128i _mm_idiv_epi32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_idiv_epi32 (__m256i a, __m256i b);
template <typename ...> __m128i _mm_idivrem_epi32 (__m128i * mem_addr, __m128i a, __m128i b);
template <typename ...> __m256i _mm256_idivrem_epi32 (__m256i * mem_addr, __m256i a, __m256i b);
template <typename ...> __m128d _mm_invcbrt_pd (__m128d a);
template <typename ...> __m256d _mm256_invcbrt_pd (__m256d a);
template <typename ...> __m128 _mm_invcbrt_ps (__m128 a);
template <typename ...> __m256 _mm256_invcbrt_ps (__m256 a);
template <typename ...> __m128d _mm_invsqrt_pd (__m128d a);
template <typename ...> __m256d _mm256_invsqrt_pd (__m256d a);
template <typename ...> __m512d _mm512_invsqrt_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_invsqrt_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_invsqrt_ps (__m128 a);
template <typename ...> __m256 _mm256_invsqrt_ps (__m256 a);
template <typename ...> __m512 _mm512_invsqrt_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_invsqrt_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128i _mm_irem_epi32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_irem_epi32 (__m256i a, __m256i b);
template <typename ...> __m128d _mm_log_pd (__m128d a);
template <typename ...> __m256d _mm256_log_pd (__m256d a);
template <typename ...> __m512d _mm512_log_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_log_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_log_ps (__m128 a);
template <typename ...> __m256 _mm256_log_ps (__m256 a);
template <typename ...> __m512 _mm512_log_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_log_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_log10_pd (__m128d a);
template <typename ...> __m256d _mm256_log10_pd (__m256d a);
template <typename ...> __m512d _mm512_log10_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_log10_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_log10_ps (__m128 a);
template <typename ...> __m256 _mm256_log10_ps (__m256 a);
template <typename ...> __m512 _mm512_log10_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_log10_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_log1p_pd (__m128d a);
template <typename ...> __m256d _mm256_log1p_pd (__m256d a);
template <typename ...> __m512d _mm512_log1p_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_log1p_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_log1p_ps (__m128 a);
template <typename ...> __m256 _mm256_log1p_ps (__m256 a);
template <typename ...> __m512 _mm512_log1p_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_log1p_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_log2_pd (__m128d a);
template <typename ...> __m256d _mm256_log2_pd (__m256d a);
template <typename ...> __m512d _mm512_log2_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_log2_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_log2_ps (__m128 a);
template <typename ...> __m256 _mm256_log2_ps (__m256 a);
template <typename ...> __m512 _mm512_log2_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_log2_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m128d _mm_logb_pd (__m128d a);
template <typename ...> __m256d _mm256_logb_pd (__m256d a);
template <typename ...> __m512d _mm512_logb_pd (__m512d a);
template <typename ...> __m512d _mm512_mask_logb_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m128 _mm_logb_ps (__m128 a);
template <typename ...> __m256 _mm256_logb_ps (__m256 a);
template <typename ...> __m512 _mm512_logb_ps (__m512 a);
template <typename ...> __m512 _mm512_mask_logb_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512d _mm512_mask_nearbyint_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_nearbyint_pd (__m512d a);
template <typename ...> __m512 _mm512_mask_nearbyint_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_nearbyint_ps (__m512 a);
template <typename ...> __m128d _mm_pow_pd (__m128d a, __m128d b);
template <typename ...> __m256d _mm256_pow_pd (__m256d a, __m256d b);
template <typename ...> __m512d _mm512_mask_pow_pd (__m512d src, __mmask8 k, __m512d a, __m512d b);
template <typename ...> __m512d _mm512_pow_pd (__m512d a, __m512d b);
template <typename ...> __m128 _mm_pow_ps (__m128 a, __m128 b);
template <typename ...> __m256 _mm256_pow_ps (__m256 a, __m256 b);
template <typename ...> __m512 _mm512_mask_pow_ps (__m512 src, __mmask16 k, __m512 a, __m512 b);
template <typename ...> __m512 _mm512_pow_ps (__m512 a, __m512 b);
template <typename ...> __m512d _mm512_mask_recip_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_recip_pd (__m512d a);
template <typename ...> __m512 _mm512_mask_recip_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_recip_ps (__m512 a);
template <typename ...> __m128i _mm_rem_epi16 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epi16 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_rem_epi16 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epi32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epi32 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_mask_rem_epi32 (__m512i src, __mmask16 k, __m512i a, __m512i b);
template <typename ...> __m512i _mm512_rem_epi32 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epi64 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epi64 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_rem_epi64 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epi8 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epi8 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_rem_epi8 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epu16 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epu16 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_rem_epu16 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epu32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epu32 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_mask_rem_epu32 (__m512i src, __mmask16 k, __m512i a, __m512i b);
template <typename ...> __m512i _mm512_rem_epu32 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epu64 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epu64 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_rem_epu64 (__m512i a, __m512i b);
template <typename ...> __m128i _mm_rem_epu8 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_rem_epu8 (__m256i a, __m256i b);
template <typename ...> __m512i _mm512_rem_epu8 (__m512i a, __m512i b);
template <typename ...> __m512d _mm512_mask_rint_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_rint_pd (__m512d a);
template <typename ...> __m512 _mm512_mask_rint_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_rint_ps (__m512 a);
template <typename ...> __m128d _mm_sin_pd (__m128d a);
template <typename ...> __m256d _mm256_sin_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_sin_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_sin_pd (__m512d a);
template <typename ...> __m128 _mm_sin_ps (__m128 a);
template <typename ...> __m256 _mm256_sin_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_sin_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_sin_ps (__m512 a);
template <typename ...> __m128d _mm_sincos_pd (__m128d * mem_addr, __m128d a);
template <typename ...> __m256d _mm256_sincos_pd (__m256d * mem_addr, __m256d a);
template <typename ...> __m512d _mm512_mask_sincos_pd (__m512d * mem_addr, __m512d sin_src, __m512d cos_src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_sincos_pd (__m512d * mem_addr, __m512d a);
template <typename ...> __m128 _mm_sincos_ps (__m128 * mem_addr, __m128 a);
template <typename ...> __m256 _mm256_sincos_ps (__m256 * mem_addr, __m256 a);
template <typename ...> __m512 _mm512_mask_sincos_ps (__m512 * mem_addr, __m512 sin_src, __m512 cos_src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_sincos_ps (__m512 * mem_addr, __m512 a);
template <typename ...> __m128d _mm_sind_pd (__m128d a);
template <typename ...> __m256d _mm256_sind_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_sind_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_sind_pd (__m512d a);
template <typename ...> __m128 _mm_sind_ps (__m128 a);
template <typename ...> __m256 _mm256_sind_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_sind_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_sind_ps (__m512 a);
template <typename ...> __m128d _mm_sinh_pd (__m128d a);
template <typename ...> __m256d _mm256_sinh_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_sinh_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_sinh_pd (__m512d a);
template <typename ...> __m128 _mm_sinh_ps (__m128 a);
template <typename ...> __m256 _mm256_sinh_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_sinh_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_sinh_ps (__m512 a);
template <typename ...> __m128d _mm_svml_ceil_pd (__m128d a);
template <typename ...> __m256d _mm256_svml_ceil_pd (__m256d a);
template <typename ...> __m128 _mm_svml_ceil_ps (__m128 a);
template <typename ...> __m256 _mm256_svml_ceil_ps (__m256 a);
template <typename ...> __m128d _mm_svml_floor_pd (__m128d a);
template <typename ...> __m256d _mm256_svml_floor_pd (__m256d a);
template <typename ...> __m128 _mm_svml_floor_ps (__m128 a);
template <typename ...> __m256 _mm256_svml_floor_ps (__m256 a);
template <typename ...> __m128d _mm_svml_round_pd (__m128d a);
template <typename ...> __m256d _mm256_svml_round_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_svml_round_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_svml_round_pd (__m512d a);
template <typename ...> __m128 _mm_svml_round_ps (__m128 a);
template <typename ...> __m256 _mm256_svml_round_ps (__m256 a);
template <typename ...> __m128d _mm_svml_sqrt_pd (__m128d a);
template <typename ...> __m256d _mm256_svml_sqrt_pd (__m256d a);
template <typename ...> __m128 _mm_svml_sqrt_ps (__m128 a);
template <typename ...> __m256 _mm256_svml_sqrt_ps (__m256 a);
template <typename ...> __m128d _mm_tan_pd (__m128d a);
template <typename ...> __m256d _mm256_tan_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_tan_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_tan_pd (__m512d a);
template <typename ...> __m128 _mm_tan_ps (__m128 a);
template <typename ...> __m256 _mm256_tan_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_tan_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_tan_ps (__m512 a);
template <typename ...> __m128d _mm_tand_pd (__m128d a);
template <typename ...> __m256d _mm256_tand_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_tand_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_tand_pd (__m512d a);
template <typename ...> __m128 _mm_tand_ps (__m128 a);
template <typename ...> __m256 _mm256_tand_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_tand_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_tand_ps (__m512 a);
template <typename ...> __m128d _mm_tanh_pd (__m128d a);
template <typename ...> __m256d _mm256_tanh_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_tanh_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_tanh_pd (__m512d a);
template <typename ...> __m128 _mm_tanh_ps (__m128 a);
template <typename ...> __m256 _mm256_tanh_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_tanh_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_tanh_ps (__m512 a);
template <typename ...> __m128d _mm_trunc_pd (__m128d a);
template <typename ...> __m256d _mm256_trunc_pd (__m256d a);
template <typename ...> __m512d _mm512_mask_trunc_pd (__m512d src, __mmask8 k, __m512d a);
template <typename ...> __m512d _mm512_trunc_pd (__m512d a);
template <typename ...> __m128 _mm_trunc_ps (__m128 a);
template <typename ...> __m256 _mm256_trunc_ps (__m256 a);
template <typename ...> __m512 _mm512_mask_trunc_ps (__m512 src, __mmask16 k, __m512 a);
template <typename ...> __m512 _mm512_trunc_ps (__m512 a);
template <typename ...> __m128i _mm_udiv_epi32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_udiv_epi32 (__m256i a, __m256i b);
template <typename ...> __m128i _mm_udivrem_epi32 (__m128i * mem_addr, __m128i a, __m128i b);
template <typename ...> __m256i _mm256_udivrem_epi32 (__m256i * mem_addr, __m256i a, __m256i b);
template <typename ...> __m128i _mm_urem_epi32 (__m128i a, __m128i b);
template <typename ...> __m256i _mm256_urem_epi32 (__m256i a, __m256i b);


#endif //SVML__SVML_H