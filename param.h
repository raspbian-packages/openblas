/*****************************************************************************
Copyright (c) 2011, Lab of Parallel Software and Computational Science,ICSAS
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:

   1. Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in
      the documentation and/or other materials provided with the
      distribution.
   3. Neither the name of the ISCAS nor the names of its contributors may 
      be used to endorse or promote products derived from this software 
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE 
USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

**********************************************************************************/

/*********************************************************************/
/* Copyright 2009, 2010 The University of Texas at Austin.           */
/* All rights reserved.                                              */
/*                                                                   */
/* Redistribution and use in source and binary forms, with or        */
/* without modification, are permitted provided that the following   */
/* conditions are met:                                               */
/*                                                                   */
/*   1. Redistributions of source code must retain the above         */
/*      copyright notice, this list of conditions and the following  */
/*      disclaimer.                                                  */
/*                                                                   */
/*   2. Redistributions in binary form must reproduce the above      */
/*      copyright notice, this list of conditions and the following  */
/*      disclaimer in the documentation and/or other materials       */
/*      provided with the distribution.                              */
/*                                                                   */
/*    THIS  SOFTWARE IS PROVIDED  BY THE  UNIVERSITY OF  TEXAS AT    */
/*    AUSTIN  ``AS IS''  AND ANY  EXPRESS OR  IMPLIED WARRANTIES,    */
/*    INCLUDING, BUT  NOT LIMITED  TO, THE IMPLIED  WARRANTIES OF    */
/*    MERCHANTABILITY  AND FITNESS FOR  A PARTICULAR  PURPOSE ARE    */
/*    DISCLAIMED.  IN  NO EVENT SHALL THE UNIVERSITY  OF TEXAS AT    */
/*    AUSTIN OR CONTRIBUTORS BE  LIABLE FOR ANY DIRECT, INDIRECT,    */
/*    INCIDENTAL,  SPECIAL, EXEMPLARY,  OR  CONSEQUENTIAL DAMAGES    */
/*    (INCLUDING, BUT  NOT LIMITED TO,  PROCUREMENT OF SUBSTITUTE    */
/*    GOODS  OR  SERVICES; LOSS  OF  USE,  DATA,  OR PROFITS;  OR    */
/*    BUSINESS INTERRUPTION) HOWEVER CAUSED  AND ON ANY THEORY OF    */
/*    LIABILITY, WHETHER  IN CONTRACT, STRICT  LIABILITY, OR TORT    */
/*    (INCLUDING NEGLIGENCE OR OTHERWISE)  ARISING IN ANY WAY OUT    */
/*    OF  THE  USE OF  THIS  SOFTWARE,  EVEN  IF ADVISED  OF  THE    */
/*    POSSIBILITY OF SUCH DAMAGE.                                    */
/*                                                                   */
/* The views and conclusions contained in the software and           */
/* documentation are those of the authors and should not be          */
/* interpreted as representing official policies, either expressed   */
/* or implied, of The University of Texas at Austin.                 */
/*********************************************************************/

#ifndef PARAM_H
#define PARAM_H

#ifdef OPTERON

#define SNUMOPT		4
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A  64
#define GEMM_DEFAULT_OFFSET_B 256
#define GEMM_DEFAULT_ALIGN 0x01ffffUL

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1
#endif

#define SGEMM_DEFAULT_P sgemm_p
#define DGEMM_DEFAULT_P dgemm_p
#define QGEMM_DEFAULT_P qgemm_p
#define CGEMM_DEFAULT_P cgemm_p
#define ZGEMM_DEFAULT_P zgemm_p
#define XGEMM_DEFAULT_P xgemm_p

#define SGEMM_DEFAULT_R sgemm_r
#define DGEMM_DEFAULT_R dgemm_r
#define QGEMM_DEFAULT_R qgemm_r
#define CGEMM_DEFAULT_R cgemm_r
#define ZGEMM_DEFAULT_R zgemm_r
#define XGEMM_DEFAULT_R xgemm_r

#ifdef ALLOC_HUGETLB

#define SGEMM_DEFAULT_Q 248
#define DGEMM_DEFAULT_Q 248
#define QGEMM_DEFAULT_Q 248
#define CGEMM_DEFAULT_Q 248
#define ZGEMM_DEFAULT_Q 248
#define XGEMM_DEFAULT_Q 248

#else

#define SGEMM_DEFAULT_Q 240
#define DGEMM_DEFAULT_Q 240
#define QGEMM_DEFAULT_Q 240
#define CGEMM_DEFAULT_Q 240
#define ZGEMM_DEFAULT_Q 240
#define XGEMM_DEFAULT_Q 240

#endif


#define SYMV_P	16
#define HAVE_EXCLUSIVE_CACHE

#endif

#if defined(BARCELONA) || defined(SHANGHAI)

#define SNUMOPT		8
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A  64
#define GEMM_DEFAULT_OFFSET_B 832
#define GEMM_DEFAULT_ALIGN 0x0fffUL

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1
#endif

#if 0
#define SGEMM_DEFAULT_P 496
#define DGEMM_DEFAULT_P 248
#define QGEMM_DEFAULT_P 124
#define CGEMM_DEFAULT_P 248
#define ZGEMM_DEFAULT_P 124
#define XGEMM_DEFAULT_P  62

#define SGEMM_DEFAULT_Q 248
#define DGEMM_DEFAULT_Q 248
#define QGEMM_DEFAULT_Q 248
#define CGEMM_DEFAULT_Q 248
#define ZGEMM_DEFAULT_Q 248
#define XGEMM_DEFAULT_Q 248

#else

#define SGEMM_DEFAULT_P 448
#define DGEMM_DEFAULT_P 224
#define QGEMM_DEFAULT_P 112
#define CGEMM_DEFAULT_P 224
#define ZGEMM_DEFAULT_P 112 
#define XGEMM_DEFAULT_P  56

#define SGEMM_DEFAULT_Q 224
#define DGEMM_DEFAULT_Q 224
#define QGEMM_DEFAULT_Q 224
#define CGEMM_DEFAULT_Q 224
#define ZGEMM_DEFAULT_Q 224
#define XGEMM_DEFAULT_Q 224

#endif

#define SGEMM_DEFAULT_R sgemm_r
#define QGEMM_DEFAULT_R qgemm_r
#define DGEMM_DEFAULT_R dgemm_r
#define CGEMM_DEFAULT_R cgemm_r
#define ZGEMM_DEFAULT_R zgemm_r
#define XGEMM_DEFAULT_R xgemm_r

#define SYMV_P	16
#define HAVE_EXCLUSIVE_CACHE

#define GEMM_THREAD gemm_thread_mn

#endif

#ifdef ATHLON

#define SNUMOPT		4
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A   0
#define GEMM_DEFAULT_OFFSET_B 384
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_UNROLL_M 2
#define DGEMM_DEFAULT_UNROLL_M 1
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 1
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_R sgemm_r
#define DGEMM_DEFAULT_R dgemm_r
#define QGEMM_DEFAULT_R qgemm_r
#define CGEMM_DEFAULT_R cgemm_r
#define ZGEMM_DEFAULT_R zgemm_r
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_P 208
#define DGEMM_DEFAULT_P 104
#define QGEMM_DEFAULT_P  56
#define CGEMM_DEFAULT_P 104
#define ZGEMM_DEFAULT_P  56
#define XGEMM_DEFAULT_P  28

#define SGEMM_DEFAULT_Q 208
#define DGEMM_DEFAULT_Q 208
#define QGEMM_DEFAULT_Q 208
#define CGEMM_DEFAULT_Q 208
#define ZGEMM_DEFAULT_Q 208
#define XGEMM_DEFAULT_Q 208

#define SYMV_P	16
#define HAVE_EXCLUSIVE_CACHE
#endif

#ifdef VIAC3

#define SNUMOPT		2
#define DNUMOPT		1

#define GEMM_DEFAULT_OFFSET_A   0
#define GEMM_DEFAULT_OFFSET_B 256
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_UNROLL_M 2
#define DGEMM_DEFAULT_UNROLL_M 1
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 1
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_R sgemm_r
#define DGEMM_DEFAULT_R dgemm_r
#define QGEMM_DEFAULT_R qgemm_r
#define CGEMM_DEFAULT_R cgemm_r
#define ZGEMM_DEFAULT_R zgemm_r
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_P 128
#define DGEMM_DEFAULT_P 128
#define QGEMM_DEFAULT_P 128
#define CGEMM_DEFAULT_P 128
#define ZGEMM_DEFAULT_P 128
#define XGEMM_DEFAULT_P 128

#define SGEMM_DEFAULT_Q 512
#define DGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_Q 128
#define XGEMM_DEFAULT_Q 128

#define SYMV_P	16
#endif

#ifdef NANO

#define SNUMOPT		4
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A  64
#define GEMM_DEFAULT_OFFSET_B 256
#define GEMM_DEFAULT_ALIGN 0x01ffffUL

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1
#else
#define SGEMM_DEFAULT_UNROLL_N 8
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 4
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1
#endif

#define SGEMM_DEFAULT_P 288
#define DGEMM_DEFAULT_P 288
#define QGEMM_DEFAULT_P 288
#define CGEMM_DEFAULT_P 288
#define ZGEMM_DEFAULT_P 288
#define XGEMM_DEFAULT_P 288

#define SGEMM_DEFAULT_R sgemm_r
#define DGEMM_DEFAULT_R dgemm_r
#define QGEMM_DEFAULT_R qgemm_r
#define CGEMM_DEFAULT_R cgemm_r
#define ZGEMM_DEFAULT_R zgemm_r
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_Q 128
#define QGEMM_DEFAULT_Q  64
#define CGEMM_DEFAULT_Q 128
#define ZGEMM_DEFAULT_Q  64
#define XGEMM_DEFAULT_Q  32

#define SYMV_P	16
#define HAVE_EXCLUSIVE_CACHE

#endif

#if defined(PENTIUM) || defined(PENTIUM2) || defined(PENTIUM3)

#ifdef HAVE_SSE
#define SNUMOPT		2
#else
#define SNUMOPT		1
#endif
#define DNUMOPT		1

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 0
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#ifdef HAVE_SSE
#define SGEMM_DEFAULT_UNROLL_M 8
#define CGEMM_DEFAULT_UNROLL_M 4
#else
#define SGEMM_DEFAULT_UNROLL_M 4
#define CGEMM_DEFAULT_UNROLL_M 2
#endif
#define DGEMM_DEFAULT_UNROLL_M 2
#define SGEMM_DEFAULT_UNROLL_N 2
#define DGEMM_DEFAULT_UNROLL_N 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 1
#define ZGEMM_DEFAULT_UNROLL_M 1
#define ZGEMM_DEFAULT_UNROLL_N 1
#define XGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_Q 256
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_Q 256
#define XGEMM_DEFAULT_R xgemm_r

#define SYMV_P	4

#endif

#ifdef PENTIUMM

#define SNUMOPT		2
#define DNUMOPT		1

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 0
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#ifdef CORE_YONAH
#define SGEMM_DEFAULT_UNROLL_M 4
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_N 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define SGEMM_DEFAULT_UNROLL_N 2
#define DGEMM_DEFAULT_UNROLL_M 2
#define DGEMM_DEFAULT_UNROLL_N 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define CGEMM_DEFAULT_UNROLL_N 1
#define ZGEMM_DEFAULT_UNROLL_M 1
#define ZGEMM_DEFAULT_UNROLL_N 1
#define XGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_N 1

#endif

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_Q 256
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_Q 256
#define XGEMM_DEFAULT_R xgemm_r

#define SYMV_P	4
#endif

#ifdef CORE_NORTHWOOD

#define SNUMOPT		4
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A      0
#define GEMM_DEFAULT_OFFSET_B     32

#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SYMV_P	8

#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 2
#define DGEMM_DEFAULT_UNROLL_N 2
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 1
#define ZGEMM_DEFAULT_UNROLL_N 1
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 128
#define DGEMM_DEFAULT_Q 128
#define QGEMM_DEFAULT_Q 128
#define CGEMM_DEFAULT_Q 128
#define ZGEMM_DEFAULT_Q 128
#define XGEMM_DEFAULT_Q 128
#endif

#ifdef CORE_PRESCOTT

#define SNUMOPT		4
#define DNUMOPT		2

#ifndef __64BIT__
#define GEMM_DEFAULT_OFFSET_A    128
#define GEMM_DEFAULT_OFFSET_B    192
#else
#define GEMM_DEFAULT_OFFSET_A      0
#define GEMM_DEFAULT_OFFSET_B    256
#endif

#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SYMV_P	8

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1
#endif

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 128
#define DGEMM_DEFAULT_Q 128
#define QGEMM_DEFAULT_Q 128
#define CGEMM_DEFAULT_Q 128
#define ZGEMM_DEFAULT_Q 128
#define XGEMM_DEFAULT_Q 128
#endif

#ifdef CORE2

#define SNUMOPT		8
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A    448
#define GEMM_DEFAULT_OFFSET_B    128
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SYMV_P	8

#define SWITCH_RATIO	4

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 2
#define DGEMM_DEFAULT_UNROLL_N 2
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 1
#define ZGEMM_DEFAULT_UNROLL_N 1
#define XGEMM_DEFAULT_UNROLL_N 1

#define MASK(a, b) ((((a) + (b) - 1) / (b)) * (b))

#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1
#endif

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_Q 256
#define XGEMM_DEFAULT_Q 256

#endif

#ifdef PENRYN

#define SNUMOPT		8
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A   128
#define GEMM_DEFAULT_OFFSET_B     0
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SYMV_P	8

#define SWITCH_RATIO	4

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1
#endif

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 512
#define DGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_Q 128
#define CGEMM_DEFAULT_Q 512
#define ZGEMM_DEFAULT_Q 256
#define XGEMM_DEFAULT_Q 128

#define GETRF_FACTOR 0.75
#endif

#ifdef DUNNINGTON

#define SNUMOPT		8
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A   128
#define GEMM_DEFAULT_OFFSET_B     0
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SYMV_P	8

#define SWITCH_RATIO	4

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1
#endif

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 768
#define DGEMM_DEFAULT_Q 384
#define QGEMM_DEFAULT_Q 192
#define CGEMM_DEFAULT_Q 768
#define ZGEMM_DEFAULT_Q 384
#define XGEMM_DEFAULT_Q 192

#define GETRF_FACTOR 0.75
#define GEMM_THREAD gemm_thread_mn
#endif

#ifdef NEHALEM

#define SNUMOPT		8
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A    32
#define GEMM_DEFAULT_OFFSET_B     0
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SYMV_P	8

#define SWITCH_RATIO	4

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1
#else
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1

#define SGEMM_DEFAULT_UNROLL_N 8
#define DGEMM_DEFAULT_UNROLL_N 8
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 4
#define ZGEMM_DEFAULT_UNROLL_N 4
#define XGEMM_DEFAULT_UNROLL_N 1
#endif

#define SGEMM_DEFAULT_P 504
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P 504
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P 504
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P 252
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P 252
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P 252
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 512
#define DGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_Q 128
#define CGEMM_DEFAULT_Q 512
#define ZGEMM_DEFAULT_Q 256
#define XGEMM_DEFAULT_Q 128

#define GETRF_FACTOR 0.72

#endif


#ifdef ATOM

#define SNUMOPT		2
#define DNUMOPT		1

#define GEMM_DEFAULT_OFFSET_A     64
#define GEMM_DEFAULT_OFFSET_B      0
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SYMV_P	8

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1
#endif

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 2
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 1
#define XGEMM_DEFAULT_UNROLL_N 1

#define SGEMM_DEFAULT_P sgemm_p
#define SGEMM_DEFAULT_R sgemm_r

#define DGEMM_DEFAULT_P dgemm_p
#define DGEMM_DEFAULT_R dgemm_r

#define QGEMM_DEFAULT_P qgemm_p
#define QGEMM_DEFAULT_R qgemm_r

#define CGEMM_DEFAULT_P cgemm_p
#define CGEMM_DEFAULT_R cgemm_r

#define ZGEMM_DEFAULT_P zgemm_p
#define ZGEMM_DEFAULT_R zgemm_r

#define XGEMM_DEFAULT_P xgemm_p
#define XGEMM_DEFAULT_R xgemm_r

#define SGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_Q 256
#define QGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_Q 256
#define XGEMM_DEFAULT_Q 256

#endif


#ifdef ITANIUM2

#define SNUMOPT		4
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 128
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M 8
#define SGEMM_DEFAULT_UNROLL_N 8
#define DGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_N 8
#define QGEMM_DEFAULT_UNROLL_M 8
#define QGEMM_DEFAULT_UNROLL_N 8
#define CGEMM_DEFAULT_UNROLL_M 4
#define CGEMM_DEFAULT_UNROLL_N 4
#define ZGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_N 4
#define XGEMM_DEFAULT_UNROLL_M 4
#define XGEMM_DEFAULT_UNROLL_N 4

#define SGEMM_DEFAULT_P sgemm_p
#define DGEMM_DEFAULT_P dgemm_p
#define QGEMM_DEFAULT_P qgemm_p
#define CGEMM_DEFAULT_P cgemm_p
#define ZGEMM_DEFAULT_P zgemm_p
#define XGEMM_DEFAULT_P xgemm_p

#define SGEMM_DEFAULT_Q 1024
#define DGEMM_DEFAULT_Q 1024
#define QGEMM_DEFAULT_Q 1024
#define CGEMM_DEFAULT_Q 1024
#define ZGEMM_DEFAULT_Q 1024
#define XGEMM_DEFAULT_Q 1024

#define SGEMM_DEFAULT_R sgemm_r
#define DGEMM_DEFAULT_R dgemm_r
#define QGEMM_DEFAULT_R qgemm_r
#define CGEMM_DEFAULT_R cgemm_r
#define ZGEMM_DEFAULT_R zgemm_r
#define XGEMM_DEFAULT_R xgemm_r

#define SYMV_P	 16

#define GETRF_FACTOR 0.65

#endif

#if defined(EV4) || defined(EV5) || defined(EV6)

#ifdef EV4
#define SNUMOPT		1
#define DNUMOPT		1
#else
#define SNUMOPT		2
#define DNUMOPT		2
#endif

#define GEMM_DEFAULT_OFFSET_A 512
#define GEMM_DEFAULT_OFFSET_B 512
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_M 4
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#define SYMV_P	 8

#ifdef EV4
#define SGEMM_DEFAULT_P	 32
#define SGEMM_DEFAULT_Q	112
#define SGEMM_DEFAULT_R	256

#define DGEMM_DEFAULT_P	 32
#define DGEMM_DEFAULT_Q	 56
#define DGEMM_DEFAULT_R	256

#define CGEMM_DEFAULT_P	 32
#define CGEMM_DEFAULT_Q	 64
#define CGEMM_DEFAULT_R	240

#define ZGEMM_DEFAULT_P	 32
#define ZGEMM_DEFAULT_Q	 32
#define ZGEMM_DEFAULT_R	240
#endif

#ifdef EV5
#define SGEMM_DEFAULT_P	 64
#define SGEMM_DEFAULT_Q	256

#define DGEMM_DEFAULT_P	 64
#define DGEMM_DEFAULT_Q	128

#define CGEMM_DEFAULT_P	 64
#define CGEMM_DEFAULT_Q	128

#define ZGEMM_DEFAULT_P	 64
#define ZGEMM_DEFAULT_Q	 64
#endif

#ifdef EV6
#define SGEMM_DEFAULT_P	256
#define SGEMM_DEFAULT_Q	512

#define DGEMM_DEFAULT_P	256
#define DGEMM_DEFAULT_Q	256

#define CGEMM_DEFAULT_P	256
#define CGEMM_DEFAULT_Q	256

#define ZGEMM_DEFAULT_P	128
#define ZGEMM_DEFAULT_Q	256
#endif

#endif

#ifdef CELL

#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 8192
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_M 16
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 8
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#define SGEMM_DEFAULT_P 128
#define DGEMM_DEFAULT_P 128
#define CGEMM_DEFAULT_P 128
#define ZGEMM_DEFAULT_P 128

#define SGEMM_DEFAULT_Q  512
#define DGEMM_DEFAULT_Q  256
#define CGEMM_DEFAULT_Q  256
#define ZGEMM_DEFAULT_Q  128

#define SYMV_P	 4
#endif

#ifdef PPCG4
#define GEMM_DEFAULT_OFFSET_A    0
#define GEMM_DEFAULT_OFFSET_B 1024
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_M 16
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 8
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#define SGEMM_DEFAULT_P 256
#define DGEMM_DEFAULT_P 128
#define CGEMM_DEFAULT_P 128
#define ZGEMM_DEFAULT_P  64

#define SGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_Q 256

#define SYMV_P	 4
#endif

#ifdef PPC970

#define SNUMOPT		4
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A 2688
#define GEMM_DEFAULT_OFFSET_B 3072
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M 16
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 8
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#ifdef OS_LINUX
#if L2_SIZE == 1024976
#define SGEMM_DEFAULT_P 320
#define DGEMM_DEFAULT_P 256
#define CGEMM_DEFAULT_P 256
#define ZGEMM_DEFAULT_P 256
#else
#define SGEMM_DEFAULT_P 176
#define DGEMM_DEFAULT_P 176
#define CGEMM_DEFAULT_P 176
#define ZGEMM_DEFAULT_P 176
#endif
#endif

#define SGEMM_DEFAULT_Q 512
#define DGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_Q 128

#define SYMV_P	 4

#endif

#ifdef PPC440

#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A (32 * 0)
#define GEMM_DEFAULT_OFFSET_B (32 * 0)
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_M 4
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#define SGEMM_DEFAULT_P 512
#define DGEMM_DEFAULT_P 512
#define CGEMM_DEFAULT_P 512
#define ZGEMM_DEFAULT_P 512

#define SGEMM_DEFAULT_Q 1024
#define DGEMM_DEFAULT_Q  512
#define CGEMM_DEFAULT_Q  512
#define ZGEMM_DEFAULT_Q  256

#define SGEMM_DEFAULT_R SGEMM_DEFAULT_P
#define DGEMM_DEFAULT_R DGEMM_DEFAULT_P
#define CGEMM_DEFAULT_R CGEMM_DEFAULT_P
#define ZGEMM_DEFAULT_R ZGEMM_DEFAULT_P

#define SYMV_P	 4
#endif

#ifdef PPC440FP2

#define SNUMOPT		4
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A (32 * 0)
#define GEMM_DEFAULT_OFFSET_B (32 * 0)
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_M 8
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 4
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_N 2

#define SGEMM_DEFAULT_P 128
#define DGEMM_DEFAULT_P 128
#define CGEMM_DEFAULT_P 128
#define ZGEMM_DEFAULT_P 128
#if 1
#define SGEMM_DEFAULT_Q 4096
#define DGEMM_DEFAULT_Q 3072
#define CGEMM_DEFAULT_Q 2048
#define ZGEMM_DEFAULT_Q 1024
#else
#define SGEMM_DEFAULT_Q  512
#define DGEMM_DEFAULT_Q  256
#define CGEMM_DEFAULT_Q  256
#define ZGEMM_DEFAULT_Q  128
#endif

#define SYMV_P	 4
#endif



#if defined(POWER3) || defined(POWER4) || defined(POWER5)
#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 2048
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_M 4
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#ifdef POWER3

#define SNUMOPT		4
#define DNUMOPT		4

#define SGEMM_DEFAULT_P 256
#define SGEMM_DEFAULT_Q 432
#define SGEMM_DEFAULT_R 1012

#define DGEMM_DEFAULT_P 256
#define DGEMM_DEFAULT_Q 216
#define DGEMM_DEFAULT_R 1012

#define ZGEMM_DEFAULT_P 256
#define ZGEMM_DEFAULT_Q 104
#define ZGEMM_DEFAULT_R 1012
#endif

#if defined(POWER4)
#ifdef ALLOC_HUGETLB
#define SGEMM_DEFAULT_P 184
#define DGEMM_DEFAULT_P 184
#define CGEMM_DEFAULT_P 184
#define ZGEMM_DEFAULT_P 184
#else
#define SGEMM_DEFAULT_P 144
#define DGEMM_DEFAULT_P 144
#define CGEMM_DEFAULT_P 144
#define ZGEMM_DEFAULT_P 144
#endif
#endif

#if defined(POWER5)
#ifdef ALLOC_HUGETLB
#define SGEMM_DEFAULT_P 512
#define DGEMM_DEFAULT_P 256
#define CGEMM_DEFAULT_P 256
#define ZGEMM_DEFAULT_P 128
#else
#define SGEMM_DEFAULT_P 320
#define DGEMM_DEFAULT_P 160
#define CGEMM_DEFAULT_P 160
#define ZGEMM_DEFAULT_P  80
#endif

#define SGEMM_DEFAULT_Q 256
#define CGEMM_DEFAULT_Q 256
#define DGEMM_DEFAULT_Q 256
#define ZGEMM_DEFAULT_Q 256
#endif

#define SYMV_P	 8

#endif

#if defined(POWER6)

#define SNUMOPT		4
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A  384
#define GEMM_DEFAULT_OFFSET_B 1024
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M 4
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_N 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 4

#define SGEMM_DEFAULT_P  992
#define DGEMM_DEFAULT_P  480
#define CGEMM_DEFAULT_P  488
#define ZGEMM_DEFAULT_P  248

#define SGEMM_DEFAULT_Q  504
#define DGEMM_DEFAULT_Q  504
#define CGEMM_DEFAULT_Q  400
#define ZGEMM_DEFAULT_Q  400

#define SYMV_P	 8

#endif

#if defined(SPARC) && defined(V7)

#define SNUMOPT		4
#define DNUMOPT		4

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 2048
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M 2
#define SGEMM_DEFAULT_UNROLL_N 8
#define DGEMM_DEFAULT_UNROLL_M 2
#define DGEMM_DEFAULT_UNROLL_N 8
#define CGEMM_DEFAULT_UNROLL_M 1
#define CGEMM_DEFAULT_UNROLL_N 4
#define ZGEMM_DEFAULT_UNROLL_M 1
#define ZGEMM_DEFAULT_UNROLL_N 4

#define SGEMM_DEFAULT_P  256
#define DGEMM_DEFAULT_P  256
#define CGEMM_DEFAULT_P  256
#define ZGEMM_DEFAULT_P  256

#define SGEMM_DEFAULT_Q  512
#define DGEMM_DEFAULT_Q  256
#define CGEMM_DEFAULT_Q  256
#define ZGEMM_DEFAULT_Q  128

#define SYMV_P	 8
#define GEMM_THREAD gemm_thread_mn
#endif

#if (defined(SPARC) && defined(V9)) || defined(__sparc_v9__)

#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 2048
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M 4
#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define CGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_N 2

#define SGEMM_DEFAULT_P  512
#define DGEMM_DEFAULT_P  512
#define CGEMM_DEFAULT_P  512
#define ZGEMM_DEFAULT_P  512

#define SGEMM_DEFAULT_Q 1024
#define DGEMM_DEFAULT_Q  512
#define CGEMM_DEFAULT_Q  512
#define ZGEMM_DEFAULT_Q  256

#define SYMV_P	 8
#endif

#ifdef SICORTEX

#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 0
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M  2
#define SGEMM_DEFAULT_UNROLL_N  8
#define DGEMM_DEFAULT_UNROLL_M  2
#define DGEMM_DEFAULT_UNROLL_N  8
#define CGEMM_DEFAULT_UNROLL_M  1
#define CGEMM_DEFAULT_UNROLL_N  4
#define ZGEMM_DEFAULT_UNROLL_M  1
#define ZGEMM_DEFAULT_UNROLL_N  4

#define SGEMM_DEFAULT_P 108
#define DGEMM_DEFAULT_P 112
#define CGEMM_DEFAULT_P 108
#define ZGEMM_DEFAULT_P 112

#define SGEMM_DEFAULT_Q 288
#define DGEMM_DEFAULT_Q 144
#define CGEMM_DEFAULT_Q 144
#define ZGEMM_DEFAULT_Q  72

#define SGEMM_DEFAULT_R 2000
#define DGEMM_DEFAULT_R 2000
#define CGEMM_DEFAULT_R 2000
#define ZGEMM_DEFAULT_R 2000

#define SYMV_P	16
#endif

#ifdef LOONGSON3A 
////Copy from SICORTEX
#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 0
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M  8
#define SGEMM_DEFAULT_UNROLL_N  4

#define DGEMM_DEFAULT_UNROLL_M  4
#define DGEMM_DEFAULT_UNROLL_N  4

#define CGEMM_DEFAULT_UNROLL_M  4
#define CGEMM_DEFAULT_UNROLL_N  2

#define ZGEMM_DEFAULT_UNROLL_M  2
#define ZGEMM_DEFAULT_UNROLL_N  2

#define SGEMM_DEFAULT_P	64
#define DGEMM_DEFAULT_P	44 
#define CGEMM_DEFAULT_P 64
#define ZGEMM_DEFAULT_P 32

#define SGEMM_DEFAULT_Q 192
#define DGEMM_DEFAULT_Q 92
#define CGEMM_DEFAULT_Q 128
#define ZGEMM_DEFAULT_Q 80

#define SGEMM_DEFAULT_R 640 
#define DGEMM_DEFAULT_R dgemm_r 
#define CGEMM_DEFAULT_R 640
#define ZGEMM_DEFAULT_R 640

#define GEMM_OFFSET_A1	0x10000
#define	GEMM_OFFSET_B1	0x100000

#define SYMV_P	16
#endif

#ifdef LOONGSON3B
#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 0
#define GEMM_DEFAULT_ALIGN 0x03fffUL

#define SGEMM_DEFAULT_UNROLL_M  2
#define SGEMM_DEFAULT_UNROLL_N  2

#define DGEMM_DEFAULT_UNROLL_M  2
#define DGEMM_DEFAULT_UNROLL_N  2

#define CGEMM_DEFAULT_UNROLL_M  2
#define CGEMM_DEFAULT_UNROLL_N  2

#define ZGEMM_DEFAULT_UNROLL_M  2
#define ZGEMM_DEFAULT_UNROLL_N  2

#define SGEMM_DEFAULT_P	64
#define DGEMM_DEFAULT_P	24
#define CGEMM_DEFAULT_P 24
#define ZGEMM_DEFAULT_P 20

#define SGEMM_DEFAULT_Q 192
#define DGEMM_DEFAULT_Q 128
#define CGEMM_DEFAULT_Q 128
#define ZGEMM_DEFAULT_Q 64

#define SGEMM_DEFAULT_R 512
#define DGEMM_DEFAULT_R 512 
#define CGEMM_DEFAULT_R 512
#define ZGEMM_DEFAULT_R 512

#define GEMM_OFFSET_A1	0x10000
#define	GEMM_OFFSET_B1	0x100000

#define SYMV_P	16
#endif

#ifdef GENERIC

#define SNUMOPT		2
#define DNUMOPT		2

#define GEMM_DEFAULT_OFFSET_A 0
#define GEMM_DEFAULT_OFFSET_B 0
#define GEMM_DEFAULT_ALIGN 0x0ffffUL

#define SGEMM_DEFAULT_UNROLL_N 4
#define DGEMM_DEFAULT_UNROLL_N 4
#define QGEMM_DEFAULT_UNROLL_N 2
#define CGEMM_DEFAULT_UNROLL_N 2
#define ZGEMM_DEFAULT_UNROLL_N 2
#define XGEMM_DEFAULT_UNROLL_N 1

#ifdef ARCH_X86
#define SGEMM_DEFAULT_UNROLL_M 4
#define DGEMM_DEFAULT_UNROLL_M 2
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 2
#define ZGEMM_DEFAULT_UNROLL_M 1
#define XGEMM_DEFAULT_UNROLL_M 1
#else
#define SGEMM_DEFAULT_UNROLL_M 8
#define DGEMM_DEFAULT_UNROLL_M 4
#define QGEMM_DEFAULT_UNROLL_M 2
#define CGEMM_DEFAULT_UNROLL_M 4
#define ZGEMM_DEFAULT_UNROLL_M 2
#define XGEMM_DEFAULT_UNROLL_M 1
#endif

#define SGEMM_P sgemm_p
#define DGEMM_P dgemm_p
#define QGEMM_P qgemm_p
#define CGEMM_P cgemm_p
#define ZGEMM_P zgemm_p
#define XGEMM_P xgemm_p

#define SGEMM_R sgemm_r
#define DGEMM_R dgemm_r
#define QGEMM_R qgemm_r
#define CGEMM_R cgemm_r
#define ZGEMM_R zgemm_r
#define XGEMM_R xgemm_r

#define SGEMM_Q 128
#define DGEMM_Q 128
#define QGEMM_Q 128
#define CGEMM_Q 128
#define ZGEMM_Q 128
#define XGEMM_Q 128

#define SYMV_P	16

#endif

#ifndef QGEMM_DEFAULT_UNROLL_M
#define QGEMM_DEFAULT_UNROLL_M 2
#endif

#ifndef QGEMM_DEFAULT_UNROLL_N
#define QGEMM_DEFAULT_UNROLL_N 2
#endif

#ifndef XGEMM_DEFAULT_UNROLL_M
#define XGEMM_DEFAULT_UNROLL_M 2
#endif

#ifndef XGEMM_DEFAULT_UNROLL_N
#define XGEMM_DEFAULT_UNROLL_N 2
#endif

#ifndef HAVE_SSE2
#define SHUFPD_0	shufps	$0x44,
#define SHUFPD_1	shufps	$0x4e,
#define SHUFPD_2	shufps	$0xe4,
#define SHUFPD_3	shufps	$0xee,
#endif

#ifndef SHUFPD_0
#define SHUFPD_0	shufpd	$0,
#endif

#ifndef SHUFPD_1
#define SHUFPD_1	shufpd	$1,
#endif

#ifndef SHUFPD_2
#define SHUFPD_2	shufpd	$2,
#endif

#ifndef SHUFPD_3
#define SHUFPD_3	shufpd	$3,
#endif

#ifndef SHUFPS_39
#define SHUFPS_39	shufps	$0x39,
#endif


#endif
