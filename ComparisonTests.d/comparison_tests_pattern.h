/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : comparison_tests.h
 * 
 * Description : 
 * 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2016
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#if !defined(COMPARISON_TESTS_PATTERN_H_)
#define COMPARISON_TESTS_PATTERN_H_

#include "../include.d/globals.h"
#include "comparison_templates.h"

enum e_COMPARISON_TESTS {
  e_EQUAL = 0,
  e_NOT_EQUAL ,
  e_GREATER_THAN ,
  e_LESS_THAN,
  e_GREATER_THAN_EQUAL,
  e_LESS_THAN_EQUAL,
  e_COMPARISON_END_OF_LIST};

static FloatTestDescription FloatComparisonTests [e_COMPARISON_END_OF_LIST] = {
 { COMPARISON_FLOAT_FLOAT+e_EQUAL ,"EQUAL float",0x40000000,0x40000000,0x40800000,0},
 { COMPARISON_FLOAT_FLOAT+e_NOT_EQUAL ,"NOT EQUAL float",0x40000000,0x3f800000,0x3f800000,0},
 { COMPARISON_FLOAT_FLOAT+e_GREATER_THAN ,"GREATER Than float",0x40000001,0x40000000,0x40800000,0},
 { COMPARISON_FLOAT_FLOAT+e_LESS_THAN ,"LESS Than float",0x40000000,0x40000001,0x40000000,0},
};

#if DO_DOUBLES
static DoubleTestDescription DoubleComparisonTests[e_COMPARISON_END_OF_LIST] = {
  { COMPARISON_DOUBLE_DOUBLE+e_EQUAL ,"EQUAL double",UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0x4010000000000000),UINT64_C(0)},
  { COMPARISON_DOUBLE_DOUBLE+e_NOT_EQUAL ,"NOT EQUAL double",UINT64_C(0x4000000000000000),UINT64_C(0x3ff0000000000000),UINT64_C(0x3ff0000000000000),UINT64_C(0)},
  { COMPARISON_DOUBLE_DOUBLE+e_GREATER_THAN ,"GREATER Than double",UINT64_C(0x4000000000000001),UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000000),UINT64_C(0)},
  { COMPARISON_DOUBLE_DOUBLE+e_LESS_THAN ,"LESS Than double",UINT64_C(0x4000000000000000),UINT64_C(0x4000000000000001),UINT64_C(0x4000000000000001),UINT64_C(0)},
}  ;
#endif      

#endif
