/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : arthmatic_tests.h
 * 
 * Description : 
 *   -- This will defined the enumarated tests that will be run.  It provides
 *   -- basic support to the arthmatic class.
 * Version : 0.1.0
 * 
 * Created Date : November 05 2015
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include <stdint.h>

#if !defined(ROUNDING_TESTS_PATTERN_H_)
#define ROUNDING_PATTERN_H_

#include "../include.d/globals.h"
#include "../ArthmaticTests.d/arthmatic_templates.h"

enum e_ROUNDING_TESTS {
  e_ADD = 0,
  e_SUBTRACT,
  e_MULTIPLY,
  e_DIVIDE,
  e_REMAINDER,
  e_SQUAREROOT,
  e_ROUNDING_END_OF_LIST};

static FloatTestDescription FloatArthmeticTests[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_ZERO_TESTS_START+e_ADD ,"ADD RD to ZERO float",0x40000001,0x40000000,0x40800000,0},
 { ROUND_TO_ZERO_TESTS_START+e_SUBTRACT ,"SUBTRACT RD to ZERO float",0x40000000,0x3f800000,0x3f800000,0},
 { ROUND_TO_ZERO_TESTS_START+e_MULTIPLY ,"MULTIPLY RD to ZERO float",0x40000000,0x40000000,0x40800000,0},
 { ROUND_TO_ZERO_TESTS_START+e_DIVIDE ,"DIVIDE RD to ZERO float",0x40800000,0x40000000,0x40000000,0},
 { ROUND_TO_ZERO_TESTS_START+e_REMAINDER ,"REMAINDER RD to ZERO float",0x3fffffff,0x40000001,0xc0000000,0},
 { ROUND_TO_ZERO_TESTS_START+e_SQUAREROOT,"SQUARE ROOT RD to ZERO float",0x40000000,0x3fb504f3,0,0},

};

#if DO_DOUBLES
static DoubleTestDescription DoubleArthmeticTests[e_ROUNDING_END_OF_LIST] = {
}  ;
#endif      
#endif      
