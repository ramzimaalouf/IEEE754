/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : arthmatic_tests.h
 * 
 * Description : 
 *   -- This will define the enumarated tests that will be run.
 *
 * Version : 0.1.0
 * 
 * Created Date : November 05 2016
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include <stdint.h>

#if !defined(ARTHMATIC_TESTS_PATTERN_H_)
#define ARTHMATIC_PATTERN_H_

#include "../include.d/globals.h"
#include "arthmatic_templates.h"

enum e_ARTHMATIC_TESTS {
  e_ADD = 0,
  e_SUBTRACT,
  e_MULTIPLY,
  e_DIVIDE,
  e_REMAINDER,
  e_SQUAREROOT,
  e_ARTHMETIC_END_OF_LIST};

static FloatTestDescription FloatArthmeticTests[e_ARTHMETIC_END_OF_LIST] = {
 { FLOAT_START+e_ADD ,"ADD float",0x40000000,0x40000000,0x40800000,0},
 { FLOAT_START+e_SUBTRACT ,"SUBTRACT float",0x40000000,0x3f800000,0x3f800000,0},
 { FLOAT_START+e_MULTIPLY ,"MULTIPLY float",0x40000000,0x40000000,0x40800000,0},
 { FLOAT_START+e_DIVIDE ,"DIVIDE float",0x40800000,0x40000000,0x40000000,0},
 { FLOAT_START+e_REMAINDER ,"REMAINDER float",0x3fffffff,0x40000001,0xc0000000,0},
 { FLOAT_START+e_SQUAREROOT,"SQUARE Root float",0x40000000,0x3fb504f3,0,0},
};

#if DO_DOUBLES
static DoubleTestDescription DoubleArthmeticTests[e_ARTHMETIC_END_OF_LIST] = {
  { DOUBLE_START+e_ADD ,"ADD double",UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4010000000000000),UINT64_C(0)},
  { DOUBLE_START+e_SUBTRACT ,"SUBTRACT double",UINT64_C(0x4000000000000000),UINT64_C(0x3ff0000000000000),UINT64_C(0x3ff0000000000000),UINT64_C(0)},
  { DOUBLE_START+e_MULTIPLY ,"MULTIPLY double",UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4010000000000000),UINT64_C(0)},
  { DOUBLE_START+e_DIVIDE ,"DIVIDE double",UINT64_C(0x4010000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0)},
  { DOUBLE_START+e_REMAINDER ,"REMAINDER double",0x3fffffff,0x40000001,0xc0000000,0},
  { DOUBLE_START+e_SQUAREROOT,"SQRT ",UINT64_C(0x4010000000000000),UINT64_C(0x4000000000000000),0,0},
}  ;
#endif      
#endif      
