/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : arthmetic_tests.h
 * 
 * Description : 
 *   -- This will defined the enumarated tests that will be run.  It provides
 *   -- basic support to the arthmetic class.
 * Version : 0.1.0
 * 
 * Created Date : November 05 2015
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include <stdint.h>

#if !defined(ARTHMETIC_TESTS_PATTERN_H_)
#define ARTHMETIC_PATTERN_H_

#include "../include.d/globals.h"
#include "arthmetic_templates.h"
enum e_ARTHMETIC_TESTS {
  e_ADD = 0,
  e_SUBTRACT,
  e_MULTIPLY,
  e_DIVIDE,
  e_REMAINDER,
  e_SQUAREROOT,
  e_SQUAREROOT_NEGATIVE_ZERO,
  e_SQUAREROOT_POSITIVE_ZERO,
  e_SQUAREROOT_DENORMALIZED,
  e_SQUAREROOT_DENORMALIZED_SMALLEST,
  e_ARTHMETIC_END_OF_LIST};

static FloatTestDescription FloatArthmeticTests[e_ARTHMETIC_END_OF_LIST] = {
 { FLOAT_START+e_ADD ,"ADD float",0x40000000,0x40000000,0x40800000,0},
 { FLOAT_START+e_SUBTRACT ,"Subtract float",0x40000000,0x3f800000,0x3f800000,0},
 { FLOAT_START+e_MULTIPLY ,"Multiply float",0x40000000,0x40000000,0x40800000,0},
 { FLOAT_START+e_DIVIDE ,"Divide float",0x40800000,0x40000000,0x40000000,0},
 { FLOAT_START+e_REMAINDER ,"Remainder float",0x3fffffff,0x40000001,0xc0000000,0},
 { FLOAT_START+e_SQUAREROOT,"Square Root float",0x40000000,0x3fb504f3,0,0},
 { FLOAT_START+e_SQUAREROOT_NEGATIVE_ZERO,"Sqrt Negative Zero",0x80000000,0x80000000,0,0},
 { FLOAT_START+e_SQUAREROOT_POSITIVE_ZERO,"Sqrt Positive Zero",0x00000000,0x00000000,0,0},
 { FLOAT_START+e_SQUAREROOT_DENORMALIZED,"Sqrt denormal",0x00200000,0x1f800000,0,0},
 { FLOAT_START+e_SQUAREROOT_DENORMALIZED_SMALLEST,"Sqrt denormal small",0x00000001,0x1a3504f3,0,0},
};

#if DO_DOUBLES
static DoubleTestDescription DoubleArthmeticTests[e_ARTHMETIC_END_OF_LIST] = {
  { DOUBLE_START+e_ADD ,"ADD double",UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4010000000000000),UINT64_C(0)},
  { DOUBLE_START+e_SUBTRACT ,"Subtract double",UINT64_C(0x4000000000000000),UINT64_C(0x3ff0000000000000),UINT64_C(0x3ff0000000000000),UINT64_C(0)},
  { DOUBLE_START+e_MULTIPLY ,"Multiply double",UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4010000000000000),UINT64_C(0)},
  { DOUBLE_START+e_DIVIDE ,"Divide double",UINT64_C(0x4010000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0)},
  { DOUBLE_START+e_REMAINDER ,"Remainder double",0x3fffffff,0x40000001,0xc0000000,0},
  { DOUBLE_START+e_SQUAREROOT,"Sqrt ",UINT64_C(0x4010000000000000),UINT64_C(0x4000000000000000),0,0},
  { DOUBLE_START+e_SQUAREROOT_NEGATIVE_ZERO,"Sqrt Negative Zero",UINT64_C(0x8000000000000000),UINT64_C(0x8000000000000000),0,0},
  { DOUBLE_START+e_SQUAREROOT_POSITIVE_ZERO,"Sqrt Positive Zero",UINT64_C(0x0000000000000000),UINT64_C(0x0000000000000000),0,0},
}  ;
#endif      
#endif      
