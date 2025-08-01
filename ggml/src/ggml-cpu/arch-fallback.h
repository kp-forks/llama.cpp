#pragma once

// Rename `_generic` functions if no native implementation is available.
// This effectively selects the generic implementation.

#if defined(GGML_CPU_GENERIC)
// quants.c
#define quantize_row_q8_0_generic quantize_row_q8_0
#define quantize_row_q8_1_generic quantize_row_q8_1
#define quantize_row_q8_K_generic quantize_row_q8_K
#define ggml_vec_dot_q4_0_q8_0_generic ggml_vec_dot_q4_0_q8_0
#define ggml_vec_dot_q4_1_q8_1_generic ggml_vec_dot_q4_1_q8_1
#define ggml_vec_dot_q5_0_q8_0_generic ggml_vec_dot_q5_0_q8_0
#define ggml_vec_dot_q5_1_q8_1_generic ggml_vec_dot_q5_1_q8_1
#define ggml_vec_dot_q8_0_q8_0_generic ggml_vec_dot_q8_0_q8_0
#define ggml_vec_dot_tq1_0_q8_K_generic ggml_vec_dot_tq1_0_q8_K
#define ggml_vec_dot_tq2_0_q8_K_generic ggml_vec_dot_tq2_0_q8_K
#define ggml_vec_dot_q2_K_q8_K_generic ggml_vec_dot_q2_K_q8_K
#define ggml_vec_dot_q3_K_q8_K_generic ggml_vec_dot_q3_K_q8_K
#define ggml_vec_dot_q4_K_q8_K_generic ggml_vec_dot_q4_K_q8_K
#define ggml_vec_dot_q5_K_q8_K_generic ggml_vec_dot_q5_K_q8_K
#define ggml_vec_dot_q6_K_q8_K_generic ggml_vec_dot_q6_K_q8_K
#define ggml_vec_dot_iq2_xxs_q8_K_generic ggml_vec_dot_iq2_xxs_q8_K
#define ggml_vec_dot_iq2_xs_q8_K_generic ggml_vec_dot_iq2_xs_q8_K
#define ggml_vec_dot_iq2_s_q8_K_generic ggml_vec_dot_iq2_s_q8_K
#define ggml_vec_dot_iq3_xxs_q8_K_generic ggml_vec_dot_iq3_xxs_q8_K
#define ggml_vec_dot_iq3_s_q8_K_generic ggml_vec_dot_iq3_s_q8_K
#define ggml_vec_dot_iq1_s_q8_K_generic ggml_vec_dot_iq1_s_q8_K
#define ggml_vec_dot_iq1_m_q8_K_generic ggml_vec_dot_iq1_m_q8_K
#define ggml_vec_dot_iq4_nl_q8_0_generic ggml_vec_dot_iq4_nl_q8_0
#define ggml_vec_dot_iq4_xs_q8_K_generic ggml_vec_dot_iq4_xs_q8_K
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_quantize_mat_q8_0_4x8_generic ggml_quantize_mat_q8_0_4x8
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_q4_0_8x8_q8_0_generic ggml_gemv_q4_0_8x8_q8_0
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_q4_0_8x8_q8_0_generic ggml_gemm_q4_0_8x8_q8_0
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#elif defined(__aarch64__) || defined(__arm__) || defined(_M_ARM) || defined(_M_ARM64)
// repack.cpp
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#elif defined(__x86_64__) || defined(__i386__) || defined(_M_IX86) || defined(_M_X64)
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#elif defined(__POWERPC__) || defined(__powerpc__)
// ref: https://github.com/ggml-org/llama.cpp/pull/14146#issuecomment-2972561679
// quants.c
#define quantize_row_q8_K_generic quantize_row_q8_K
#define ggml_vec_dot_tq1_0_q8_K_generic ggml_vec_dot_tq1_0_q8_K
#define ggml_vec_dot_tq2_0_q8_K_generic ggml_vec_dot_tq2_0_q8_K
#define ggml_vec_dot_iq1_m_q8_K_generic ggml_vec_dot_iq1_m_q8_K
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_quantize_mat_q8_0_4x8_generic ggml_quantize_mat_q8_0_4x8
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_q4_0_8x8_q8_0_generic ggml_gemv_q4_0_8x8_q8_0
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_q4_0_8x8_q8_0_generic ggml_gemm_q4_0_8x8_q8_0
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#elif defined(__loongarch64)
// quants.c
#define quantize_row_q8_K_generic quantize_row_q8_K
#define ggml_vec_dot_tq1_0_q8_K_generic ggml_vec_dot_tq1_0_q8_K
#define ggml_vec_dot_tq2_0_q8_K_generic ggml_vec_dot_tq2_0_q8_K
#define ggml_vec_dot_iq1_m_q8_K_generic ggml_vec_dot_iq1_m_q8_K
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_quantize_mat_q8_0_4x8_generic ggml_quantize_mat_q8_0_4x8
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_q4_0_8x8_q8_0_generic ggml_gemv_q4_0_8x8_q8_0
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_q4_0_8x8_q8_0_generic ggml_gemm_q4_0_8x8_q8_0
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#elif defined(__riscv)
// quants.c
#define quantize_row_q8_K_generic quantize_row_q8_K
#define ggml_vec_dot_tq1_0_q8_K_generic ggml_vec_dot_tq1_0_q8_K
#define ggml_vec_dot_tq2_0_q8_K_generic ggml_vec_dot_tq2_0_q8_K
#define ggml_vec_dot_iq2_xxs_q8_K_generic ggml_vec_dot_iq2_xxs_q8_K
#define ggml_vec_dot_iq2_xs_q8_K_generic ggml_vec_dot_iq2_xs_q8_K
#define ggml_vec_dot_iq2_s_q8_K_generic ggml_vec_dot_iq2_s_q8_K
#define ggml_vec_dot_iq3_xxs_q8_K_generic ggml_vec_dot_iq3_xxs_q8_K
#define ggml_vec_dot_iq3_s_q8_K_generic ggml_vec_dot_iq3_s_q8_K
#define ggml_vec_dot_iq1_s_q8_K_generic ggml_vec_dot_iq1_s_q8_K
#define ggml_vec_dot_iq1_m_q8_K_generic ggml_vec_dot_iq1_m_q8_K
#define ggml_vec_dot_iq4_nl_q8_0_generic ggml_vec_dot_iq4_nl_q8_0
#define ggml_vec_dot_iq4_xs_q8_K_generic ggml_vec_dot_iq4_xs_q8_K
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_quantize_mat_q8_0_4x8_generic ggml_quantize_mat_q8_0_4x8
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#elif defined(__s390x__)
// quants.c
#define quantize_row_q8_K_generic quantize_row_q8_K
#define ggml_vec_dot_q5_0_q8_0_generic ggml_vec_dot_q5_0_q8_0
#define ggml_vec_dot_q5_1_q8_1_generic ggml_vec_dot_q5_1_q8_1
#define ggml_vec_dot_tq1_0_q8_K_generic ggml_vec_dot_tq1_0_q8_K
#define ggml_vec_dot_tq2_0_q8_K_generic ggml_vec_dot_tq2_0_q8_K
#define ggml_vec_dot_q2_K_q8_K_generic ggml_vec_dot_q2_K_q8_K
#define ggml_vec_dot_iq2_xxs_q8_K_generic ggml_vec_dot_iq2_xxs_q8_K
#define ggml_vec_dot_iq2_xs_q8_K_generic ggml_vec_dot_iq2_xs_q8_K
#define ggml_vec_dot_iq2_s_q8_K_generic ggml_vec_dot_iq2_s_q8_K
#define ggml_vec_dot_iq3_xxs_q8_K_generic ggml_vec_dot_iq3_xxs_q8_K
#define ggml_vec_dot_iq3_s_q8_K_generic ggml_vec_dot_iq3_s_q8_K
#define ggml_vec_dot_iq1_s_q8_K_generic ggml_vec_dot_iq1_s_q8_K
#define ggml_vec_dot_iq1_m_q8_K_generic ggml_vec_dot_iq1_m_q8_K
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_quantize_mat_q8_0_4x8_generic ggml_quantize_mat_q8_0_4x8
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_q4_0_8x8_q8_0_generic ggml_gemv_q4_0_8x8_q8_0
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_q4_0_8x8_q8_0_generic ggml_gemm_q4_0_8x8_q8_0
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#elif defined(__wasm__)
// quants.c
#define ggml_vec_dot_q4_1_q8_1_generic ggml_vec_dot_q4_1_q8_1
#define ggml_vec_dot_tq1_0_q8_K_generic ggml_vec_dot_tq1_0_q8_K
#define ggml_vec_dot_tq2_0_q8_K_generic ggml_vec_dot_tq2_0_q8_K
#define ggml_vec_dot_iq2_xxs_q8_K_generic ggml_vec_dot_iq2_xxs_q8_K
#define ggml_vec_dot_iq2_xs_q8_K_generic ggml_vec_dot_iq2_xs_q8_K
#define ggml_vec_dot_iq2_s_q8_K_generic ggml_vec_dot_iq2_s_q8_K
#define ggml_vec_dot_iq3_xxs_q8_K_generic ggml_vec_dot_iq3_xxs_q8_K
#define ggml_vec_dot_iq3_s_q8_K_generic ggml_vec_dot_iq3_s_q8_K
#define ggml_vec_dot_iq1_s_q8_K_generic ggml_vec_dot_iq1_s_q8_K
#define ggml_vec_dot_iq1_m_q8_K_generic ggml_vec_dot_iq1_m_q8_K
#define ggml_vec_dot_iq4_nl_q8_0_generic ggml_vec_dot_iq4_nl_q8_0
#define ggml_vec_dot_iq4_xs_q8_K_generic ggml_vec_dot_iq4_xs_q8_K
// repack.cpp
#define ggml_quantize_mat_q8_0_4x4_generic ggml_quantize_mat_q8_0_4x4
#define ggml_quantize_mat_q8_0_4x8_generic ggml_quantize_mat_q8_0_4x8
#define ggml_quantize_mat_q8_K_4x8_generic ggml_quantize_mat_q8_K_4x8
#define ggml_gemv_q4_0_4x4_q8_0_generic ggml_gemv_q4_0_4x4_q8_0
#define ggml_gemv_q4_0_4x8_q8_0_generic ggml_gemv_q4_0_4x8_q8_0
#define ggml_gemv_q4_0_8x8_q8_0_generic ggml_gemv_q4_0_8x8_q8_0
#define ggml_gemv_q4_K_8x8_q8_K_generic ggml_gemv_q4_K_8x8_q8_K
#define ggml_gemv_q2_K_8x8_q8_K_generic ggml_gemv_q2_K_8x8_q8_K
#define ggml_gemv_iq4_nl_4x4_q8_0_generic ggml_gemv_iq4_nl_4x4_q8_0
#define ggml_gemm_q4_0_4x4_q8_0_generic ggml_gemm_q4_0_4x4_q8_0
#define ggml_gemm_q4_0_4x8_q8_0_generic ggml_gemm_q4_0_4x8_q8_0
#define ggml_gemm_q4_0_8x8_q8_0_generic ggml_gemm_q4_0_8x8_q8_0
#define ggml_gemm_q4_K_8x8_q8_K_generic ggml_gemm_q4_K_8x8_q8_K
#define ggml_gemm_q2_K_8x8_q8_K_generic ggml_gemm_q2_K_8x8_q8_K
#define ggml_gemm_iq4_nl_4x4_q8_0_generic ggml_gemm_iq4_nl_4x4_q8_0
#endif
