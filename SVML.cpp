#include <immintrin.h>


auto intel_mm_acos_pd = [] (__m128d a) { return _mm_acos_pd(a); };
auto intel_mm256_acos_pd = [] (__m256d a) { return _mm256_acos_pd(a); };
auto intel_mm512_acos_pd = [] (__m512d a) { return _mm512_acos_pd(a); };
auto intel_mm512_mask_acos_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_acos_pd(src, k, a); };
auto intel_mm_acos_ps = [] (__m128 a) { return _mm_acos_ps(a); };
auto intel_mm256_acos_ps = [] (__m256 a) { return _mm256_acos_ps(a); };
auto intel_mm512_acos_ps = [] (__m512 a) { return _mm512_acos_ps(a); };
auto intel_mm512_mask_acos_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_acos_ps(src, k, a); };
auto intel_mm_acosh_pd = [] (__m128d a) { return _mm_acosh_pd(a); };
auto intel_mm256_acosh_pd = [] (__m256d a) { return _mm256_acosh_pd(a); };
auto intel_mm512_acosh_pd = [] (__m512d a) { return _mm512_acosh_pd(a); };
auto intel_mm512_mask_acosh_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_acosh_pd(src, k, a); };
auto intel_mm_acosh_ps = [] (__m128 a) { return _mm_acosh_ps(a); };
auto intel_mm256_acosh_ps = [] (__m256 a) { return _mm256_acosh_ps(a); };
auto intel_mm512_acosh_ps = [] (__m512 a) { return _mm512_acosh_ps(a); };
auto intel_mm512_mask_acosh_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_acosh_ps(src, k, a); };
auto intel_mm_asin_pd = [] (__m128d a) { return _mm_asin_pd(a); };
auto intel_mm256_asin_pd = [] (__m256d a) { return _mm256_asin_pd(a); };
auto intel_mm512_asin_pd = [] (__m512d a) { return _mm512_asin_pd(a); };
auto intel_mm512_mask_asin_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_asin_pd(src, k, a); };
auto intel_mm_asin_ps = [] (__m128 a) { return _mm_asin_ps(a); };
auto intel_mm256_asin_ps = [] (__m256 a) { return _mm256_asin_ps(a); };
auto intel_mm512_asin_ps = [] (__m512 a) { return _mm512_asin_ps(a); };
auto intel_mm512_mask_asin_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_asin_ps(src, k, a); };
auto intel_mm_asinh_pd = [] (__m128d a) { return _mm_asinh_pd(a); };
auto intel_mm256_asinh_pd = [] (__m256d a) { return _mm256_asinh_pd(a); };
auto intel_mm512_asinh_pd = [] (__m512d a) { return _mm512_asinh_pd(a); };
auto intel_mm512_mask_asinh_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_asinh_pd(src, k, a); };
auto intel_mm_asinh_ps = [] (__m128 a) { return _mm_asinh_ps(a); };
auto intel_mm256_asinh_ps = [] (__m256 a) { return _mm256_asinh_ps(a); };
auto intel_mm512_asinh_ps = [] (__m512 a) { return _mm512_asinh_ps(a); };
auto intel_mm512_mask_asinh_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_asinh_ps(src, k, a); };
auto intel_mm_atan_pd = [] (__m128d a) { return _mm_atan_pd(a); };
auto intel_mm256_atan_pd = [] (__m256d a) { return _mm256_atan_pd(a); };
auto intel_mm512_atan_pd = [] (__m512d a) { return _mm512_atan_pd(a); };
auto intel_mm512_mask_atan_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_atan_pd(src, k, a); };
auto intel_mm_atan_ps = [] (__m128 a) { return _mm_atan_ps(a); };
auto intel_mm256_atan_ps = [] (__m256 a) { return _mm256_atan_ps(a); };
auto intel_mm512_atan_ps = [] (__m512 a) { return _mm512_atan_ps(a); };
auto intel_mm512_mask_atan_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_atan_ps(src, k, a); };
auto intel_mm_atan2_pd = [] (__m128d a, __m128d b) { return _mm_atan2_pd(a, b); };
auto intel_mm256_atan2_pd = [] (__m256d a, __m256d b) { return _mm256_atan2_pd(a, b); };
auto intel_mm512_atan2_pd = [] (__m512d a, __m512d b) { return _mm512_atan2_pd(a, b); };
auto intel_mm512_mask_atan2_pd = [] (__m512d src, __mmask8 k, __m512d a, __m512d b) { return _mm512_mask_atan2_pd(src, k, a, b); };
auto intel_mm_atan2_ps = [] (__m128 a, __m128 b) { return _mm_atan2_ps(a, b); };
auto intel_mm256_atan2_ps = [] (__m256 a, __m256 b) { return _mm256_atan2_ps(a, b); };
auto intel_mm512_atan2_ps = [] (__m512 a, __m512 b) { return _mm512_atan2_ps(a, b); };
auto intel_mm512_mask_atan2_ps = [] (__m512 src, __mmask16 k, __m512 a, __m512 b) { return _mm512_mask_atan2_ps(src, k, a, b); };
auto intel_mm_atanh_pd = [] (__m128d a) { return _mm_atanh_pd(a); };
auto intel_mm256_atanh_pd = [] (__m256d a) { return _mm256_atanh_pd(a); };
auto intel_mm512_atanh_pd = [] (__m512d a) { return _mm512_atanh_pd(a); };
auto intel_mm512_mask_atanh_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_atanh_pd(src, k, a); };
auto intel_mm_atanh_ps = [] (__m128 a) { return _mm_atanh_ps(a); };
auto intel_mm256_atanh_ps = [] (__m256 a) { return _mm256_atanh_ps(a); };
auto intel_mm512_atanh_ps = [] (__m512 a) { return _mm512_atanh_ps(a); };
auto intel_mm512_mask_atanh_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_atanh_ps(src, k, a); };
auto intel_mm_cbrt_pd = [] (__m128d a) { return _mm_cbrt_pd(a); };
auto intel_mm256_cbrt_pd = [] (__m256d a) { return _mm256_cbrt_pd(a); };
auto intel_mm512_cbrt_pd = [] (__m512d a) { return _mm512_cbrt_pd(a); };
auto intel_mm512_mask_cbrt_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_cbrt_pd(src, k, a); };
auto intel_mm_cbrt_ps = [] (__m128 a) { return _mm_cbrt_ps(a); };
auto intel_mm256_cbrt_ps = [] (__m256 a) { return _mm256_cbrt_ps(a); };
auto intel_mm512_cbrt_ps = [] (__m512 a) { return _mm512_cbrt_ps(a); };
auto intel_mm512_mask_cbrt_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_cbrt_ps(src, k, a); };
auto intel_mm_cdfnorm_pd = [] (__m128d a) { return _mm_cdfnorm_pd(a); };
auto intel_mm256_cdfnorm_pd = [] (__m256d a) { return _mm256_cdfnorm_pd(a); };
auto intel_mm512_cdfnorm_pd = [] (__m512d a) { return _mm512_cdfnorm_pd(a); };
auto intel_mm512_mask_cdfnorm_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_cdfnorm_pd(src, k, a); };
auto intel_mm_cdfnorm_ps = [] (__m128 a) { return _mm_cdfnorm_ps(a); };
auto intel_mm256_cdfnorm_ps = [] (__m256 a) { return _mm256_cdfnorm_ps(a); };
auto intel_mm512_cdfnorm_ps = [] (__m512 a) { return _mm512_cdfnorm_ps(a); };
auto intel_mm512_mask_cdfnorm_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_cdfnorm_ps(src, k, a); };
auto intel_mm_cdfnorminv_pd = [] (__m128d a) { return _mm_cdfnorminv_pd(a); };
auto intel_mm256_cdfnorminv_pd = [] (__m256d a) { return _mm256_cdfnorminv_pd(a); };
auto intel_mm512_cdfnorminv_pd = [] (__m512d a) { return _mm512_cdfnorminv_pd(a); };
auto intel_mm512_mask_cdfnorminv_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_cdfnorminv_pd(src, k, a); };
auto intel_mm_cdfnorminv_ps = [] (__m128 a) { return _mm_cdfnorminv_ps(a); };
auto intel_mm256_cdfnorminv_ps = [] (__m256 a) { return _mm256_cdfnorminv_ps(a); };
auto intel_mm512_cdfnorminv_ps = [] (__m512 a) { return _mm512_cdfnorminv_ps(a); };
auto intel_mm512_mask_cdfnorminv_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_cdfnorminv_ps(src, k, a); };
auto intel_mm512_ceil_pd = [] (__m512d a) { return _mm512_ceil_pd(a); };
auto intel_mm512_mask_ceil_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_ceil_pd(src, k, a); };
auto intel_mm512_ceil_ps = [] (__m512 a) { return _mm512_ceil_ps(a); };
auto intel_mm512_mask_ceil_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_ceil_ps(src, k, a); };
auto intel_mm_cexp_ps = [] (__m128 a) { return _mm_cexp_ps(a); };
auto intel_mm256_cexp_ps = [] (__m256 a) { return _mm256_cexp_ps(a); };
auto intel_mm_clog_ps = [] (__m128 a) { return _mm_clog_ps(a); };
auto intel_mm256_clog_ps = [] (__m256 a) { return _mm256_clog_ps(a); };
auto intel_mm_cos_pd = [] (__m128d a) { return _mm_cos_pd(a); };
auto intel_mm256_cos_pd = [] (__m256d a) { return _mm256_cos_pd(a); };
auto intel_mm512_cos_pd = [] (__m512d a) { return _mm512_cos_pd(a); };
auto intel_mm512_mask_cos_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_cos_pd(src, k, a); };
auto intel_mm_cos_ps = [] (__m128 a) { return _mm_cos_ps(a); };
auto intel_mm256_cos_ps = [] (__m256 a) { return _mm256_cos_ps(a); };
auto intel_mm512_cos_ps = [] (__m512 a) { return _mm512_cos_ps(a); };
auto intel_mm512_mask_cos_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_cos_ps(src, k, a); };
auto intel_mm_cosd_pd = [] (__m128d a) { return _mm_cosd_pd(a); };
auto intel_mm256_cosd_pd = [] (__m256d a) { return _mm256_cosd_pd(a); };
auto intel_mm512_cosd_pd = [] (__m512d a) { return _mm512_cosd_pd(a); };
auto intel_mm512_mask_cosd_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_cosd_pd(src, k, a); };
auto intel_mm_cosd_ps = [] (__m128 a) { return _mm_cosd_ps(a); };
auto intel_mm256_cosd_ps = [] (__m256 a) { return _mm256_cosd_ps(a); };
auto intel_mm512_cosd_ps = [] (__m512 a) { return _mm512_cosd_ps(a); };
auto intel_mm512_mask_cosd_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_cosd_ps(src, k, a); };
auto intel_mm_cosh_pd = [] (__m128d a) { return _mm_cosh_pd(a); };
auto intel_mm256_cosh_pd = [] (__m256d a) { return _mm256_cosh_pd(a); };
auto intel_mm512_cosh_pd = [] (__m512d a) { return _mm512_cosh_pd(a); };
auto intel_mm512_mask_cosh_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_cosh_pd(src, k, a); };
auto intel_mm_cosh_ps = [] (__m128 a) { return _mm_cosh_ps(a); };
auto intel_mm256_cosh_ps = [] (__m256 a) { return _mm256_cosh_ps(a); };
auto intel_mm512_cosh_ps = [] (__m512 a) { return _mm512_cosh_ps(a); };
auto intel_mm512_mask_cosh_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_cosh_ps(src, k, a); };
auto intel_mm_csqrt_ps = [] (__m128 a) { return _mm_csqrt_ps(a); };
auto intel_mm256_csqrt_ps = [] (__m256 a) { return _mm256_csqrt_ps(a); };
auto intel_mm_div_epi16 = [] (__m128i a, __m128i b) { return _mm_div_epi16(a, b); };
auto intel_mm256_div_epi16 = [] (__m256i a, __m256i b) { return _mm256_div_epi16(a, b); };
auto intel_mm512_div_epi16 = [] (__m512i a, __m512i b) { return _mm512_div_epi16(a, b); };
auto intel_mm_div_epi32 = [] (__m128i a, __m128i b) { return _mm_div_epi32(a, b); };
auto intel_mm256_div_epi32 = [] (__m256i a, __m256i b) { return _mm256_div_epi32(a, b); };
auto intel_mm512_div_epi32 = [] (__m512i a, __m512i b) { return _mm512_div_epi32(a, b); };
auto intel_mm512_mask_div_epi32 = [] (__m512i src, __mmask16 k, __m512i a, __m512i b) { return _mm512_mask_div_epi32(src, k, a, b); };
auto intel_mm_div_epi64 = [] (__m128i a, __m128i b) { return _mm_div_epi64(a, b); };
auto intel_mm256_div_epi64 = [] (__m256i a, __m256i b) { return _mm256_div_epi64(a, b); };
auto intel_mm512_div_epi64 = [] (__m512i a, __m512i b) { return _mm512_div_epi64(a, b); };
auto intel_mm_div_epi8 = [] (__m128i a, __m128i b) { return _mm_div_epi8(a, b); };
auto intel_mm256_div_epi8 = [] (__m256i a, __m256i b) { return _mm256_div_epi8(a, b); };
auto intel_mm512_div_epi8 = [] (__m512i a, __m512i b) { return _mm512_div_epi8(a, b); };
auto intel_mm_div_epu16 = [] (__m128i a, __m128i b) { return _mm_div_epu16(a, b); };
auto intel_mm256_div_epu16 = [] (__m256i a, __m256i b) { return _mm256_div_epu16(a, b); };
auto intel_mm512_div_epu16 = [] (__m512i a, __m512i b) { return _mm512_div_epu16(a, b); };
auto intel_mm_div_epu32 = [] (__m128i a, __m128i b) { return _mm_div_epu32(a, b); };
auto intel_mm256_div_epu32 = [] (__m256i a, __m256i b) { return _mm256_div_epu32(a, b); };
auto intel_mm512_div_epu32 = [] (__m512i a, __m512i b) { return _mm512_div_epu32(a, b); };
auto intel_mm512_mask_div_epu32 = [] (__m512i src, __mmask16 k, __m512i a, __m512i b) { return _mm512_mask_div_epu32(src, k, a, b); };
auto intel_mm_div_epu64 = [] (__m128i a, __m128i b) { return _mm_div_epu64(a, b); };
auto intel_mm256_div_epu64 = [] (__m256i a, __m256i b) { return _mm256_div_epu64(a, b); };
auto intel_mm512_div_epu64 = [] (__m512i a, __m512i b) { return _mm512_div_epu64(a, b); };
auto intel_mm_div_epu8 = [] (__m128i a, __m128i b) { return _mm_div_epu8(a, b); };
auto intel_mm256_div_epu8 = [] (__m256i a, __m256i b) { return _mm256_div_epu8(a, b); };
auto intel_mm512_div_epu8 = [] (__m512i a, __m512i b) { return _mm512_div_epu8(a, b); };
auto intel_mm_erf_pd = [] (__m128d a) { return _mm_erf_pd(a); };
auto intel_mm256_erf_pd = [] (__m256d a) { return _mm256_erf_pd(a); };
auto intel_mm512_erf_pd = [] (__m512d a) { return _mm512_erf_pd(a); };
auto intel_mm512_mask_erf_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_erf_pd(src, k, a); };
auto intel_mm_erf_ps = [] (__m128 a) { return _mm_erf_ps(a); };
auto intel_mm256_erf_ps = [] (__m256 a) { return _mm256_erf_ps(a); };
auto intel_mm512_erf_ps = [] (__m512 a) { return _mm512_erf_ps(a); };
auto intel_mm512_mask_erf_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_erf_ps(src, k, a); };
auto intel_mm_erfc_pd = [] (__m128d a) { return _mm_erfc_pd(a); };
auto intel_mm256_erfc_pd = [] (__m256d a) { return _mm256_erfc_pd(a); };
auto intel_mm512_erfc_pd = [] (__m512d a) { return _mm512_erfc_pd(a); };
auto intel_mm512_mask_erfc_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_erfc_pd(src, k, a); };
auto intel_mm_erfc_ps = [] (__m128 a) { return _mm_erfc_ps(a); };
auto intel_mm256_erfc_ps = [] (__m256 a) { return _mm256_erfc_ps(a); };
auto intel_mm512_erfc_ps = [] (__m512 a) { return _mm512_erfc_ps(a); };
auto intel_mm512_mask_erfc_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_erfc_ps(src, k, a); };
auto intel_mm_erfcinv_pd = [] (__m128d a) { return _mm_erfcinv_pd(a); };
auto intel_mm256_erfcinv_pd = [] (__m256d a) { return _mm256_erfcinv_pd(a); };
auto intel_mm512_erfcinv_pd = [] (__m512d a) { return _mm512_erfcinv_pd(a); };
auto intel_mm512_mask_erfcinv_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_erfcinv_pd(src, k, a); };
auto intel_mm_erfcinv_ps = [] (__m128 a) { return _mm_erfcinv_ps(a); };
auto intel_mm256_erfcinv_ps = [] (__m256 a) { return _mm256_erfcinv_ps(a); };
auto intel_mm512_erfcinv_ps = [] (__m512 a) { return _mm512_erfcinv_ps(a); };
auto intel_mm512_mask_erfcinv_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_erfcinv_ps(src, k, a); };
auto intel_mm_erfinv_pd = [] (__m128d a) { return _mm_erfinv_pd(a); };
auto intel_mm256_erfinv_pd = [] (__m256d a) { return _mm256_erfinv_pd(a); };
auto intel_mm512_erfinv_pd = [] (__m512d a) { return _mm512_erfinv_pd(a); };
auto intel_mm512_mask_erfinv_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_erfinv_pd(src, k, a); };
auto intel_mm_erfinv_ps = [] (__m128 a) { return _mm_erfinv_ps(a); };
auto intel_mm256_erfinv_ps = [] (__m256 a) { return _mm256_erfinv_ps(a); };
auto intel_mm512_erfinv_ps = [] (__m512 a) { return _mm512_erfinv_ps(a); };
auto intel_mm512_mask_erfinv_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_erfinv_ps(src, k, a); };
auto intel_mm_exp_pd = [] (__m128d a) { return _mm_exp_pd(a); };
auto intel_mm256_exp_pd = [] (__m256d a) { return _mm256_exp_pd(a); };
auto intel_mm512_exp_pd = [] (__m512d a) { return _mm512_exp_pd(a); };
auto intel_mm512_mask_exp_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_exp_pd(src, k, a); };
auto intel_mm_exp_ps = [] (__m128 a) { return _mm_exp_ps(a); };
auto intel_mm256_exp_ps = [] (__m256 a) { return _mm256_exp_ps(a); };
auto intel_mm512_exp_ps = [] (__m512 a) { return _mm512_exp_ps(a); };
auto intel_mm512_mask_exp_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_exp_ps(src, k, a); };
auto intel_mm_exp10_pd = [] (__m128d a) { return _mm_exp10_pd(a); };
auto intel_mm256_exp10_pd = [] (__m256d a) { return _mm256_exp10_pd(a); };
auto intel_mm512_exp10_pd = [] (__m512d a) { return _mm512_exp10_pd(a); };
auto intel_mm512_mask_exp10_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_exp10_pd(src, k, a); };
auto intel_mm_exp10_ps = [] (__m128 a) { return _mm_exp10_ps(a); };
auto intel_mm256_exp10_ps = [] (__m256 a) { return _mm256_exp10_ps(a); };
auto intel_mm512_exp10_ps = [] (__m512 a) { return _mm512_exp10_ps(a); };
auto intel_mm512_mask_exp10_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_exp10_ps(src, k, a); };
auto intel_mm_exp2_pd = [] (__m128d a) { return _mm_exp2_pd(a); };
auto intel_mm256_exp2_pd = [] (__m256d a) { return _mm256_exp2_pd(a); };
auto intel_mm512_exp2_pd = [] (__m512d a) { return _mm512_exp2_pd(a); };
auto intel_mm512_mask_exp2_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_exp2_pd(src, k, a); };
auto intel_mm_exp2_ps = [] (__m128 a) { return _mm_exp2_ps(a); };
auto intel_mm256_exp2_ps = [] (__m256 a) { return _mm256_exp2_ps(a); };
auto intel_mm512_exp2_ps = [] (__m512 a) { return _mm512_exp2_ps(a); };
auto intel_mm512_mask_exp2_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_exp2_ps(src, k, a); };
auto intel_mm_expm1_pd = [] (__m128d a) { return _mm_expm1_pd(a); };
auto intel_mm256_expm1_pd = [] (__m256d a) { return _mm256_expm1_pd(a); };
auto intel_mm512_expm1_pd = [] (__m512d a) { return _mm512_expm1_pd(a); };
auto intel_mm512_mask_expm1_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_expm1_pd(src, k, a); };
auto intel_mm_expm1_ps = [] (__m128 a) { return _mm_expm1_ps(a); };
auto intel_mm256_expm1_ps = [] (__m256 a) { return _mm256_expm1_ps(a); };
auto intel_mm512_expm1_ps = [] (__m512 a) { return _mm512_expm1_ps(a); };
auto intel_mm512_mask_expm1_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_expm1_ps(src, k, a); };
auto intel_mm512_floor_pd = [] (__m512d a) { return _mm512_floor_pd(a); };
auto intel_mm512_mask_floor_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_floor_pd(src, k, a); };
auto intel_mm512_floor_ps = [] (__m512 a) { return _mm512_floor_ps(a); };
auto intel_mm512_mask_floor_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_floor_ps(src, k, a); };
auto intel_mm_hypot_pd = [] (__m128d a, __m128d b) { return _mm_hypot_pd(a, b); };
auto intel_mm256_hypot_pd = [] (__m256d a, __m256d b) { return _mm256_hypot_pd(a, b); };
auto intel_mm512_hypot_pd = [] (__m512d a, __m512d b) { return _mm512_hypot_pd(a, b); };
auto intel_mm512_mask_hypot_pd = [] (__m512d src, __mmask8 k, __m512d a, __m512d b) { return _mm512_mask_hypot_pd(src, k, a, b); };
auto intel_mm_hypot_ps = [] (__m128 a, __m128 b) { return _mm_hypot_ps(a, b); };
auto intel_mm256_hypot_ps = [] (__m256 a, __m256 b) { return _mm256_hypot_ps(a, b); };
auto intel_mm512_hypot_ps = [] (__m512 a, __m512 b) { return _mm512_hypot_ps(a, b); };
auto intel_mm512_mask_hypot_ps = [] (__m512 src, __mmask16 k, __m512 a, __m512 b) { return _mm512_mask_hypot_ps(src, k, a, b); };
auto intel_mm_idiv_epi32 = [] (__m128i a, __m128i b) { return _mm_idiv_epi32(a, b); };
auto intel_mm256_idiv_epi32 = [] (__m256i a, __m256i b) { return _mm256_idiv_epi32(a, b); };
auto intel_mm_idivrem_epi32 = [] (__m128i * mem_addr, __m128i a, __m128i b) { return _mm_idivrem_epi32(mem_addr, a, b); };
auto intel_mm256_idivrem_epi32 = [] (__m256i * mem_addr, __m256i a, __m256i b) { return _mm256_idivrem_epi32(mem_addr, a, b); };
auto intel_mm_invcbrt_pd = [] (__m128d a) { return _mm_invcbrt_pd(a); };
auto intel_mm256_invcbrt_pd = [] (__m256d a) { return _mm256_invcbrt_pd(a); };
auto intel_mm_invcbrt_ps = [] (__m128 a) { return _mm_invcbrt_ps(a); };
auto intel_mm256_invcbrt_ps = [] (__m256 a) { return _mm256_invcbrt_ps(a); };
auto intel_mm_invsqrt_pd = [] (__m128d a) { return _mm_invsqrt_pd(a); };
auto intel_mm256_invsqrt_pd = [] (__m256d a) { return _mm256_invsqrt_pd(a); };
auto intel_mm512_invsqrt_pd = [] (__m512d a) { return _mm512_invsqrt_pd(a); };
auto intel_mm512_mask_invsqrt_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_invsqrt_pd(src, k, a); };
auto intel_mm_invsqrt_ps = [] (__m128 a) { return _mm_invsqrt_ps(a); };
auto intel_mm256_invsqrt_ps = [] (__m256 a) { return _mm256_invsqrt_ps(a); };
auto intel_mm512_invsqrt_ps = [] (__m512 a) { return _mm512_invsqrt_ps(a); };
auto intel_mm512_mask_invsqrt_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_invsqrt_ps(src, k, a); };
auto intel_mm_irem_epi32 = [] (__m128i a, __m128i b) { return _mm_irem_epi32(a, b); };
auto intel_mm256_irem_epi32 = [] (__m256i a, __m256i b) { return _mm256_irem_epi32(a, b); };
auto intel_mm_log_pd = [] (__m128d a) { return _mm_log_pd(a); };
auto intel_mm256_log_pd = [] (__m256d a) { return _mm256_log_pd(a); };
auto intel_mm512_log_pd = [] (__m512d a) { return _mm512_log_pd(a); };
auto intel_mm512_mask_log_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_log_pd(src, k, a); };
auto intel_mm_log_ps = [] (__m128 a) { return _mm_log_ps(a); };
auto intel_mm256_log_ps = [] (__m256 a) { return _mm256_log_ps(a); };
auto intel_mm512_log_ps = [] (__m512 a) { return _mm512_log_ps(a); };
auto intel_mm512_mask_log_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_log_ps(src, k, a); };
auto intel_mm_log10_pd = [] (__m128d a) { return _mm_log10_pd(a); };
auto intel_mm256_log10_pd = [] (__m256d a) { return _mm256_log10_pd(a); };
auto intel_mm512_log10_pd = [] (__m512d a) { return _mm512_log10_pd(a); };
auto intel_mm512_mask_log10_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_log10_pd(src, k, a); };
auto intel_mm_log10_ps = [] (__m128 a) { return _mm_log10_ps(a); };
auto intel_mm256_log10_ps = [] (__m256 a) { return _mm256_log10_ps(a); };
auto intel_mm512_log10_ps = [] (__m512 a) { return _mm512_log10_ps(a); };
auto intel_mm512_mask_log10_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_log10_ps(src, k, a); };
auto intel_mm_log1p_pd = [] (__m128d a) { return _mm_log1p_pd(a); };
auto intel_mm256_log1p_pd = [] (__m256d a) { return _mm256_log1p_pd(a); };
auto intel_mm512_log1p_pd = [] (__m512d a) { return _mm512_log1p_pd(a); };
auto intel_mm512_mask_log1p_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_log1p_pd(src, k, a); };
auto intel_mm_log1p_ps = [] (__m128 a) { return _mm_log1p_ps(a); };
auto intel_mm256_log1p_ps = [] (__m256 a) { return _mm256_log1p_ps(a); };
auto intel_mm512_log1p_ps = [] (__m512 a) { return _mm512_log1p_ps(a); };
auto intel_mm512_mask_log1p_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_log1p_ps(src, k, a); };
auto intel_mm_log2_pd = [] (__m128d a) { return _mm_log2_pd(a); };
auto intel_mm256_log2_pd = [] (__m256d a) { return _mm256_log2_pd(a); };
auto intel_mm512_log2_pd = [] (__m512d a) { return _mm512_log2_pd(a); };
auto intel_mm512_mask_log2_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_log2_pd(src, k, a); };
auto intel_mm_log2_ps = [] (__m128 a) { return _mm_log2_ps(a); };
auto intel_mm256_log2_ps = [] (__m256 a) { return _mm256_log2_ps(a); };
auto intel_mm512_log2_ps = [] (__m512 a) { return _mm512_log2_ps(a); };
auto intel_mm512_mask_log2_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_log2_ps(src, k, a); };
auto intel_mm_logb_pd = [] (__m128d a) { return _mm_logb_pd(a); };
auto intel_mm256_logb_pd = [] (__m256d a) { return _mm256_logb_pd(a); };
auto intel_mm512_logb_pd = [] (__m512d a) { return _mm512_logb_pd(a); };
auto intel_mm512_mask_logb_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_logb_pd(src, k, a); };
auto intel_mm_logb_ps = [] (__m128 a) { return _mm_logb_ps(a); };
auto intel_mm256_logb_ps = [] (__m256 a) { return _mm256_logb_ps(a); };
auto intel_mm512_logb_ps = [] (__m512 a) { return _mm512_logb_ps(a); };
auto intel_mm512_mask_logb_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_logb_ps(src, k, a); };
auto intel_mm512_mask_nearbyint_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_nearbyint_pd(src, k, a); };
auto intel_mm512_nearbyint_pd = [] (__m512d a) { return _mm512_nearbyint_pd(a); };
auto intel_mm512_mask_nearbyint_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_nearbyint_ps(src, k, a); };
auto intel_mm512_nearbyint_ps = [] (__m512 a) { return _mm512_nearbyint_ps(a); };
auto intel_mm_pow_pd = [] (__m128d a, __m128d b) { return _mm_pow_pd(a, b); };
auto intel_mm256_pow_pd = [] (__m256d a, __m256d b) { return _mm256_pow_pd(a, b); };
auto intel_mm512_mask_pow_pd = [] (__m512d src, __mmask8 k, __m512d a, __m512d b) { return _mm512_mask_pow_pd(src, k, a, b); };
auto intel_mm512_pow_pd = [] (__m512d a, __m512d b) { return _mm512_pow_pd(a, b); };
auto intel_mm_pow_ps = [] (__m128 a, __m128 b) { return _mm_pow_ps(a, b); };
auto intel_mm256_pow_ps = [] (__m256 a, __m256 b) { return _mm256_pow_ps(a, b); };
auto intel_mm512_mask_pow_ps = [] (__m512 src, __mmask16 k, __m512 a, __m512 b) { return _mm512_mask_pow_ps(src, k, a, b); };
auto intel_mm512_pow_ps = [] (__m512 a, __m512 b) { return _mm512_pow_ps(a, b); };
auto intel_mm512_mask_recip_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_recip_pd(src, k, a); };
auto intel_mm512_recip_pd = [] (__m512d a) { return _mm512_recip_pd(a); };
auto intel_mm512_mask_recip_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_recip_ps(src, k, a); };
auto intel_mm512_recip_ps = [] (__m512 a) { return _mm512_recip_ps(a); };
auto intel_mm_rem_epi16 = [] (__m128i a, __m128i b) { return _mm_rem_epi16(a, b); };
auto intel_mm256_rem_epi16 = [] (__m256i a, __m256i b) { return _mm256_rem_epi16(a, b); };
auto intel_mm512_rem_epi16 = [] (__m512i a, __m512i b) { return _mm512_rem_epi16(a, b); };
auto intel_mm_rem_epi32 = [] (__m128i a, __m128i b) { return _mm_rem_epi32(a, b); };
auto intel_mm256_rem_epi32 = [] (__m256i a, __m256i b) { return _mm256_rem_epi32(a, b); };
auto intel_mm512_mask_rem_epi32 = [] (__m512i src, __mmask16 k, __m512i a, __m512i b) { return _mm512_mask_rem_epi32(src, k, a, b); };
auto intel_mm512_rem_epi32 = [] (__m512i a, __m512i b) { return _mm512_rem_epi32(a, b); };
auto intel_mm_rem_epi64 = [] (__m128i a, __m128i b) { return _mm_rem_epi64(a, b); };
auto intel_mm256_rem_epi64 = [] (__m256i a, __m256i b) { return _mm256_rem_epi64(a, b); };
auto intel_mm512_rem_epi64 = [] (__m512i a, __m512i b) { return _mm512_rem_epi64(a, b); };
auto intel_mm_rem_epi8 = [] (__m128i a, __m128i b) { return _mm_rem_epi8(a, b); };
auto intel_mm256_rem_epi8 = [] (__m256i a, __m256i b) { return _mm256_rem_epi8(a, b); };
auto intel_mm512_rem_epi8 = [] (__m512i a, __m512i b) { return _mm512_rem_epi8(a, b); };
auto intel_mm_rem_epu16 = [] (__m128i a, __m128i b) { return _mm_rem_epu16(a, b); };
auto intel_mm256_rem_epu16 = [] (__m256i a, __m256i b) { return _mm256_rem_epu16(a, b); };
auto intel_mm512_rem_epu16 = [] (__m512i a, __m512i b) { return _mm512_rem_epu16(a, b); };
auto intel_mm_rem_epu32 = [] (__m128i a, __m128i b) { return _mm_rem_epu32(a, b); };
auto intel_mm256_rem_epu32 = [] (__m256i a, __m256i b) { return _mm256_rem_epu32(a, b); };
auto intel_mm512_mask_rem_epu32 = [] (__m512i src, __mmask16 k, __m512i a, __m512i b) { return _mm512_mask_rem_epu32(src, k, a, b); };
auto intel_mm512_rem_epu32 = [] (__m512i a, __m512i b) { return _mm512_rem_epu32(a, b); };
auto intel_mm_rem_epu64 = [] (__m128i a, __m128i b) { return _mm_rem_epu64(a, b); };
auto intel_mm256_rem_epu64 = [] (__m256i a, __m256i b) { return _mm256_rem_epu64(a, b); };
auto intel_mm512_rem_epu64 = [] (__m512i a, __m512i b) { return _mm512_rem_epu64(a, b); };
auto intel_mm_rem_epu8 = [] (__m128i a, __m128i b) { return _mm_rem_epu8(a, b); };
auto intel_mm256_rem_epu8 = [] (__m256i a, __m256i b) { return _mm256_rem_epu8(a, b); };
auto intel_mm512_rem_epu8 = [] (__m512i a, __m512i b) { return _mm512_rem_epu8(a, b); };
auto intel_mm512_mask_rint_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_rint_pd(src, k, a); };
auto intel_mm512_rint_pd = [] (__m512d a) { return _mm512_rint_pd(a); };
auto intel_mm512_mask_rint_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_rint_ps(src, k, a); };
auto intel_mm512_rint_ps = [] (__m512 a) { return _mm512_rint_ps(a); };
auto intel_mm_sin_pd = [] (__m128d a) { return _mm_sin_pd(a); };
auto intel_mm256_sin_pd = [] (__m256d a) { return _mm256_sin_pd(a); };
auto intel_mm512_mask_sin_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_sin_pd(src, k, a); };
auto intel_mm512_sin_pd = [] (__m512d a) { return _mm512_sin_pd(a); };
auto intel_mm_sin_ps = [] (__m128 a) { return _mm_sin_ps(a); };
auto intel_mm256_sin_ps = [] (__m256 a) { return _mm256_sin_ps(a); };
auto intel_mm512_mask_sin_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_sin_ps(src, k, a); };
auto intel_mm512_sin_ps = [] (__m512 a) { return _mm512_sin_ps(a); };
auto intel_mm_sincos_pd = [] (__m128d * mem_addr, __m128d a) { return _mm_sincos_pd(mem_addr, a); };
auto intel_mm256_sincos_pd = [] (__m256d * mem_addr, __m256d a) { return _mm256_sincos_pd(mem_addr, a); };
auto intel_mm512_mask_sincos_pd = [] (__m512d * mem_addr, __m512d sin_src, __m512d cos_src, __mmask8 k, __m512d a) { return _mm512_mask_sincos_pd(mem_addr, sin_src, cos_src, k, a); };
auto intel_mm512_sincos_pd = [] (__m512d * mem_addr, __m512d a) { return _mm512_sincos_pd(mem_addr, a); };
auto intel_mm_sincos_ps = [] (__m128 * mem_addr, __m128 a) { return _mm_sincos_ps(mem_addr, a); };
auto intel_mm256_sincos_ps = [] (__m256 * mem_addr, __m256 a) { return _mm256_sincos_ps(mem_addr, a); };
auto intel_mm512_mask_sincos_ps = [] (__m512 * mem_addr, __m512 sin_src, __m512 cos_src, __mmask16 k, __m512 a) { return _mm512_mask_sincos_ps(mem_addr, sin_src, cos_src, k, a); };
auto intel_mm512_sincos_ps = [] (__m512 * mem_addr, __m512 a) { return _mm512_sincos_ps(mem_addr, a); };
auto intel_mm_sind_pd = [] (__m128d a) { return _mm_sind_pd(a); };
auto intel_mm256_sind_pd = [] (__m256d a) { return _mm256_sind_pd(a); };
auto intel_mm512_mask_sind_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_sind_pd(src, k, a); };
auto intel_mm512_sind_pd = [] (__m512d a) { return _mm512_sind_pd(a); };
auto intel_mm_sind_ps = [] (__m128 a) { return _mm_sind_ps(a); };
auto intel_mm256_sind_ps = [] (__m256 a) { return _mm256_sind_ps(a); };
auto intel_mm512_mask_sind_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_sind_ps(src, k, a); };
auto intel_mm512_sind_ps = [] (__m512 a) { return _mm512_sind_ps(a); };
auto intel_mm_sinh_pd = [] (__m128d a) { return _mm_sinh_pd(a); };
auto intel_mm256_sinh_pd = [] (__m256d a) { return _mm256_sinh_pd(a); };
auto intel_mm512_mask_sinh_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_sinh_pd(src, k, a); };
auto intel_mm512_sinh_pd = [] (__m512d a) { return _mm512_sinh_pd(a); };
auto intel_mm_sinh_ps = [] (__m128 a) { return _mm_sinh_ps(a); };
auto intel_mm256_sinh_ps = [] (__m256 a) { return _mm256_sinh_ps(a); };
auto intel_mm512_mask_sinh_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_sinh_ps(src, k, a); };
auto intel_mm512_sinh_ps = [] (__m512 a) { return _mm512_sinh_ps(a); };
auto intel_mm_svml_ceil_pd = [] (__m128d a) { return _mm_svml_ceil_pd(a); };
auto intel_mm256_svml_ceil_pd = [] (__m256d a) { return _mm256_svml_ceil_pd(a); };
auto intel_mm_svml_ceil_ps = [] (__m128 a) { return _mm_svml_ceil_ps(a); };
auto intel_mm256_svml_ceil_ps = [] (__m256 a) { return _mm256_svml_ceil_ps(a); };
auto intel_mm_svml_floor_pd = [] (__m128d a) { return _mm_svml_floor_pd(a); };
auto intel_mm256_svml_floor_pd = [] (__m256d a) { return _mm256_svml_floor_pd(a); };
auto intel_mm_svml_floor_ps = [] (__m128 a) { return _mm_svml_floor_ps(a); };
auto intel_mm256_svml_floor_ps = [] (__m256 a) { return _mm256_svml_floor_ps(a); };
auto intel_mm_svml_round_pd = [] (__m128d a) { return _mm_svml_round_pd(a); };
auto intel_mm256_svml_round_pd = [] (__m256d a) { return _mm256_svml_round_pd(a); };
auto intel_mm512_mask_svml_round_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_svml_round_pd(src, k, a); };
auto intel_mm512_svml_round_pd = [] (__m512d a) { return _mm512_svml_round_pd(a); };
auto intel_mm_svml_round_ps = [] (__m128 a) { return _mm_svml_round_ps(a); };
auto intel_mm256_svml_round_ps = [] (__m256 a) { return _mm256_svml_round_ps(a); };
auto intel_mm_svml_sqrt_pd = [] (__m128d a) { return _mm_svml_sqrt_pd(a); };
auto intel_mm256_svml_sqrt_pd = [] (__m256d a) { return _mm256_svml_sqrt_pd(a); };
auto intel_mm_svml_sqrt_ps = [] (__m128 a) { return _mm_svml_sqrt_ps(a); };
auto intel_mm256_svml_sqrt_ps = [] (__m256 a) { return _mm256_svml_sqrt_ps(a); };
auto intel_mm_tan_pd = [] (__m128d a) { return _mm_tan_pd(a); };
auto intel_mm256_tan_pd = [] (__m256d a) { return _mm256_tan_pd(a); };
auto intel_mm512_mask_tan_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_tan_pd(src, k, a); };
auto intel_mm512_tan_pd = [] (__m512d a) { return _mm512_tan_pd(a); };
auto intel_mm_tan_ps = [] (__m128 a) { return _mm_tan_ps(a); };
auto intel_mm256_tan_ps = [] (__m256 a) { return _mm256_tan_ps(a); };
auto intel_mm512_mask_tan_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_tan_ps(src, k, a); };
auto intel_mm512_tan_ps = [] (__m512 a) { return _mm512_tan_ps(a); };
auto intel_mm_tand_pd = [] (__m128d a) { return _mm_tand_pd(a); };
auto intel_mm256_tand_pd = [] (__m256d a) { return _mm256_tand_pd(a); };
auto intel_mm512_mask_tand_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_tand_pd(src, k, a); };
auto intel_mm512_tand_pd = [] (__m512d a) { return _mm512_tand_pd(a); };
auto intel_mm_tand_ps = [] (__m128 a) { return _mm_tand_ps(a); };
auto intel_mm256_tand_ps = [] (__m256 a) { return _mm256_tand_ps(a); };
auto intel_mm512_mask_tand_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_tand_ps(src, k, a); };
auto intel_mm512_tand_ps = [] (__m512 a) { return _mm512_tand_ps(a); };
auto intel_mm_tanh_pd = [] (__m128d a) { return _mm_tanh_pd(a); };
auto intel_mm256_tanh_pd = [] (__m256d a) { return _mm256_tanh_pd(a); };
auto intel_mm512_mask_tanh_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_tanh_pd(src, k, a); };
auto intel_mm512_tanh_pd = [] (__m512d a) { return _mm512_tanh_pd(a); };
auto intel_mm_tanh_ps = [] (__m128 a) { return _mm_tanh_ps(a); };
auto intel_mm256_tanh_ps = [] (__m256 a) { return _mm256_tanh_ps(a); };
auto intel_mm512_mask_tanh_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_tanh_ps(src, k, a); };
auto intel_mm512_tanh_ps = [] (__m512 a) { return _mm512_tanh_ps(a); };
auto intel_mm_trunc_pd = [] (__m128d a) { return _mm_trunc_pd(a); };
auto intel_mm256_trunc_pd = [] (__m256d a) { return _mm256_trunc_pd(a); };
auto intel_mm512_mask_trunc_pd = [] (__m512d src, __mmask8 k, __m512d a) { return _mm512_mask_trunc_pd(src, k, a); };
auto intel_mm512_trunc_pd = [] (__m512d a) { return _mm512_trunc_pd(a); };
auto intel_mm_trunc_ps = [] (__m128 a) { return _mm_trunc_ps(a); };
auto intel_mm256_trunc_ps = [] (__m256 a) { return _mm256_trunc_ps(a); };
auto intel_mm512_mask_trunc_ps = [] (__m512 src, __mmask16 k, __m512 a) { return _mm512_mask_trunc_ps(src, k, a); };
auto intel_mm512_trunc_ps = [] (__m512 a) { return _mm512_trunc_ps(a); };
auto intel_mm_udiv_epi32 = [] (__m128i a, __m128i b) { return _mm_udiv_epi32(a, b); };
auto intel_mm256_udiv_epi32 = [] (__m256i a, __m256i b) { return _mm256_udiv_epi32(a, b); };
auto intel_mm_udivrem_epi32 = [] (__m128i * mem_addr, __m128i a, __m128i b) { return _mm_udivrem_epi32(mem_addr, a, b); };
auto intel_mm256_udivrem_epi32 = [] (__m256i * mem_addr, __m256i a, __m256i b) { return _mm256_udivrem_epi32(mem_addr, a, b); };
auto intel_mm_urem_epi32 = [] (__m128i a, __m128i b) { return _mm_urem_epi32(a, b); };
auto intel_mm256_urem_epi32 = [] (__m256i a, __m256i b) { return _mm256_urem_epi32(a, b); };


#include "SVML.h"


template <typename ...> __m128d _mm_acos_pd (__m128d a) { return intel_mm_acos_pd(a); }
template <typename ...> __m256d _mm256_acos_pd (__m256d a) { return intel_mm256_acos_pd(a); }
template <typename ...> __m512d _mm512_acos_pd (__m512d a) { return intel_mm512_acos_pd(a); }
template <typename ...> __m512d _mm512_mask_acos_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_acos_pd(src, k, a); }
template <typename ...> __m128 _mm_acos_ps (__m128 a) { return intel_mm_acos_ps(a); }
template <typename ...> __m256 _mm256_acos_ps (__m256 a) { return intel_mm256_acos_ps(a); }
template <typename ...> __m512 _mm512_acos_ps (__m512 a) { return intel_mm512_acos_ps(a); }
template <typename ...> __m512 _mm512_mask_acos_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_acos_ps(src, k, a); }
template <typename ...> __m128d _mm_acosh_pd (__m128d a) { return intel_mm_acosh_pd(a); }
template <typename ...> __m256d _mm256_acosh_pd (__m256d a) { return intel_mm256_acosh_pd(a); }
template <typename ...> __m512d _mm512_acosh_pd (__m512d a) { return intel_mm512_acosh_pd(a); }
template <typename ...> __m512d _mm512_mask_acosh_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_acosh_pd(src, k, a); }
template <typename ...> __m128 _mm_acosh_ps (__m128 a) { return intel_mm_acosh_ps(a); }
template <typename ...> __m256 _mm256_acosh_ps (__m256 a) { return intel_mm256_acosh_ps(a); }
template <typename ...> __m512 _mm512_acosh_ps (__m512 a) { return intel_mm512_acosh_ps(a); }
template <typename ...> __m512 _mm512_mask_acosh_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_acosh_ps(src, k, a); }
template <typename ...> __m128d _mm_asin_pd (__m128d a) { return intel_mm_asin_pd(a); }
template <typename ...> __m256d _mm256_asin_pd (__m256d a) { return intel_mm256_asin_pd(a); }
template <typename ...> __m512d _mm512_asin_pd (__m512d a) { return intel_mm512_asin_pd(a); }
template <typename ...> __m512d _mm512_mask_asin_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_asin_pd(src, k, a); }
template <typename ...> __m128 _mm_asin_ps (__m128 a) { return intel_mm_asin_ps(a); }
template <typename ...> __m256 _mm256_asin_ps (__m256 a) { return intel_mm256_asin_ps(a); }
template <typename ...> __m512 _mm512_asin_ps (__m512 a) { return intel_mm512_asin_ps(a); }
template <typename ...> __m512 _mm512_mask_asin_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_asin_ps(src, k, a); }
template <typename ...> __m128d _mm_asinh_pd (__m128d a) { return intel_mm_asinh_pd(a); }
template <typename ...> __m256d _mm256_asinh_pd (__m256d a) { return intel_mm256_asinh_pd(a); }
template <typename ...> __m512d _mm512_asinh_pd (__m512d a) { return intel_mm512_asinh_pd(a); }
template <typename ...> __m512d _mm512_mask_asinh_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_asinh_pd(src, k, a); }
template <typename ...> __m128 _mm_asinh_ps (__m128 a) { return intel_mm_asinh_ps(a); }
template <typename ...> __m256 _mm256_asinh_ps (__m256 a) { return intel_mm256_asinh_ps(a); }
template <typename ...> __m512 _mm512_asinh_ps (__m512 a) { return intel_mm512_asinh_ps(a); }
template <typename ...> __m512 _mm512_mask_asinh_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_asinh_ps(src, k, a); }
template <typename ...> __m128d _mm_atan_pd (__m128d a) { return intel_mm_atan_pd(a); }
template <typename ...> __m256d _mm256_atan_pd (__m256d a) { return intel_mm256_atan_pd(a); }
template <typename ...> __m512d _mm512_atan_pd (__m512d a) { return intel_mm512_atan_pd(a); }
template <typename ...> __m512d _mm512_mask_atan_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_atan_pd(src, k, a); }
template <typename ...> __m128 _mm_atan_ps (__m128 a) { return intel_mm_atan_ps(a); }
template <typename ...> __m256 _mm256_atan_ps (__m256 a) { return intel_mm256_atan_ps(a); }
template <typename ...> __m512 _mm512_atan_ps (__m512 a) { return intel_mm512_atan_ps(a); }
template <typename ...> __m512 _mm512_mask_atan_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_atan_ps(src, k, a); }
template <typename ...> __m128d _mm_atan2_pd (__m128d a, __m128d b) { return intel_mm_atan2_pd(a, b); }
template <typename ...> __m256d _mm256_atan2_pd (__m256d a, __m256d b) { return intel_mm256_atan2_pd(a, b); }
template <typename ...> __m512d _mm512_atan2_pd (__m512d a, __m512d b) { return intel_mm512_atan2_pd(a, b); }
template <typename ...> __m512d _mm512_mask_atan2_pd (__m512d src, __mmask8 k, __m512d a, __m512d b) { return intel_mm512_mask_atan2_pd(src, k, a, b); }
template <typename ...> __m128 _mm_atan2_ps (__m128 a, __m128 b) { return intel_mm_atan2_ps(a, b); }
template <typename ...> __m256 _mm256_atan2_ps (__m256 a, __m256 b) { return intel_mm256_atan2_ps(a, b); }
template <typename ...> __m512 _mm512_atan2_ps (__m512 a, __m512 b) { return intel_mm512_atan2_ps(a, b); }
template <typename ...> __m512 _mm512_mask_atan2_ps (__m512 src, __mmask16 k, __m512 a, __m512 b) { return intel_mm512_mask_atan2_ps(src, k, a, b); }
template <typename ...> __m128d _mm_atanh_pd (__m128d a) { return intel_mm_atanh_pd(a); }
template <typename ...> __m256d _mm256_atanh_pd (__m256d a) { return intel_mm256_atanh_pd(a); }
template <typename ...> __m512d _mm512_atanh_pd (__m512d a) { return intel_mm512_atanh_pd(a); }
template <typename ...> __m512d _mm512_mask_atanh_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_atanh_pd(src, k, a); }
template <typename ...> __m128 _mm_atanh_ps (__m128 a) { return intel_mm_atanh_ps(a); }
template <typename ...> __m256 _mm256_atanh_ps (__m256 a) { return intel_mm256_atanh_ps(a); }
template <typename ...> __m512 _mm512_atanh_ps (__m512 a) { return intel_mm512_atanh_ps(a); }
template <typename ...> __m512 _mm512_mask_atanh_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_atanh_ps(src, k, a); }
template <typename ...> __m128d _mm_cbrt_pd (__m128d a) { return intel_mm_cbrt_pd(a); }
template <typename ...> __m256d _mm256_cbrt_pd (__m256d a) { return intel_mm256_cbrt_pd(a); }
template <typename ...> __m512d _mm512_cbrt_pd (__m512d a) { return intel_mm512_cbrt_pd(a); }
template <typename ...> __m512d _mm512_mask_cbrt_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_cbrt_pd(src, k, a); }
template <typename ...> __m128 _mm_cbrt_ps (__m128 a) { return intel_mm_cbrt_ps(a); }
template <typename ...> __m256 _mm256_cbrt_ps (__m256 a) { return intel_mm256_cbrt_ps(a); }
template <typename ...> __m512 _mm512_cbrt_ps (__m512 a) { return intel_mm512_cbrt_ps(a); }
template <typename ...> __m512 _mm512_mask_cbrt_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_cbrt_ps(src, k, a); }
template <typename ...> __m128d _mm_cdfnorm_pd (__m128d a) { return intel_mm_cdfnorm_pd(a); }
template <typename ...> __m256d _mm256_cdfnorm_pd (__m256d a) { return intel_mm256_cdfnorm_pd(a); }
template <typename ...> __m512d _mm512_cdfnorm_pd (__m512d a) { return intel_mm512_cdfnorm_pd(a); }
template <typename ...> __m512d _mm512_mask_cdfnorm_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_cdfnorm_pd(src, k, a); }
template <typename ...> __m128 _mm_cdfnorm_ps (__m128 a) { return intel_mm_cdfnorm_ps(a); }
template <typename ...> __m256 _mm256_cdfnorm_ps (__m256 a) { return intel_mm256_cdfnorm_ps(a); }
template <typename ...> __m512 _mm512_cdfnorm_ps (__m512 a) { return intel_mm512_cdfnorm_ps(a); }
template <typename ...> __m512 _mm512_mask_cdfnorm_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_cdfnorm_ps(src, k, a); }
template <typename ...> __m128d _mm_cdfnorminv_pd (__m128d a) { return intel_mm_cdfnorminv_pd(a); }
template <typename ...> __m256d _mm256_cdfnorminv_pd (__m256d a) { return intel_mm256_cdfnorminv_pd(a); }
template <typename ...> __m512d _mm512_cdfnorminv_pd (__m512d a) { return intel_mm512_cdfnorminv_pd(a); }
template <typename ...> __m512d _mm512_mask_cdfnorminv_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_cdfnorminv_pd(src, k, a); }
template <typename ...> __m128 _mm_cdfnorminv_ps (__m128 a) { return intel_mm_cdfnorminv_ps(a); }
template <typename ...> __m256 _mm256_cdfnorminv_ps (__m256 a) { return intel_mm256_cdfnorminv_ps(a); }
template <typename ...> __m512 _mm512_cdfnorminv_ps (__m512 a) { return intel_mm512_cdfnorminv_ps(a); }
template <typename ...> __m512 _mm512_mask_cdfnorminv_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_cdfnorminv_ps(src, k, a); }
template <typename ...> __m512d _mm512_ceil_pd (__m512d a) { return intel_mm512_ceil_pd(a); }
template <typename ...> __m512d _mm512_mask_ceil_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_ceil_pd(src, k, a); }
template <typename ...> __m512 _mm512_ceil_ps (__m512 a) { return intel_mm512_ceil_ps(a); }
template <typename ...> __m512 _mm512_mask_ceil_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_ceil_ps(src, k, a); }
template <typename ...> __m128 _mm_cexp_ps (__m128 a) { return intel_mm_cexp_ps(a); }
template <typename ...> __m256 _mm256_cexp_ps (__m256 a) { return intel_mm256_cexp_ps(a); }
template <typename ...> __m128 _mm_clog_ps (__m128 a) { return intel_mm_clog_ps(a); }
template <typename ...> __m256 _mm256_clog_ps (__m256 a) { return intel_mm256_clog_ps(a); }
template <typename ...> __m128d _mm_cos_pd (__m128d a) { return intel_mm_cos_pd(a); }
template <typename ...> __m256d _mm256_cos_pd (__m256d a) { return intel_mm256_cos_pd(a); }
template <typename ...> __m512d _mm512_cos_pd (__m512d a) { return intel_mm512_cos_pd(a); }
template <typename ...> __m512d _mm512_mask_cos_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_cos_pd(src, k, a); }
template <typename ...> __m128 _mm_cos_ps (__m128 a) { return intel_mm_cos_ps(a); }
template <typename ...> __m256 _mm256_cos_ps (__m256 a) { return intel_mm256_cos_ps(a); }
template <typename ...> __m512 _mm512_cos_ps (__m512 a) { return intel_mm512_cos_ps(a); }
template <typename ...> __m512 _mm512_mask_cos_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_cos_ps(src, k, a); }
template <typename ...> __m128d _mm_cosd_pd (__m128d a) { return intel_mm_cosd_pd(a); }
template <typename ...> __m256d _mm256_cosd_pd (__m256d a) { return intel_mm256_cosd_pd(a); }
template <typename ...> __m512d _mm512_cosd_pd (__m512d a) { return intel_mm512_cosd_pd(a); }
template <typename ...> __m512d _mm512_mask_cosd_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_cosd_pd(src, k, a); }
template <typename ...> __m128 _mm_cosd_ps (__m128 a) { return intel_mm_cosd_ps(a); }
template <typename ...> __m256 _mm256_cosd_ps (__m256 a) { return intel_mm256_cosd_ps(a); }
template <typename ...> __m512 _mm512_cosd_ps (__m512 a) { return intel_mm512_cosd_ps(a); }
template <typename ...> __m512 _mm512_mask_cosd_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_cosd_ps(src, k, a); }
template <typename ...> __m128d _mm_cosh_pd (__m128d a) { return intel_mm_cosh_pd(a); }
template <typename ...> __m256d _mm256_cosh_pd (__m256d a) { return intel_mm256_cosh_pd(a); }
template <typename ...> __m512d _mm512_cosh_pd (__m512d a) { return intel_mm512_cosh_pd(a); }
template <typename ...> __m512d _mm512_mask_cosh_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_cosh_pd(src, k, a); }
template <typename ...> __m128 _mm_cosh_ps (__m128 a) { return intel_mm_cosh_ps(a); }
template <typename ...> __m256 _mm256_cosh_ps (__m256 a) { return intel_mm256_cosh_ps(a); }
template <typename ...> __m512 _mm512_cosh_ps (__m512 a) { return intel_mm512_cosh_ps(a); }
template <typename ...> __m512 _mm512_mask_cosh_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_cosh_ps(src, k, a); }
template <typename ...> __m128 _mm_csqrt_ps (__m128 a) { return intel_mm_csqrt_ps(a); }
template <typename ...> __m256 _mm256_csqrt_ps (__m256 a) { return intel_mm256_csqrt_ps(a); }
template <typename ...> __m128i _mm_div_epi16 (__m128i a, __m128i b) { return intel_mm_div_epi16(a, b); }
template <typename ...> __m256i _mm256_div_epi16 (__m256i a, __m256i b) { return intel_mm256_div_epi16(a, b); }
template <typename ...> __m512i _mm512_div_epi16 (__m512i a, __m512i b) { return intel_mm512_div_epi16(a, b); }
template <typename ...> __m128i _mm_div_epi32 (__m128i a, __m128i b) { return intel_mm_div_epi32(a, b); }
template <typename ...> __m256i _mm256_div_epi32 (__m256i a, __m256i b) { return intel_mm256_div_epi32(a, b); }
template <typename ...> __m512i _mm512_div_epi32 (__m512i a, __m512i b) { return intel_mm512_div_epi32(a, b); }
template <typename ...> __m512i _mm512_mask_div_epi32 (__m512i src, __mmask16 k, __m512i a, __m512i b) { return intel_mm512_mask_div_epi32(src, k, a, b); }
template <typename ...> __m128i _mm_div_epi64 (__m128i a, __m128i b) { return intel_mm_div_epi64(a, b); }
template <typename ...> __m256i _mm256_div_epi64 (__m256i a, __m256i b) { return intel_mm256_div_epi64(a, b); }
template <typename ...> __m512i _mm512_div_epi64 (__m512i a, __m512i b) { return intel_mm512_div_epi64(a, b); }
template <typename ...> __m128i _mm_div_epi8 (__m128i a, __m128i b) { return intel_mm_div_epi8(a, b); }
template <typename ...> __m256i _mm256_div_epi8 (__m256i a, __m256i b) { return intel_mm256_div_epi8(a, b); }
template <typename ...> __m512i _mm512_div_epi8 (__m512i a, __m512i b) { return intel_mm512_div_epi8(a, b); }
template <typename ...> __m128i _mm_div_epu16 (__m128i a, __m128i b) { return intel_mm_div_epu16(a, b); }
template <typename ...> __m256i _mm256_div_epu16 (__m256i a, __m256i b) { return intel_mm256_div_epu16(a, b); }
template <typename ...> __m512i _mm512_div_epu16 (__m512i a, __m512i b) { return intel_mm512_div_epu16(a, b); }
template <typename ...> __m128i _mm_div_epu32 (__m128i a, __m128i b) { return intel_mm_div_epu32(a, b); }
template <typename ...> __m256i _mm256_div_epu32 (__m256i a, __m256i b) { return intel_mm256_div_epu32(a, b); }
template <typename ...> __m512i _mm512_div_epu32 (__m512i a, __m512i b) { return intel_mm512_div_epu32(a, b); }
template <typename ...> __m512i _mm512_mask_div_epu32 (__m512i src, __mmask16 k, __m512i a, __m512i b) { return intel_mm512_mask_div_epu32(src, k, a, b); }
template <typename ...> __m128i _mm_div_epu64 (__m128i a, __m128i b) { return intel_mm_div_epu64(a, b); }
template <typename ...> __m256i _mm256_div_epu64 (__m256i a, __m256i b) { return intel_mm256_div_epu64(a, b); }
template <typename ...> __m512i _mm512_div_epu64 (__m512i a, __m512i b) { return intel_mm512_div_epu64(a, b); }
template <typename ...> __m128i _mm_div_epu8 (__m128i a, __m128i b) { return intel_mm_div_epu8(a, b); }
template <typename ...> __m256i _mm256_div_epu8 (__m256i a, __m256i b) { return intel_mm256_div_epu8(a, b); }
template <typename ...> __m512i _mm512_div_epu8 (__m512i a, __m512i b) { return intel_mm512_div_epu8(a, b); }
template <typename ...> __m128d _mm_erf_pd (__m128d a) { return intel_mm_erf_pd(a); }
template <typename ...> __m256d _mm256_erf_pd (__m256d a) { return intel_mm256_erf_pd(a); }
template <typename ...> __m512d _mm512_erf_pd (__m512d a) { return intel_mm512_erf_pd(a); }
template <typename ...> __m512d _mm512_mask_erf_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_erf_pd(src, k, a); }
template <typename ...> __m128 _mm_erf_ps (__m128 a) { return intel_mm_erf_ps(a); }
template <typename ...> __m256 _mm256_erf_ps (__m256 a) { return intel_mm256_erf_ps(a); }
template <typename ...> __m512 _mm512_erf_ps (__m512 a) { return intel_mm512_erf_ps(a); }
template <typename ...> __m512 _mm512_mask_erf_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_erf_ps(src, k, a); }
template <typename ...> __m128d _mm_erfc_pd (__m128d a) { return intel_mm_erfc_pd(a); }
template <typename ...> __m256d _mm256_erfc_pd (__m256d a) { return intel_mm256_erfc_pd(a); }
template <typename ...> __m512d _mm512_erfc_pd (__m512d a) { return intel_mm512_erfc_pd(a); }
template <typename ...> __m512d _mm512_mask_erfc_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_erfc_pd(src, k, a); }
template <typename ...> __m128 _mm_erfc_ps (__m128 a) { return intel_mm_erfc_ps(a); }
template <typename ...> __m256 _mm256_erfc_ps (__m256 a) { return intel_mm256_erfc_ps(a); }
template <typename ...> __m512 _mm512_erfc_ps (__m512 a) { return intel_mm512_erfc_ps(a); }
template <typename ...> __m512 _mm512_mask_erfc_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_erfc_ps(src, k, a); }
template <typename ...> __m128d _mm_erfcinv_pd (__m128d a) { return intel_mm_erfcinv_pd(a); }
template <typename ...> __m256d _mm256_erfcinv_pd (__m256d a) { return intel_mm256_erfcinv_pd(a); }
template <typename ...> __m512d _mm512_erfcinv_pd (__m512d a) { return intel_mm512_erfcinv_pd(a); }
template <typename ...> __m512d _mm512_mask_erfcinv_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_erfcinv_pd(src, k, a); }
template <typename ...> __m128 _mm_erfcinv_ps (__m128 a) { return intel_mm_erfcinv_ps(a); }
template <typename ...> __m256 _mm256_erfcinv_ps (__m256 a) { return intel_mm256_erfcinv_ps(a); }
template <typename ...> __m512 _mm512_erfcinv_ps (__m512 a) { return intel_mm512_erfcinv_ps(a); }
template <typename ...> __m512 _mm512_mask_erfcinv_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_erfcinv_ps(src, k, a); }
template <typename ...> __m128d _mm_erfinv_pd (__m128d a) { return intel_mm_erfinv_pd(a); }
template <typename ...> __m256d _mm256_erfinv_pd (__m256d a) { return intel_mm256_erfinv_pd(a); }
template <typename ...> __m512d _mm512_erfinv_pd (__m512d a) { return intel_mm512_erfinv_pd(a); }
template <typename ...> __m512d _mm512_mask_erfinv_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_erfinv_pd(src, k, a); }
template <typename ...> __m128 _mm_erfinv_ps (__m128 a) { return intel_mm_erfinv_ps(a); }
template <typename ...> __m256 _mm256_erfinv_ps (__m256 a) { return intel_mm256_erfinv_ps(a); }
template <typename ...> __m512 _mm512_erfinv_ps (__m512 a) { return intel_mm512_erfinv_ps(a); }
template <typename ...> __m512 _mm512_mask_erfinv_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_erfinv_ps(src, k, a); }
template <typename ...> __m128d _mm_exp_pd (__m128d a) { return intel_mm_exp_pd(a); }
template <typename ...> __m256d _mm256_exp_pd (__m256d a) { return intel_mm256_exp_pd(a); }
template <typename ...> __m512d _mm512_exp_pd (__m512d a) { return intel_mm512_exp_pd(a); }
template <typename ...> __m512d _mm512_mask_exp_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_exp_pd(src, k, a); }
template <typename ...> __m128 _mm_exp_ps (__m128 a) { return intel_mm_exp_ps(a); }
template <typename ...> __m256 _mm256_exp_ps (__m256 a) { return intel_mm256_exp_ps(a); }
template <typename ...> __m512 _mm512_exp_ps (__m512 a) { return intel_mm512_exp_ps(a); }
template <typename ...> __m512 _mm512_mask_exp_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_exp_ps(src, k, a); }
template <typename ...> __m128d _mm_exp10_pd (__m128d a) { return intel_mm_exp10_pd(a); }
template <typename ...> __m256d _mm256_exp10_pd (__m256d a) { return intel_mm256_exp10_pd(a); }
template <typename ...> __m512d _mm512_exp10_pd (__m512d a) { return intel_mm512_exp10_pd(a); }
template <typename ...> __m512d _mm512_mask_exp10_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_exp10_pd(src, k, a); }
template <typename ...> __m128 _mm_exp10_ps (__m128 a) { return intel_mm_exp10_ps(a); }
template <typename ...> __m256 _mm256_exp10_ps (__m256 a) { return intel_mm256_exp10_ps(a); }
template <typename ...> __m512 _mm512_exp10_ps (__m512 a) { return intel_mm512_exp10_ps(a); }
template <typename ...> __m512 _mm512_mask_exp10_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_exp10_ps(src, k, a); }
template <typename ...> __m128d _mm_exp2_pd (__m128d a) { return intel_mm_exp2_pd(a); }
template <typename ...> __m256d _mm256_exp2_pd (__m256d a) { return intel_mm256_exp2_pd(a); }
template <typename ...> __m512d _mm512_exp2_pd (__m512d a) { return intel_mm512_exp2_pd(a); }
template <typename ...> __m512d _mm512_mask_exp2_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_exp2_pd(src, k, a); }
template <typename ...> __m128 _mm_exp2_ps (__m128 a) { return intel_mm_exp2_ps(a); }
template <typename ...> __m256 _mm256_exp2_ps (__m256 a) { return intel_mm256_exp2_ps(a); }
template <typename ...> __m512 _mm512_exp2_ps (__m512 a) { return intel_mm512_exp2_ps(a); }
template <typename ...> __m512 _mm512_mask_exp2_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_exp2_ps(src, k, a); }
template <typename ...> __m128d _mm_expm1_pd (__m128d a) { return intel_mm_expm1_pd(a); }
template <typename ...> __m256d _mm256_expm1_pd (__m256d a) { return intel_mm256_expm1_pd(a); }
template <typename ...> __m512d _mm512_expm1_pd (__m512d a) { return intel_mm512_expm1_pd(a); }
template <typename ...> __m512d _mm512_mask_expm1_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_expm1_pd(src, k, a); }
template <typename ...> __m128 _mm_expm1_ps (__m128 a) { return intel_mm_expm1_ps(a); }
template <typename ...> __m256 _mm256_expm1_ps (__m256 a) { return intel_mm256_expm1_ps(a); }
template <typename ...> __m512 _mm512_expm1_ps (__m512 a) { return intel_mm512_expm1_ps(a); }
template <typename ...> __m512 _mm512_mask_expm1_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_expm1_ps(src, k, a); }
template <typename ...> __m512d _mm512_floor_pd (__m512d a) { return intel_mm512_floor_pd(a); }
template <typename ...> __m512d _mm512_mask_floor_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_floor_pd(src, k, a); }
template <typename ...> __m512 _mm512_floor_ps (__m512 a) { return intel_mm512_floor_ps(a); }
template <typename ...> __m512 _mm512_mask_floor_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_floor_ps(src, k, a); }
template <typename ...> __m128d _mm_hypot_pd (__m128d a, __m128d b) { return intel_mm_hypot_pd(a, b); }
template <typename ...> __m256d _mm256_hypot_pd (__m256d a, __m256d b) { return intel_mm256_hypot_pd(a, b); }
template <typename ...> __m512d _mm512_hypot_pd (__m512d a, __m512d b) { return intel_mm512_hypot_pd(a, b); }
template <typename ...> __m512d _mm512_mask_hypot_pd (__m512d src, __mmask8 k, __m512d a, __m512d b) { return intel_mm512_mask_hypot_pd(src, k, a, b); }
template <typename ...> __m128 _mm_hypot_ps (__m128 a, __m128 b) { return intel_mm_hypot_ps(a, b); }
template <typename ...> __m256 _mm256_hypot_ps (__m256 a, __m256 b) { return intel_mm256_hypot_ps(a, b); }
template <typename ...> __m512 _mm512_hypot_ps (__m512 a, __m512 b) { return intel_mm512_hypot_ps(a, b); }
template <typename ...> __m512 _mm512_mask_hypot_ps (__m512 src, __mmask16 k, __m512 a, __m512 b) { return intel_mm512_mask_hypot_ps(src, k, a, b); }
template <typename ...> __m128i _mm_idiv_epi32 (__m128i a, __m128i b) { return intel_mm_idiv_epi32(a, b); }
template <typename ...> __m256i _mm256_idiv_epi32 (__m256i a, __m256i b) { return intel_mm256_idiv_epi32(a, b); }
template <typename ...> __m128i _mm_idivrem_epi32 (__m128i * mem_addr, __m128i a, __m128i b) { return intel_mm_idivrem_epi32(mem_addr, a, b); }
template <typename ...> __m256i _mm256_idivrem_epi32 (__m256i * mem_addr, __m256i a, __m256i b) { return intel_mm256_idivrem_epi32(mem_addr, a, b); }
template <typename ...> __m128d _mm_invcbrt_pd (__m128d a) { return intel_mm_invcbrt_pd(a); }
template <typename ...> __m256d _mm256_invcbrt_pd (__m256d a) { return intel_mm256_invcbrt_pd(a); }
template <typename ...> __m128 _mm_invcbrt_ps (__m128 a) { return intel_mm_invcbrt_ps(a); }
template <typename ...> __m256 _mm256_invcbrt_ps (__m256 a) { return intel_mm256_invcbrt_ps(a); }
template <typename ...> __m128d _mm_invsqrt_pd (__m128d a) { return intel_mm_invsqrt_pd(a); }
template <typename ...> __m256d _mm256_invsqrt_pd (__m256d a) { return intel_mm256_invsqrt_pd(a); }
template <typename ...> __m512d _mm512_invsqrt_pd (__m512d a) { return intel_mm512_invsqrt_pd(a); }
template <typename ...> __m512d _mm512_mask_invsqrt_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_invsqrt_pd(src, k, a); }
template <typename ...> __m128 _mm_invsqrt_ps (__m128 a) { return intel_mm_invsqrt_ps(a); }
template <typename ...> __m256 _mm256_invsqrt_ps (__m256 a) { return intel_mm256_invsqrt_ps(a); }
template <typename ...> __m512 _mm512_invsqrt_ps (__m512 a) { return intel_mm512_invsqrt_ps(a); }
template <typename ...> __m512 _mm512_mask_invsqrt_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_invsqrt_ps(src, k, a); }
template <typename ...> __m128i _mm_irem_epi32 (__m128i a, __m128i b) { return intel_mm_irem_epi32(a, b); }
template <typename ...> __m256i _mm256_irem_epi32 (__m256i a, __m256i b) { return intel_mm256_irem_epi32(a, b); }
template <typename ...> __m128d _mm_log_pd (__m128d a) { return intel_mm_log_pd(a); }
template <typename ...> __m256d _mm256_log_pd (__m256d a) { return intel_mm256_log_pd(a); }
template <typename ...> __m512d _mm512_log_pd (__m512d a) { return intel_mm512_log_pd(a); }
template <typename ...> __m512d _mm512_mask_log_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_log_pd(src, k, a); }
template <typename ...> __m128 _mm_log_ps (__m128 a) { return intel_mm_log_ps(a); }
template <typename ...> __m256 _mm256_log_ps (__m256 a) { return intel_mm256_log_ps(a); }
template <typename ...> __m512 _mm512_log_ps (__m512 a) { return intel_mm512_log_ps(a); }
template <typename ...> __m512 _mm512_mask_log_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_log_ps(src, k, a); }
template <typename ...> __m128d _mm_log10_pd (__m128d a) { return intel_mm_log10_pd(a); }
template <typename ...> __m256d _mm256_log10_pd (__m256d a) { return intel_mm256_log10_pd(a); }
template <typename ...> __m512d _mm512_log10_pd (__m512d a) { return intel_mm512_log10_pd(a); }
template <typename ...> __m512d _mm512_mask_log10_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_log10_pd(src, k, a); }
template <typename ...> __m128 _mm_log10_ps (__m128 a) { return intel_mm_log10_ps(a); }
template <typename ...> __m256 _mm256_log10_ps (__m256 a) { return intel_mm256_log10_ps(a); }
template <typename ...> __m512 _mm512_log10_ps (__m512 a) { return intel_mm512_log10_ps(a); }
template <typename ...> __m512 _mm512_mask_log10_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_log10_ps(src, k, a); }
template <typename ...> __m128d _mm_log1p_pd (__m128d a) { return intel_mm_log1p_pd(a); }
template <typename ...> __m256d _mm256_log1p_pd (__m256d a) { return intel_mm256_log1p_pd(a); }
template <typename ...> __m512d _mm512_log1p_pd (__m512d a) { return intel_mm512_log1p_pd(a); }
template <typename ...> __m512d _mm512_mask_log1p_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_log1p_pd(src, k, a); }
template <typename ...> __m128 _mm_log1p_ps (__m128 a) { return intel_mm_log1p_ps(a); }
template <typename ...> __m256 _mm256_log1p_ps (__m256 a) { return intel_mm256_log1p_ps(a); }
template <typename ...> __m512 _mm512_log1p_ps (__m512 a) { return intel_mm512_log1p_ps(a); }
template <typename ...> __m512 _mm512_mask_log1p_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_log1p_ps(src, k, a); }
template <typename ...> __m128d _mm_log2_pd (__m128d a) { return intel_mm_log2_pd(a); }
template <typename ...> __m256d _mm256_log2_pd (__m256d a) { return intel_mm256_log2_pd(a); }
template <typename ...> __m512d _mm512_log2_pd (__m512d a) { return intel_mm512_log2_pd(a); }
template <typename ...> __m512d _mm512_mask_log2_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_log2_pd(src, k, a); }
template <typename ...> __m128 _mm_log2_ps (__m128 a) { return intel_mm_log2_ps(a); }
template <typename ...> __m256 _mm256_log2_ps (__m256 a) { return intel_mm256_log2_ps(a); }
template <typename ...> __m512 _mm512_log2_ps (__m512 a) { return intel_mm512_log2_ps(a); }
template <typename ...> __m512 _mm512_mask_log2_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_log2_ps(src, k, a); }
template <typename ...> __m128d _mm_logb_pd (__m128d a) { return intel_mm_logb_pd(a); }
template <typename ...> __m256d _mm256_logb_pd (__m256d a) { return intel_mm256_logb_pd(a); }
template <typename ...> __m512d _mm512_logb_pd (__m512d a) { return intel_mm512_logb_pd(a); }
template <typename ...> __m512d _mm512_mask_logb_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_logb_pd(src, k, a); }
template <typename ...> __m128 _mm_logb_ps (__m128 a) { return intel_mm_logb_ps(a); }
template <typename ...> __m256 _mm256_logb_ps (__m256 a) { return intel_mm256_logb_ps(a); }
template <typename ...> __m512 _mm512_logb_ps (__m512 a) { return intel_mm512_logb_ps(a); }
template <typename ...> __m512 _mm512_mask_logb_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_logb_ps(src, k, a); }
template <typename ...> __m512d _mm512_mask_nearbyint_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_nearbyint_pd(src, k, a); }
template <typename ...> __m512d _mm512_nearbyint_pd (__m512d a) { return intel_mm512_nearbyint_pd(a); }
template <typename ...> __m512 _mm512_mask_nearbyint_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_nearbyint_ps(src, k, a); }
template <typename ...> __m512 _mm512_nearbyint_ps (__m512 a) { return intel_mm512_nearbyint_ps(a); }
template <typename ...> __m128d _mm_pow_pd (__m128d a, __m128d b) { return intel_mm_pow_pd(a, b); }
template <typename ...> __m256d _mm256_pow_pd (__m256d a, __m256d b) { return intel_mm256_pow_pd(a, b); }
template <typename ...> __m512d _mm512_mask_pow_pd (__m512d src, __mmask8 k, __m512d a, __m512d b) { return intel_mm512_mask_pow_pd(src, k, a, b); }
template <typename ...> __m512d _mm512_pow_pd (__m512d a, __m512d b) { return intel_mm512_pow_pd(a, b); }
template <typename ...> __m128 _mm_pow_ps (__m128 a, __m128 b) { return intel_mm_pow_ps(a, b); }
template <typename ...> __m256 _mm256_pow_ps (__m256 a, __m256 b) { return intel_mm256_pow_ps(a, b); }
template <typename ...> __m512 _mm512_mask_pow_ps (__m512 src, __mmask16 k, __m512 a, __m512 b) { return intel_mm512_mask_pow_ps(src, k, a, b); }
template <typename ...> __m512 _mm512_pow_ps (__m512 a, __m512 b) { return intel_mm512_pow_ps(a, b); }
template <typename ...> __m512d _mm512_mask_recip_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_recip_pd(src, k, a); }
template <typename ...> __m512d _mm512_recip_pd (__m512d a) { return intel_mm512_recip_pd(a); }
template <typename ...> __m512 _mm512_mask_recip_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_recip_ps(src, k, a); }
template <typename ...> __m512 _mm512_recip_ps (__m512 a) { return intel_mm512_recip_ps(a); }
template <typename ...> __m128i _mm_rem_epi16 (__m128i a, __m128i b) { return intel_mm_rem_epi16(a, b); }
template <typename ...> __m256i _mm256_rem_epi16 (__m256i a, __m256i b) { return intel_mm256_rem_epi16(a, b); }
template <typename ...> __m512i _mm512_rem_epi16 (__m512i a, __m512i b) { return intel_mm512_rem_epi16(a, b); }
template <typename ...> __m128i _mm_rem_epi32 (__m128i a, __m128i b) { return intel_mm_rem_epi32(a, b); }
template <typename ...> __m256i _mm256_rem_epi32 (__m256i a, __m256i b) { return intel_mm256_rem_epi32(a, b); }
template <typename ...> __m512i _mm512_mask_rem_epi32 (__m512i src, __mmask16 k, __m512i a, __m512i b) { return intel_mm512_mask_rem_epi32(src, k, a, b); }
template <typename ...> __m512i _mm512_rem_epi32 (__m512i a, __m512i b) { return intel_mm512_rem_epi32(a, b); }
template <typename ...> __m128i _mm_rem_epi64 (__m128i a, __m128i b) { return intel_mm_rem_epi64(a, b); }
template <typename ...> __m256i _mm256_rem_epi64 (__m256i a, __m256i b) { return intel_mm256_rem_epi64(a, b); }
template <typename ...> __m512i _mm512_rem_epi64 (__m512i a, __m512i b) { return intel_mm512_rem_epi64(a, b); }
template <typename ...> __m128i _mm_rem_epi8 (__m128i a, __m128i b) { return intel_mm_rem_epi8(a, b); }
template <typename ...> __m256i _mm256_rem_epi8 (__m256i a, __m256i b) { return intel_mm256_rem_epi8(a, b); }
template <typename ...> __m512i _mm512_rem_epi8 (__m512i a, __m512i b) { return intel_mm512_rem_epi8(a, b); }
template <typename ...> __m128i _mm_rem_epu16 (__m128i a, __m128i b) { return intel_mm_rem_epu16(a, b); }
template <typename ...> __m256i _mm256_rem_epu16 (__m256i a, __m256i b) { return intel_mm256_rem_epu16(a, b); }
template <typename ...> __m512i _mm512_rem_epu16 (__m512i a, __m512i b) { return intel_mm512_rem_epu16(a, b); }
template <typename ...> __m128i _mm_rem_epu32 (__m128i a, __m128i b) { return intel_mm_rem_epu32(a, b); }
template <typename ...> __m256i _mm256_rem_epu32 (__m256i a, __m256i b) { return intel_mm256_rem_epu32(a, b); }
template <typename ...> __m512i _mm512_mask_rem_epu32 (__m512i src, __mmask16 k, __m512i a, __m512i b) { return intel_mm512_mask_rem_epu32(src, k, a, b); }
template <typename ...> __m512i _mm512_rem_epu32 (__m512i a, __m512i b) { return intel_mm512_rem_epu32(a, b); }
template <typename ...> __m128i _mm_rem_epu64 (__m128i a, __m128i b) { return intel_mm_rem_epu64(a, b); }
template <typename ...> __m256i _mm256_rem_epu64 (__m256i a, __m256i b) { return intel_mm256_rem_epu64(a, b); }
template <typename ...> __m512i _mm512_rem_epu64 (__m512i a, __m512i b) { return intel_mm512_rem_epu64(a, b); }
template <typename ...> __m128i _mm_rem_epu8 (__m128i a, __m128i b) { return intel_mm_rem_epu8(a, b); }
template <typename ...> __m256i _mm256_rem_epu8 (__m256i a, __m256i b) { return intel_mm256_rem_epu8(a, b); }
template <typename ...> __m512i _mm512_rem_epu8 (__m512i a, __m512i b) { return intel_mm512_rem_epu8(a, b); }
template <typename ...> __m512d _mm512_mask_rint_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_rint_pd(src, k, a); }
template <typename ...> __m512d _mm512_rint_pd (__m512d a) { return intel_mm512_rint_pd(a); }
template <typename ...> __m512 _mm512_mask_rint_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_rint_ps(src, k, a); }
template <typename ...> __m512 _mm512_rint_ps (__m512 a) { return intel_mm512_rint_ps(a); }
template <typename ...> __m128d _mm_sin_pd (__m128d a) { return intel_mm_sin_pd(a); }
template <typename ...> __m256d _mm256_sin_pd (__m256d a) { return intel_mm256_sin_pd(a); }
template <typename ...> __m512d _mm512_mask_sin_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_sin_pd(src, k, a); }
template <typename ...> __m512d _mm512_sin_pd (__m512d a) { return intel_mm512_sin_pd(a); }
template <typename ...> __m128 _mm_sin_ps (__m128 a) { return intel_mm_sin_ps(a); }
template <typename ...> __m256 _mm256_sin_ps (__m256 a) { return intel_mm256_sin_ps(a); }
template <typename ...> __m512 _mm512_mask_sin_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_sin_ps(src, k, a); }
template <typename ...> __m512 _mm512_sin_ps (__m512 a) { return intel_mm512_sin_ps(a); }
template <typename ...> __m128d _mm_sincos_pd (__m128d * mem_addr, __m128d a) { return intel_mm_sincos_pd(mem_addr, a); }
template <typename ...> __m256d _mm256_sincos_pd (__m256d * mem_addr, __m256d a) { return intel_mm256_sincos_pd(mem_addr, a); }
template <typename ...> __m512d _mm512_mask_sincos_pd (__m512d * mem_addr, __m512d sin_src, __m512d cos_src, __mmask8 k, __m512d a) { return intel_mm512_mask_sincos_pd(mem_addr, sin_src, cos_src, k, a); }
template <typename ...> __m512d _mm512_sincos_pd (__m512d * mem_addr, __m512d a) { return intel_mm512_sincos_pd(mem_addr, a); }
template <typename ...> __m128 _mm_sincos_ps (__m128 * mem_addr, __m128 a) { return intel_mm_sincos_ps(mem_addr, a); }
template <typename ...> __m256 _mm256_sincos_ps (__m256 * mem_addr, __m256 a) { return intel_mm256_sincos_ps(mem_addr, a); }
template <typename ...> __m512 _mm512_mask_sincos_ps (__m512 * mem_addr, __m512 sin_src, __m512 cos_src, __mmask16 k, __m512 a) { return intel_mm512_mask_sincos_ps(mem_addr, sin_src, cos_src, k, a); }
template <typename ...> __m512 _mm512_sincos_ps (__m512 * mem_addr, __m512 a) { return intel_mm512_sincos_ps(mem_addr, a); }
template <typename ...> __m128d _mm_sind_pd (__m128d a) { return intel_mm_sind_pd(a); }
template <typename ...> __m256d _mm256_sind_pd (__m256d a) { return intel_mm256_sind_pd(a); }
template <typename ...> __m512d _mm512_mask_sind_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_sind_pd(src, k, a); }
template <typename ...> __m512d _mm512_sind_pd (__m512d a) { return intel_mm512_sind_pd(a); }
template <typename ...> __m128 _mm_sind_ps (__m128 a) { return intel_mm_sind_ps(a); }
template <typename ...> __m256 _mm256_sind_ps (__m256 a) { return intel_mm256_sind_ps(a); }
template <typename ...> __m512 _mm512_mask_sind_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_sind_ps(src, k, a); }
template <typename ...> __m512 _mm512_sind_ps (__m512 a) { return intel_mm512_sind_ps(a); }
template <typename ...> __m128d _mm_sinh_pd (__m128d a) { return intel_mm_sinh_pd(a); }
template <typename ...> __m256d _mm256_sinh_pd (__m256d a) { return intel_mm256_sinh_pd(a); }
template <typename ...> __m512d _mm512_mask_sinh_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_sinh_pd(src, k, a); }
template <typename ...> __m512d _mm512_sinh_pd (__m512d a) { return intel_mm512_sinh_pd(a); }
template <typename ...> __m128 _mm_sinh_ps (__m128 a) { return intel_mm_sinh_ps(a); }
template <typename ...> __m256 _mm256_sinh_ps (__m256 a) { return intel_mm256_sinh_ps(a); }
template <typename ...> __m512 _mm512_mask_sinh_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_sinh_ps(src, k, a); }
template <typename ...> __m512 _mm512_sinh_ps (__m512 a) { return intel_mm512_sinh_ps(a); }
template <typename ...> __m128d _mm_svml_ceil_pd (__m128d a) { return intel_mm_svml_ceil_pd(a); }
template <typename ...> __m256d _mm256_svml_ceil_pd (__m256d a) { return intel_mm256_svml_ceil_pd(a); }
template <typename ...> __m128 _mm_svml_ceil_ps (__m128 a) { return intel_mm_svml_ceil_ps(a); }
template <typename ...> __m256 _mm256_svml_ceil_ps (__m256 a) { return intel_mm256_svml_ceil_ps(a); }
template <typename ...> __m128d _mm_svml_floor_pd (__m128d a) { return intel_mm_svml_floor_pd(a); }
template <typename ...> __m256d _mm256_svml_floor_pd (__m256d a) { return intel_mm256_svml_floor_pd(a); }
template <typename ...> __m128 _mm_svml_floor_ps (__m128 a) { return intel_mm_svml_floor_ps(a); }
template <typename ...> __m256 _mm256_svml_floor_ps (__m256 a) { return intel_mm256_svml_floor_ps(a); }
template <typename ...> __m128d _mm_svml_round_pd (__m128d a) { return intel_mm_svml_round_pd(a); }
template <typename ...> __m256d _mm256_svml_round_pd (__m256d a) { return intel_mm256_svml_round_pd(a); }
template <typename ...> __m512d _mm512_mask_svml_round_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_svml_round_pd(src, k, a); }
template <typename ...> __m512d _mm512_svml_round_pd (__m512d a) { return intel_mm512_svml_round_pd(a); }
template <typename ...> __m128 _mm_svml_round_ps (__m128 a) { return intel_mm_svml_round_ps(a); }
template <typename ...> __m256 _mm256_svml_round_ps (__m256 a) { return intel_mm256_svml_round_ps(a); }
template <typename ...> __m128d _mm_svml_sqrt_pd (__m128d a) { return intel_mm_svml_sqrt_pd(a); }
template <typename ...> __m256d _mm256_svml_sqrt_pd (__m256d a) { return intel_mm256_svml_sqrt_pd(a); }
template <typename ...> __m128 _mm_svml_sqrt_ps (__m128 a) { return intel_mm_svml_sqrt_ps(a); }
template <typename ...> __m256 _mm256_svml_sqrt_ps (__m256 a) { return intel_mm256_svml_sqrt_ps(a); }
template <typename ...> __m128d _mm_tan_pd (__m128d a) { return intel_mm_tan_pd(a); }
template <typename ...> __m256d _mm256_tan_pd (__m256d a) { return intel_mm256_tan_pd(a); }
template <typename ...> __m512d _mm512_mask_tan_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_tan_pd(src, k, a); }
template <typename ...> __m512d _mm512_tan_pd (__m512d a) { return intel_mm512_tan_pd(a); }
template <typename ...> __m128 _mm_tan_ps (__m128 a) { return intel_mm_tan_ps(a); }
template <typename ...> __m256 _mm256_tan_ps (__m256 a) { return intel_mm256_tan_ps(a); }
template <typename ...> __m512 _mm512_mask_tan_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_tan_ps(src, k, a); }
template <typename ...> __m512 _mm512_tan_ps (__m512 a) { return intel_mm512_tan_ps(a); }
template <typename ...> __m128d _mm_tand_pd (__m128d a) { return intel_mm_tand_pd(a); }
template <typename ...> __m256d _mm256_tand_pd (__m256d a) { return intel_mm256_tand_pd(a); }
template <typename ...> __m512d _mm512_mask_tand_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_tand_pd(src, k, a); }
template <typename ...> __m512d _mm512_tand_pd (__m512d a) { return intel_mm512_tand_pd(a); }
template <typename ...> __m128 _mm_tand_ps (__m128 a) { return intel_mm_tand_ps(a); }
template <typename ...> __m256 _mm256_tand_ps (__m256 a) { return intel_mm256_tand_ps(a); }
template <typename ...> __m512 _mm512_mask_tand_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_tand_ps(src, k, a); }
template <typename ...> __m512 _mm512_tand_ps (__m512 a) { return intel_mm512_tand_ps(a); }
template <typename ...> __m128d _mm_tanh_pd (__m128d a) { return intel_mm_tanh_pd(a); }
template <typename ...> __m256d _mm256_tanh_pd (__m256d a) { return intel_mm256_tanh_pd(a); }
template <typename ...> __m512d _mm512_mask_tanh_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_tanh_pd(src, k, a); }
template <typename ...> __m512d _mm512_tanh_pd (__m512d a) { return intel_mm512_tanh_pd(a); }
template <typename ...> __m128 _mm_tanh_ps (__m128 a) { return intel_mm_tanh_ps(a); }
template <typename ...> __m256 _mm256_tanh_ps (__m256 a) { return intel_mm256_tanh_ps(a); }
template <typename ...> __m512 _mm512_mask_tanh_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_tanh_ps(src, k, a); }
template <typename ...> __m512 _mm512_tanh_ps (__m512 a) { return intel_mm512_tanh_ps(a); }
template <typename ...> __m128d _mm_trunc_pd (__m128d a) { return intel_mm_trunc_pd(a); }
template <typename ...> __m256d _mm256_trunc_pd (__m256d a) { return intel_mm256_trunc_pd(a); }
template <typename ...> __m512d _mm512_mask_trunc_pd (__m512d src, __mmask8 k, __m512d a) { return intel_mm512_mask_trunc_pd(src, k, a); }
template <typename ...> __m512d _mm512_trunc_pd (__m512d a) { return intel_mm512_trunc_pd(a); }
template <typename ...> __m128 _mm_trunc_ps (__m128 a) { return intel_mm_trunc_ps(a); }
template <typename ...> __m256 _mm256_trunc_ps (__m256 a) { return intel_mm256_trunc_ps(a); }
template <typename ...> __m512 _mm512_mask_trunc_ps (__m512 src, __mmask16 k, __m512 a) { return intel_mm512_mask_trunc_ps(src, k, a); }
template <typename ...> __m512 _mm512_trunc_ps (__m512 a) { return intel_mm512_trunc_ps(a); }
template <typename ...> __m128i _mm_udiv_epi32 (__m128i a, __m128i b) { return intel_mm_udiv_epi32(a, b); }
template <typename ...> __m256i _mm256_udiv_epi32 (__m256i a, __m256i b) { return intel_mm256_udiv_epi32(a, b); }
template <typename ...> __m128i _mm_udivrem_epi32 (__m128i * mem_addr, __m128i a, __m128i b) { return intel_mm_udivrem_epi32(mem_addr, a, b); }
template <typename ...> __m256i _mm256_udivrem_epi32 (__m256i * mem_addr, __m256i a, __m256i b) { return intel_mm256_udivrem_epi32(mem_addr, a, b); }
template <typename ...> __m128i _mm_urem_epi32 (__m128i a, __m128i b) { return intel_mm_urem_epi32(a, b); }
template <typename ...> __m256i _mm256_urem_epi32 (__m256i a, __m256i b) { return intel_mm256_urem_epi32(a, b); }


template __m128d _mm_acos_pd <> (__m128d a);
template __m256d _mm256_acos_pd <> (__m256d a);
template __m512d _mm512_acos_pd <> (__m512d a);
template __m512d _mm512_mask_acos_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_acos_ps <> (__m128 a);
template __m256 _mm256_acos_ps <> (__m256 a);
template __m512 _mm512_acos_ps <> (__m512 a);
template __m512 _mm512_mask_acos_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_acosh_pd <> (__m128d a);
template __m256d _mm256_acosh_pd <> (__m256d a);
template __m512d _mm512_acosh_pd <> (__m512d a);
template __m512d _mm512_mask_acosh_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_acosh_ps <> (__m128 a);
template __m256 _mm256_acosh_ps <> (__m256 a);
template __m512 _mm512_acosh_ps <> (__m512 a);
template __m512 _mm512_mask_acosh_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_asin_pd <> (__m128d a);
template __m256d _mm256_asin_pd <> (__m256d a);
template __m512d _mm512_asin_pd <> (__m512d a);
template __m512d _mm512_mask_asin_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_asin_ps <> (__m128 a);
template __m256 _mm256_asin_ps <> (__m256 a);
template __m512 _mm512_asin_ps <> (__m512 a);
template __m512 _mm512_mask_asin_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_asinh_pd <> (__m128d a);
template __m256d _mm256_asinh_pd <> (__m256d a);
template __m512d _mm512_asinh_pd <> (__m512d a);
template __m512d _mm512_mask_asinh_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_asinh_ps <> (__m128 a);
template __m256 _mm256_asinh_ps <> (__m256 a);
template __m512 _mm512_asinh_ps <> (__m512 a);
template __m512 _mm512_mask_asinh_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_atan_pd <> (__m128d a);
template __m256d _mm256_atan_pd <> (__m256d a);
template __m512d _mm512_atan_pd <> (__m512d a);
template __m512d _mm512_mask_atan_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_atan_ps <> (__m128 a);
template __m256 _mm256_atan_ps <> (__m256 a);
template __m512 _mm512_atan_ps <> (__m512 a);
template __m512 _mm512_mask_atan_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_atan2_pd <> (__m128d a, __m128d b);
template __m256d _mm256_atan2_pd <> (__m256d a, __m256d b);
template __m512d _mm512_atan2_pd <> (__m512d a, __m512d b);
template __m512d _mm512_mask_atan2_pd <> (__m512d src, __mmask8 k, __m512d a, __m512d b);
template __m128 _mm_atan2_ps <> (__m128 a, __m128 b);
template __m256 _mm256_atan2_ps <> (__m256 a, __m256 b);
template __m512 _mm512_atan2_ps <> (__m512 a, __m512 b);
template __m512 _mm512_mask_atan2_ps <> (__m512 src, __mmask16 k, __m512 a, __m512 b);
template __m128d _mm_atanh_pd <> (__m128d a);
template __m256d _mm256_atanh_pd <> (__m256d a);
template __m512d _mm512_atanh_pd <> (__m512d a);
template __m512d _mm512_mask_atanh_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_atanh_ps <> (__m128 a);
template __m256 _mm256_atanh_ps <> (__m256 a);
template __m512 _mm512_atanh_ps <> (__m512 a);
template __m512 _mm512_mask_atanh_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_cbrt_pd <> (__m128d a);
template __m256d _mm256_cbrt_pd <> (__m256d a);
template __m512d _mm512_cbrt_pd <> (__m512d a);
template __m512d _mm512_mask_cbrt_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_cbrt_ps <> (__m128 a);
template __m256 _mm256_cbrt_ps <> (__m256 a);
template __m512 _mm512_cbrt_ps <> (__m512 a);
template __m512 _mm512_mask_cbrt_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_cdfnorm_pd <> (__m128d a);
template __m256d _mm256_cdfnorm_pd <> (__m256d a);
template __m512d _mm512_cdfnorm_pd <> (__m512d a);
template __m512d _mm512_mask_cdfnorm_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_cdfnorm_ps <> (__m128 a);
template __m256 _mm256_cdfnorm_ps <> (__m256 a);
template __m512 _mm512_cdfnorm_ps <> (__m512 a);
template __m512 _mm512_mask_cdfnorm_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_cdfnorminv_pd <> (__m128d a);
template __m256d _mm256_cdfnorminv_pd <> (__m256d a);
template __m512d _mm512_cdfnorminv_pd <> (__m512d a);
template __m512d _mm512_mask_cdfnorminv_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_cdfnorminv_ps <> (__m128 a);
template __m256 _mm256_cdfnorminv_ps <> (__m256 a);
template __m512 _mm512_cdfnorminv_ps <> (__m512 a);
template __m512 _mm512_mask_cdfnorminv_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512d _mm512_ceil_pd <> (__m512d a);
template __m512d _mm512_mask_ceil_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512 _mm512_ceil_ps <> (__m512 a);
template __m512 _mm512_mask_ceil_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128 _mm_cexp_ps <> (__m128 a);
template __m256 _mm256_cexp_ps <> (__m256 a);
template __m128 _mm_clog_ps <> (__m128 a);
template __m256 _mm256_clog_ps <> (__m256 a);
template __m128d _mm_cos_pd <> (__m128d a);
template __m256d _mm256_cos_pd <> (__m256d a);
template __m512d _mm512_cos_pd <> (__m512d a);
template __m512d _mm512_mask_cos_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_cos_ps <> (__m128 a);
template __m256 _mm256_cos_ps <> (__m256 a);
template __m512 _mm512_cos_ps <> (__m512 a);
template __m512 _mm512_mask_cos_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_cosd_pd <> (__m128d a);
template __m256d _mm256_cosd_pd <> (__m256d a);
template __m512d _mm512_cosd_pd <> (__m512d a);
template __m512d _mm512_mask_cosd_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_cosd_ps <> (__m128 a);
template __m256 _mm256_cosd_ps <> (__m256 a);
template __m512 _mm512_cosd_ps <> (__m512 a);
template __m512 _mm512_mask_cosd_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_cosh_pd <> (__m128d a);
template __m256d _mm256_cosh_pd <> (__m256d a);
template __m512d _mm512_cosh_pd <> (__m512d a);
template __m512d _mm512_mask_cosh_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_cosh_ps <> (__m128 a);
template __m256 _mm256_cosh_ps <> (__m256 a);
template __m512 _mm512_cosh_ps <> (__m512 a);
template __m512 _mm512_mask_cosh_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128 _mm_csqrt_ps <> (__m128 a);
template __m256 _mm256_csqrt_ps <> (__m256 a);
template __m128i _mm_div_epi16 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epi16 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epi16 <> (__m512i a, __m512i b);
template __m128i _mm_div_epi32 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epi32 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epi32 <> (__m512i a, __m512i b);
template __m512i _mm512_mask_div_epi32 <> (__m512i src, __mmask16 k, __m512i a, __m512i b);
template __m128i _mm_div_epi64 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epi64 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epi64 <> (__m512i a, __m512i b);
template __m128i _mm_div_epi8 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epi8 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epi8 <> (__m512i a, __m512i b);
template __m128i _mm_div_epu16 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epu16 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epu16 <> (__m512i a, __m512i b);
template __m128i _mm_div_epu32 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epu32 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epu32 <> (__m512i a, __m512i b);
template __m512i _mm512_mask_div_epu32 <> (__m512i src, __mmask16 k, __m512i a, __m512i b);
template __m128i _mm_div_epu64 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epu64 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epu64 <> (__m512i a, __m512i b);
template __m128i _mm_div_epu8 <> (__m128i a, __m128i b);
template __m256i _mm256_div_epu8 <> (__m256i a, __m256i b);
template __m512i _mm512_div_epu8 <> (__m512i a, __m512i b);
template __m128d _mm_erf_pd <> (__m128d a);
template __m256d _mm256_erf_pd <> (__m256d a);
template __m512d _mm512_erf_pd <> (__m512d a);
template __m512d _mm512_mask_erf_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_erf_ps <> (__m128 a);
template __m256 _mm256_erf_ps <> (__m256 a);
template __m512 _mm512_erf_ps <> (__m512 a);
template __m512 _mm512_mask_erf_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_erfc_pd <> (__m128d a);
template __m256d _mm256_erfc_pd <> (__m256d a);
template __m512d _mm512_erfc_pd <> (__m512d a);
template __m512d _mm512_mask_erfc_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_erfc_ps <> (__m128 a);
template __m256 _mm256_erfc_ps <> (__m256 a);
template __m512 _mm512_erfc_ps <> (__m512 a);
template __m512 _mm512_mask_erfc_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_erfcinv_pd <> (__m128d a);
template __m256d _mm256_erfcinv_pd <> (__m256d a);
template __m512d _mm512_erfcinv_pd <> (__m512d a);
template __m512d _mm512_mask_erfcinv_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_erfcinv_ps <> (__m128 a);
template __m256 _mm256_erfcinv_ps <> (__m256 a);
template __m512 _mm512_erfcinv_ps <> (__m512 a);
template __m512 _mm512_mask_erfcinv_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_erfinv_pd <> (__m128d a);
template __m256d _mm256_erfinv_pd <> (__m256d a);
template __m512d _mm512_erfinv_pd <> (__m512d a);
template __m512d _mm512_mask_erfinv_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_erfinv_ps <> (__m128 a);
template __m256 _mm256_erfinv_ps <> (__m256 a);
template __m512 _mm512_erfinv_ps <> (__m512 a);
template __m512 _mm512_mask_erfinv_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_exp_pd <> (__m128d a);
template __m256d _mm256_exp_pd <> (__m256d a);
template __m512d _mm512_exp_pd <> (__m512d a);
template __m512d _mm512_mask_exp_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_exp_ps <> (__m128 a);
template __m256 _mm256_exp_ps <> (__m256 a);
template __m512 _mm512_exp_ps <> (__m512 a);
template __m512 _mm512_mask_exp_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_exp10_pd <> (__m128d a);
template __m256d _mm256_exp10_pd <> (__m256d a);
template __m512d _mm512_exp10_pd <> (__m512d a);
template __m512d _mm512_mask_exp10_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_exp10_ps <> (__m128 a);
template __m256 _mm256_exp10_ps <> (__m256 a);
template __m512 _mm512_exp10_ps <> (__m512 a);
template __m512 _mm512_mask_exp10_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_exp2_pd <> (__m128d a);
template __m256d _mm256_exp2_pd <> (__m256d a);
template __m512d _mm512_exp2_pd <> (__m512d a);
template __m512d _mm512_mask_exp2_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_exp2_ps <> (__m128 a);
template __m256 _mm256_exp2_ps <> (__m256 a);
template __m512 _mm512_exp2_ps <> (__m512 a);
template __m512 _mm512_mask_exp2_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_expm1_pd <> (__m128d a);
template __m256d _mm256_expm1_pd <> (__m256d a);
template __m512d _mm512_expm1_pd <> (__m512d a);
template __m512d _mm512_mask_expm1_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_expm1_ps <> (__m128 a);
template __m256 _mm256_expm1_ps <> (__m256 a);
template __m512 _mm512_expm1_ps <> (__m512 a);
template __m512 _mm512_mask_expm1_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512d _mm512_floor_pd <> (__m512d a);
template __m512d _mm512_mask_floor_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512 _mm512_floor_ps <> (__m512 a);
template __m512 _mm512_mask_floor_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_hypot_pd <> (__m128d a, __m128d b);
template __m256d _mm256_hypot_pd <> (__m256d a, __m256d b);
template __m512d _mm512_hypot_pd <> (__m512d a, __m512d b);
template __m512d _mm512_mask_hypot_pd <> (__m512d src, __mmask8 k, __m512d a, __m512d b);
template __m128 _mm_hypot_ps <> (__m128 a, __m128 b);
template __m256 _mm256_hypot_ps <> (__m256 a, __m256 b);
template __m512 _mm512_hypot_ps <> (__m512 a, __m512 b);
template __m512 _mm512_mask_hypot_ps <> (__m512 src, __mmask16 k, __m512 a, __m512 b);
template __m128i _mm_idiv_epi32 <> (__m128i a, __m128i b);
template __m256i _mm256_idiv_epi32 <> (__m256i a, __m256i b);
template __m128i _mm_idivrem_epi32 <> (__m128i * mem_addr, __m128i a, __m128i b);
template __m256i _mm256_idivrem_epi32 <> (__m256i * mem_addr, __m256i a, __m256i b);
template __m128d _mm_invcbrt_pd <> (__m128d a);
template __m256d _mm256_invcbrt_pd <> (__m256d a);
template __m128 _mm_invcbrt_ps <> (__m128 a);
template __m256 _mm256_invcbrt_ps <> (__m256 a);
template __m128d _mm_invsqrt_pd <> (__m128d a);
template __m256d _mm256_invsqrt_pd <> (__m256d a);
template __m512d _mm512_invsqrt_pd <> (__m512d a);
template __m512d _mm512_mask_invsqrt_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_invsqrt_ps <> (__m128 a);
template __m256 _mm256_invsqrt_ps <> (__m256 a);
template __m512 _mm512_invsqrt_ps <> (__m512 a);
template __m512 _mm512_mask_invsqrt_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128i _mm_irem_epi32 <> (__m128i a, __m128i b);
template __m256i _mm256_irem_epi32 <> (__m256i a, __m256i b);
template __m128d _mm_log_pd <> (__m128d a);
template __m256d _mm256_log_pd <> (__m256d a);
template __m512d _mm512_log_pd <> (__m512d a);
template __m512d _mm512_mask_log_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_log_ps <> (__m128 a);
template __m256 _mm256_log_ps <> (__m256 a);
template __m512 _mm512_log_ps <> (__m512 a);
template __m512 _mm512_mask_log_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_log10_pd <> (__m128d a);
template __m256d _mm256_log10_pd <> (__m256d a);
template __m512d _mm512_log10_pd <> (__m512d a);
template __m512d _mm512_mask_log10_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_log10_ps <> (__m128 a);
template __m256 _mm256_log10_ps <> (__m256 a);
template __m512 _mm512_log10_ps <> (__m512 a);
template __m512 _mm512_mask_log10_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_log1p_pd <> (__m128d a);
template __m256d _mm256_log1p_pd <> (__m256d a);
template __m512d _mm512_log1p_pd <> (__m512d a);
template __m512d _mm512_mask_log1p_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_log1p_ps <> (__m128 a);
template __m256 _mm256_log1p_ps <> (__m256 a);
template __m512 _mm512_log1p_ps <> (__m512 a);
template __m512 _mm512_mask_log1p_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_log2_pd <> (__m128d a);
template __m256d _mm256_log2_pd <> (__m256d a);
template __m512d _mm512_log2_pd <> (__m512d a);
template __m512d _mm512_mask_log2_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_log2_ps <> (__m128 a);
template __m256 _mm256_log2_ps <> (__m256 a);
template __m512 _mm512_log2_ps <> (__m512 a);
template __m512 _mm512_mask_log2_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m128d _mm_logb_pd <> (__m128d a);
template __m256d _mm256_logb_pd <> (__m256d a);
template __m512d _mm512_logb_pd <> (__m512d a);
template __m512d _mm512_mask_logb_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m128 _mm_logb_ps <> (__m128 a);
template __m256 _mm256_logb_ps <> (__m256 a);
template __m512 _mm512_logb_ps <> (__m512 a);
template __m512 _mm512_mask_logb_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512d _mm512_mask_nearbyint_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_nearbyint_pd <> (__m512d a);
template __m512 _mm512_mask_nearbyint_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_nearbyint_ps <> (__m512 a);
template __m128d _mm_pow_pd <> (__m128d a, __m128d b);
template __m256d _mm256_pow_pd <> (__m256d a, __m256d b);
template __m512d _mm512_mask_pow_pd <> (__m512d src, __mmask8 k, __m512d a, __m512d b);
template __m512d _mm512_pow_pd <> (__m512d a, __m512d b);
template __m128 _mm_pow_ps <> (__m128 a, __m128 b);
template __m256 _mm256_pow_ps <> (__m256 a, __m256 b);
template __m512 _mm512_mask_pow_ps <> (__m512 src, __mmask16 k, __m512 a, __m512 b);
template __m512 _mm512_pow_ps <> (__m512 a, __m512 b);
template __m512d _mm512_mask_recip_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_recip_pd <> (__m512d a);
template __m512 _mm512_mask_recip_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_recip_ps <> (__m512 a);
template __m128i _mm_rem_epi16 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epi16 <> (__m256i a, __m256i b);
template __m512i _mm512_rem_epi16 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epi32 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epi32 <> (__m256i a, __m256i b);
template __m512i _mm512_mask_rem_epi32 <> (__m512i src, __mmask16 k, __m512i a, __m512i b);
template __m512i _mm512_rem_epi32 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epi64 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epi64 <> (__m256i a, __m256i b);
template __m512i _mm512_rem_epi64 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epi8 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epi8 <> (__m256i a, __m256i b);
template __m512i _mm512_rem_epi8 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epu16 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epu16 <> (__m256i a, __m256i b);
template __m512i _mm512_rem_epu16 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epu32 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epu32 <> (__m256i a, __m256i b);
template __m512i _mm512_mask_rem_epu32 <> (__m512i src, __mmask16 k, __m512i a, __m512i b);
template __m512i _mm512_rem_epu32 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epu64 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epu64 <> (__m256i a, __m256i b);
template __m512i _mm512_rem_epu64 <> (__m512i a, __m512i b);
template __m128i _mm_rem_epu8 <> (__m128i a, __m128i b);
template __m256i _mm256_rem_epu8 <> (__m256i a, __m256i b);
template __m512i _mm512_rem_epu8 <> (__m512i a, __m512i b);
template __m512d _mm512_mask_rint_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_rint_pd <> (__m512d a);
template __m512 _mm512_mask_rint_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_rint_ps <> (__m512 a);
template __m128d _mm_sin_pd <> (__m128d a);
template __m256d _mm256_sin_pd <> (__m256d a);
template __m512d _mm512_mask_sin_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_sin_pd <> (__m512d a);
template __m128 _mm_sin_ps <> (__m128 a);
template __m256 _mm256_sin_ps <> (__m256 a);
template __m512 _mm512_mask_sin_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_sin_ps <> (__m512 a);
template __m128d _mm_sincos_pd <> (__m128d * mem_addr, __m128d a);
template __m256d _mm256_sincos_pd <> (__m256d * mem_addr, __m256d a);
template __m512d _mm512_mask_sincos_pd <> (__m512d * mem_addr, __m512d sin_src, __m512d cos_src, __mmask8 k, __m512d a);
template __m512d _mm512_sincos_pd <> (__m512d * mem_addr, __m512d a);
template __m128 _mm_sincos_ps <> (__m128 * mem_addr, __m128 a);
template __m256 _mm256_sincos_ps <> (__m256 * mem_addr, __m256 a);
template __m512 _mm512_mask_sincos_ps <> (__m512 * mem_addr, __m512 sin_src, __m512 cos_src, __mmask16 k, __m512 a);
template __m512 _mm512_sincos_ps <> (__m512 * mem_addr, __m512 a);
template __m128d _mm_sind_pd <> (__m128d a);
template __m256d _mm256_sind_pd <> (__m256d a);
template __m512d _mm512_mask_sind_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_sind_pd <> (__m512d a);
template __m128 _mm_sind_ps <> (__m128 a);
template __m256 _mm256_sind_ps <> (__m256 a);
template __m512 _mm512_mask_sind_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_sind_ps <> (__m512 a);
template __m128d _mm_sinh_pd <> (__m128d a);
template __m256d _mm256_sinh_pd <> (__m256d a);
template __m512d _mm512_mask_sinh_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_sinh_pd <> (__m512d a);
template __m128 _mm_sinh_ps <> (__m128 a);
template __m256 _mm256_sinh_ps <> (__m256 a);
template __m512 _mm512_mask_sinh_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_sinh_ps <> (__m512 a);
template __m128d _mm_svml_ceil_pd <> (__m128d a);
template __m256d _mm256_svml_ceil_pd <> (__m256d a);
template __m128 _mm_svml_ceil_ps <> (__m128 a);
template __m256 _mm256_svml_ceil_ps <> (__m256 a);
template __m128d _mm_svml_floor_pd <> (__m128d a);
template __m256d _mm256_svml_floor_pd <> (__m256d a);
template __m128 _mm_svml_floor_ps <> (__m128 a);
template __m256 _mm256_svml_floor_ps <> (__m256 a);
template __m128d _mm_svml_round_pd <> (__m128d a);
template __m256d _mm256_svml_round_pd <> (__m256d a);
template __m512d _mm512_mask_svml_round_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_svml_round_pd <> (__m512d a);
template __m128 _mm_svml_round_ps <> (__m128 a);
template __m256 _mm256_svml_round_ps <> (__m256 a);
template __m128d _mm_svml_sqrt_pd <> (__m128d a);
template __m256d _mm256_svml_sqrt_pd <> (__m256d a);
template __m128 _mm_svml_sqrt_ps <> (__m128 a);
template __m256 _mm256_svml_sqrt_ps <> (__m256 a);
template __m128d _mm_tan_pd <> (__m128d a);
template __m256d _mm256_tan_pd <> (__m256d a);
template __m512d _mm512_mask_tan_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_tan_pd <> (__m512d a);
template __m128 _mm_tan_ps <> (__m128 a);
template __m256 _mm256_tan_ps <> (__m256 a);
template __m512 _mm512_mask_tan_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_tan_ps <> (__m512 a);
template __m128d _mm_tand_pd <> (__m128d a);
template __m256d _mm256_tand_pd <> (__m256d a);
template __m512d _mm512_mask_tand_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_tand_pd <> (__m512d a);
template __m128 _mm_tand_ps <> (__m128 a);
template __m256 _mm256_tand_ps <> (__m256 a);
template __m512 _mm512_mask_tand_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_tand_ps <> (__m512 a);
template __m128d _mm_tanh_pd <> (__m128d a);
template __m256d _mm256_tanh_pd <> (__m256d a);
template __m512d _mm512_mask_tanh_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_tanh_pd <> (__m512d a);
template __m128 _mm_tanh_ps <> (__m128 a);
template __m256 _mm256_tanh_ps <> (__m256 a);
template __m512 _mm512_mask_tanh_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_tanh_ps <> (__m512 a);
template __m128d _mm_trunc_pd <> (__m128d a);
template __m256d _mm256_trunc_pd <> (__m256d a);
template __m512d _mm512_mask_trunc_pd <> (__m512d src, __mmask8 k, __m512d a);
template __m512d _mm512_trunc_pd <> (__m512d a);
template __m128 _mm_trunc_ps <> (__m128 a);
template __m256 _mm256_trunc_ps <> (__m256 a);
template __m512 _mm512_mask_trunc_ps <> (__m512 src, __mmask16 k, __m512 a);
template __m512 _mm512_trunc_ps <> (__m512 a);
template __m128i _mm_udiv_epi32 <> (__m128i a, __m128i b);
template __m256i _mm256_udiv_epi32 <> (__m256i a, __m256i b);
template __m128i _mm_udivrem_epi32 <> (__m128i * mem_addr, __m128i a, __m128i b);
template __m256i _mm256_udivrem_epi32 <> (__m256i * mem_addr, __m256i a, __m256i b);
template __m128i _mm_urem_epi32 <> (__m128i a, __m128i b);
template __m256i _mm256_urem_epi32 <> (__m256i a, __m256i b);