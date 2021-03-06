﻿#pragma once    // Source encoding: UTF-8 with BOM (π is a lowercase Greek "pi").
/// \file
/// \brief `$apply` invokes the specified single-argument macro with each of the
/// specified arguments.

#include <cppx-core-language-meta-macro/macro-n_arguments.hpp>
#include <cppx-core-language-meta-macro/macro-invoke_macro.hpp>
#include <cppx-core-language-meta-macro/macro-joined.hpp>

#ifndef CPPX_NO_DOLLARS_PLEASE
#   define $apply       CPPX_APPLY          ///< \dollarname{apply}
#endif

/// \brief Invokes the specified single-argument macro with each of the specified arguments.
/// \hideinitializer
///
/// \param  m       The name of a single-argument macro.
/// \param  ...     One or more (max 63) arguments that `m` should be called with.
#define CPPX_APPLY( m, ... ) \
    CPPX_APPLY_EXPANSION_HELPER_( m, CPPX_N_ARGUMENTS( __VA_ARGS__ ), __VA_ARGS__ )

/// @cond DOXY_SHOW_IMPL_DETAILS
#define CPPX_APPLY_EXPANSION_HELPER_( m, n_args, ... ) \
    CPPX_INVOKE_MACRO( CPPX_JOINED( CPPX_APPLY_TO_, n_args ), ( m, __VA_ARGS__ ) )

// Not using variadic arguments in the following because Visual C++ 2017 is very unhappy
// with that (variadic arguments works with g++ 8.2.0).

#define CPPX_APPLY_TO_63( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_62( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62, a63 )

#define CPPX_APPLY_TO_62( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_61( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61, a62 )

#define CPPX_APPLY_TO_61( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_60( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60, a61 )

#define CPPX_APPLY_TO_60( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_59( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a60 )

#define CPPX_APPLY_TO_59( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_58( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59 )

#define CPPX_APPLY_TO_58( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_57( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57, a58 )

#define CPPX_APPLY_TO_57( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_56( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56, a57 )

#define CPPX_APPLY_TO_56( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_55( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55, a56 )

#define CPPX_APPLY_TO_55( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_54( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54, a55 )

#define CPPX_APPLY_TO_54( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_53( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53, a54 )

#define CPPX_APPLY_TO_53( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_52( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52, a53 )

#define CPPX_APPLY_TO_52( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_51( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51, a52 )

#define CPPX_APPLY_TO_51( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_50( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50, a51 )

#define CPPX_APPLY_TO_50( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_49( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a50 )

#define CPPX_APPLY_TO_49( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_48( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49 )

#define CPPX_APPLY_TO_48( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_47( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47, a48 )

#define CPPX_APPLY_TO_47( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_46( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46, a47 )

#define CPPX_APPLY_TO_46( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_45( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45, a46 )

#define CPPX_APPLY_TO_45( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_44( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44, a45 )

#define CPPX_APPLY_TO_44( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_43( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43, a44 )

#define CPPX_APPLY_TO_43( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_42( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42, a43 )

#define CPPX_APPLY_TO_42( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_41( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41, a42 )

#define CPPX_APPLY_TO_41( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_40( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40, a41 )

#define CPPX_APPLY_TO_40( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_39( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a40 )

#define CPPX_APPLY_TO_39( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_38( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39 )

#define CPPX_APPLY_TO_38( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_37( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37, a38 )

#define CPPX_APPLY_TO_37( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_36( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36, a37 )

#define CPPX_APPLY_TO_36( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_35( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35, a36 )

#define CPPX_APPLY_TO_35( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_34( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34, a35 )

#define CPPX_APPLY_TO_34( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_33( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33, a34 )

#define CPPX_APPLY_TO_33( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_32( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32, a33 )

#define CPPX_APPLY_TO_32( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_31( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31, a32 )

#define CPPX_APPLY_TO_31( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_30( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31 )

#define CPPX_APPLY_TO_30( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_29( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30 )

#define CPPX_APPLY_TO_29( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_28( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29 )

#define CPPX_APPLY_TO_28( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_27( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28 )

#define CPPX_APPLY_TO_27( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_26( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27 )

#define CPPX_APPLY_TO_26( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_25( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26 )

#define CPPX_APPLY_TO_25( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_24( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25 )

#define CPPX_APPLY_TO_24( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_23( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24 )

#define CPPX_APPLY_TO_23( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_22( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23 )

#define CPPX_APPLY_TO_22( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_21( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22 )

#define CPPX_APPLY_TO_21( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_20( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21 )

#define CPPX_APPLY_TO_20( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_19( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20 )

#define CPPX_APPLY_TO_19( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_18( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19 )

#define CPPX_APPLY_TO_18( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_17( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18 )

#define CPPX_APPLY_TO_17( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_16( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17 )

#define CPPX_APPLY_TO_16( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_15( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16 )

#define CPPX_APPLY_TO_15( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_14( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15 )

#define CPPX_APPLY_TO_14( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_13( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14 )

#define CPPX_APPLY_TO_13( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_12( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13 )

#define CPPX_APPLY_TO_12( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_11( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12 )

#define CPPX_APPLY_TO_11( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_10( m, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11 )

#define CPPX_APPLY_TO_10( m, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_9( m, a2, a3, a4, a5, a6, a7, a8, a9, a10 )

#define CPPX_APPLY_TO_9( m, a1, a2, a3, a4, a5, a6, a7, a8, a9 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_8( m, a2, a3, a4, a5, a6, a7, a8, a9 )

#define CPPX_APPLY_TO_8( m, a1, a2, a3, a4, a5, a6, a7, a8 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_7( m, a2, a3, a4, a5, a6, a7, a8 )

#define CPPX_APPLY_TO_7( m, a1, a2, a3, a4, a5, a6, a7 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_6( m, a2, a3, a4, a5, a6, a7 )

#define CPPX_APPLY_TO_6( m, a1, a2, a3, a4, a5, a6 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_5( m, a2, a3, a4, a5, a6 )

#define CPPX_APPLY_TO_5( m, a1, a2, a3, a4, a5 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_4( m, a2, a3, a4, a5 )

#define CPPX_APPLY_TO_4( m, a1, a2, a3, a4 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_3( m, a2, a3, a4 )

#define CPPX_APPLY_TO_3( m, a1, a2, a3 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_2( m, a2, a3 )

#define CPPX_APPLY_TO_2( m, a1, a2 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) ) \
    CPPX_APPLY_TO_1( m, a2 )

#define CPPX_APPLY_TO_1( m, a1 ) \
    CPPX_INVOKE_MACRO_B( m, ( a1 ) )
/// @endcond
