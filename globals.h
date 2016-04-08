/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : time.c
 * 
 * Description : 
 * 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2015
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include "config.h"

#include <stdint.h>
#include <inttypes.h>

#if !defined (GLOBALS_H_)
#define GLOBALS_H_

#if !defined(UINT64_C)
#define 	UINT64_C(value)   __CONCAT(value, ULL)
#endif

#define TESTS_START 100
#define FLOAT_START TESTS_START
#define DOUBLE_START FLOAT_START+50
#define COMPARISON_TESTS_START 200
#define COMPARISON_FLOAT_FLOAT COMPARISON_TESTS_START
#define COMPARISON_DOUBLE_DOUBLE COMPARISON_FLOAT_FLOAT +50
#define COMPARISON_DOUBLE_FLOAT COMPARISON_DOUBLE_DOUBLE + 50
#define COMPARISON_FLOAT_DOUBLE COMPARISON_DOUBLE_FLOAT + 50

#define CONVERSION_TESTS_START 500
#define CONVERSION_FLOAT CONVERSION_TESTS_START
#define CONVERSION_DOUBLE CONVERSION_FLOAT +50

/* Which formats to include */
#define DO_DOUBLES  (defined(HAVE_UNSIGNED_LONG_LONG_INT) && (SIZEOF_UINT64_T==SIZEOF_DOUBLE))
#define DO_LONG_DOUBLES defined(HAVE_LONG_DOUBLE) && (SIZEOF_UINT128_T==SIZEOF_LONG_DOUBLE)


#define FLOAT_POSITIVE_INFINITY_IN_BIT_FORMAT 0x7f800000  // -- s=0, e=255, f=0
#define FLOAT_NEGATIVE_INFINITY_IN_BIT_FORMAT 0xff800000  // -- s=1, e=255, f=0

#define DOUBLE_POSITIVE_INFINITY_IN_BIT_FORMAT UINT64_C(0x7fe0000000000000)  // -- s=0, e=2047, f=0
#define DOUBLE_NEGATIVE_INFINITY_IN_BIT_FORMAT UINT64_C(0xffe0000000000000)  // -- s=1, e=2047, f=0

#define FLOAT_SIGN_M 0x80000000
#define FLOAT_EXP_M  0x7f800000
#define FLOAT_FRACTION_M  0x007fffff
#define DOUBLE_SIGN_M UINT64_C(0x8000000000000000)
#define DOUBLE_EXP_M  UINT64_C(0x7fe0000000000000)
#define DOUBLE_FRACTION_M  UINT64_C(0x001fffffffffffff)

#if (SIZEOF_INT == SIZEOF_FLOAT)
typedef union _FloatTestType {
     uint32_t BitPattern;
     float    Number;
} FloatTestType; 
#endif

#if DO_DOUBLES
typedef union _DoubleTestType {
     uint64_t BitPattern;
     double Number;
} DoubleTestType;
#endif

#if DO_LONG_DOUBLES
typedef union _LongDoubleTestType {
     uint128_t BitPattern;
     long double Number;
} LongDoubleTestType;
#endif

typedef struct _FloatTestDescription {
   unsigned int TestID; 
   char Description [128];
   FloatTestType FloatPattern1;
   FloatTestType FloatPattern2;
   FloatTestType FloatPattern3;
   FloatTestType FloatPattern4;
} FloatTestDescription;  

#if DO_DOUBLES
typedef struct _DoubleTestDescription {
   unsigned int TestID; 
   char Description [128];
   DoubleTestType FloatPattern1;
   DoubleTestType FloatPattern2;
   DoubleTestType FloatPattern3;
   DoubleTestType FloatPattern4;
} DoubleTestDescription;
#endif

#if DO_LONG_DOUBLES
typedef struct _LongDoubleDescription {
   unsigned int TestID; 
   char Description [128];
   LongDoubleTestType FloatPattenr1;
   LongDoubleTestType FloatPattern2;
   LongDoubleTestType FloatPattern3;
   LongDoubleTestType FloatPattern4;
} LongDoubleTestDescription;
#endif

#define DEFAULT_DEBUG_LEVEL 5
/* global variables */
extern int g_iErrorCount ;
extern int g_iVerbosityFlag;
extern int g_iIntermediateRegisterWidth;
#endif
     
