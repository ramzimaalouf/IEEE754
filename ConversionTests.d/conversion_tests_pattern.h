/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : conversion_tests.h
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

#if !defined(CONVERSION_TESTS_PATTERN_H_)
#define CONVERSION_TESTS_PATTERN_H_

#include "../include.d/globals.h"
#include "conversion_templates.h"

enum e_CONVERSION_TESTS {
  e_FLOAT_INTEGER= 0,
  e_INTEGER_FLOAT,
  e_CONVERSION_END_OF_LIST};

static FloatTestDescription FloatConversionTests [e_CONVERSION_END_OF_LIST] = {
 { CONVERSION_FLOAT+e_FLOAT_INTEGER,"CONVERT Float to Integer",0x40000000,0x00000002,0,0},
 { CONVERSION_FLOAT+e_INTEGER_FLOAT,"CONVERT Integer to Float",0x00000004,0x40800000,0,0},
};

#if DO_DOUBLES
static DoubleTestDescription DoubleConversionTests[e_CONVERSION_END_OF_LIST] = {
  { CONVERSION_FLOAT+e_FLOAT_INTEGER ,"CONVERT Double to Integer",UINT64_C(0x4010000000000000),UINT64_C(0x0000000000000004),UINT64_C(0),UINT64_C(0)},
  { CONVERSION_FLOAT+e_INTEGER_FLOAT ,"CONVERT Integer to Double",UINT64_C(0x0000000000000004),UINT64_C(0x4010000000000000),UINT64_C(0),UINT64_C(0)},
}  ;
#endif      

#endif
