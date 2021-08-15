/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : rounding_tests_pattern.h
 * 
 * Description : 
 *   -- This will defined the enumarated tests that will be run.  It provides
 *   -- basic support to the arthmatic class.
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
  e_SQUAREROOT ,
  e_NEGATIVE_ADD,
  e_NEGATIVE_SUBTRACT,
  e_NEGATIVE_MULTIPLY,
  e_NEGATIVE_DIVIDE,
  e_ADD_QUARTER,
  e_SUBTRACT_QUARTER,
  e_MULTIPLY_QUARTER,
  e_DIVIDE_QUARTER,
  e_ADD_THREE_QUARTER,
  e_SUBTRACT_THREE_QUARTER,
  e_MULTIPLY_THREE_QUARTER,
  e_DIVIDE_THREE_QUARTER,
  e_NEGATIVE_ADD_QUARTER,
  e_NEGATIVE_SUBTRACT_QUARTER,
  e_NEGATIVE_MULTIPLY_QUARTER,
  e_NEGATIVE_DIVIDE_QUARTER,
  e_NEGATIVE_ADD_THREE_QUARTER,
  e_NEGATIVE_SUBTRACT_THREE_QUARTER,
  e_NEGATIVE_MULTIPLY_THREE_QUARTER,
  e_NEGATIVE_DIVIDE_THREE_QUARTER,
  e_ADD_EVEN,
  e_ADD_ODD,
  e_NEGATIVE_ADD_EVEN,
  e_NEGATIVE_ADD_ODD,
  e_ROUNDING_END_OF_LIST};

static FloatTestDescription FloatArthmeticTestsToZero[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_ADD ,"ADD RD to ZERO float",0x33800000,0x3f800000,0x3f800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_SUBTRACT ,"SUBTRACT RD to ZERO float",0x3f800000,0x33800000,0x3f7fffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_MULTIPLY ,"MULTIPLY RD to ZERO float",0x3f800400,0x3f800400,0x3f800800,0}, 
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_DIVIDE ,"DIVIDE RD to ZERO float",0x3f800001,0x40000000,0x3f000000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_REMAINDER ,"REMAINDER RD to ZERO float",0x3fffffff,0x40000001,0xffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_SQUAREROOT,"SQUARE ROOT RD to ZERO float",0x40000000,0x3fb504f3,0,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_ADD ,"Neg ADD RD to ZERO float",0xb3800000,0xbf800000,0xbf800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to ZERO float",0xbf800000,0x33800000,0xbf800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to ZERO float",0x3f800400,0xbf800400,0xbf800800,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to ZERO float",0xc0800000,0x40000000,0xffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_ADD_QUARTER ,"ADD 1/4 RD to ZERO float",0x33000000,0x3f800000,0x3f800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to ZERO float",0x3f800000,0x33000000,0x3f7fffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to ZERO float",0x3f800200,0x3f800200,0x3f800400,0}, 
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to ZERO float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to ZERO float",0x33400000,0x3f800000,0x3f800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to ZERO float",0x3f800000,0x33400000,0x3f7fffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to ZERO float",0x3f800500,0x3f800500,0x3f800A00,0}, 
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to ZERO float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to ZERO float",0xb3000000,0xbf800000,0xbf800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to ZERO float",0xbf800000,0x33000000,0xbf800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to ZERO float",0x3f800200,0xbf800200,0xbf800400,0}, 
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to ZERO float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to ZERO float",0xb3400000,0xbf800000,0xbf800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to ZERO float",0xbf800000,0x33400000,0xbf800000,0},
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to ZERO float",0xbf800500,0x3f800500,0xbf800A00,0}, 
 { ROUND_TO_ZERO_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to ZERO float",0x3f800001,0x40000000,0xffffffff,0},
};

static FloatTestDescription FloatArthmeticTestsToNegativeInfinity[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_ADD ,"ADD RD to NEG INF float",0x33800000,0x3f800000,0x3f800000,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_SUBTRACT ,"SUBTRACT RD to NEG INF float",0x3f800000,0x33800000,0x3f7fffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_MULTIPLY ,"MULTIPLY RD to NEG INF float",0x3f800400,0x3f800400,0x3f800800,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_DIVIDE ,"DIVIDE RD to NEG INF float",0x3f800001,0x40000000,0x3f000000,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_REMAINDER ,"REMAINDER RD to NEG INF float",0x3fffffff,0x40000001,0xffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_SQUAREROOT,"SQUARE ROOT RD to NEG INF float",0x40000000,0x3fb504f3,0,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_ADD ,"Neg ADD RD to NEG INF float",0xb3800000,0xbf800000,0xbf800001,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to NEG INF float",0xbf800000,0x33800000,0xbf800001,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to NEG INF float",0x3f800400,0xbf800400,0xbf800801,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to NEG INF float",0xc0800000,0x40000000,0xffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_ADD_QUARTER ,"ADD 1/4 RD to NEG INF float",0x33000000,0x3f800000,0x3f800000,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to NEG INF float",0x3f800000,0x33000000,0x3f7fffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to NEG INF float",0x3f800200,0x3f800200,0x3f800400,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to NEG INF float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to NEG INF float",0x33400000,0x3f800000,0x3f800000,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to NEG INF float",0x3f800000,0x33400000,0x3f7fffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to NEG INF float",0x3f800500,0x3f800500,0x3f800A00,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to NEG INF float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to NEG INF float",0xb3000000,0xbf800000,0xbf800001,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to NEG INF float",0xbf800000,0x33000000,0xbf800001,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to NEG INF float",0x3f800200,0xbf800200,0xbf800401,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to NEG INF float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to NEG INF float",0xb3400000,0xbf800000,0xbf800001,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to NEG INF float",0xbf800000,0x33400000,0xbf800001,0},
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to NEG INF float",0xbf800500,0x3f800500,0xbf800A01,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to NEG INF float",0x3f800001,0x40000000,0xffffffff,0},
};

static FloatTestDescription FloatArthmeticTestsToPositiveInfinity[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_ADD ,"ADD RD to POS INF float",0x33800000,0x3f800000,0x3f800001,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_SUBTRACT ,"SUBTRACT RD to POS INF float",0x3f800000,0x33800000,0x3f800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_MULTIPLY ,"MULTIPLY RD to POS INF float",0x3f800400,0x3f800400,0x3f800801,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_DIVIDE ,"DIVIDE RD to POS INF float",0x3f800001,0x40000000,0x3f000000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_REMAINDER ,"REMAINDER RD to POS INF float",0x3fffffff,0x40000001,0xffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_SQUAREROOT,"SQUARE ROOT RD to POS INF float",0x40000000,0x3fb504f4,0,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_ADD ,"Neg ADD RD to POS INF float",0xb3800000,0xbf800000,0xbf800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to POS INF float",0xbf800000,0x33800000,0xbf800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to POS INF float",0x3f800400,0xbf800400,0xbf800800,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to POS INF float",0xc0800000,0x40000000,0xffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_ADD_QUARTER ,"ADD 1/4 RD to POS INF float",0x33000000,0x3f800000,0x3f800001,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to POS INF float",0x3f800000,0x33000000,0x3f800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to POS INF float",0x3f800200,0x3f800200,0x3f800401,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to POS INF float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to POS INF float",0x33400000,0x3f800000,0x3f800001,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to POS INF float",0x3f800000,0x33400000,0x3f800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to POS INF float",0x3f800500,0x3f800500,0x3f800A01,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to POS INF float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to POS INF float",0xb3000000,0xbf800000,0xbf800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to POS INF float",0xbf800000,0x33000000,0xbf800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to POS INF float",0x3f800200,0xbf800200,0xbf800400,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to POS INF float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to POS INF float",0xb3400000,0xbf800000,0xbf800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to POS INF float",0xbf800000,0x33400000,0xbf800000,0},
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to POS INF float",0xbf800500,0x3f800500,0xbf800A00,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to POS INF float",0x3f800001,0x40000000,0xffffffff,0},
};

static FloatTestDescription FloatArthmeticTestsToNearest[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_ADD ,"ADD RD to NEAREST float",0x33800000,0x3f800000,0x3f800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_SUBTRACT ,"SUBTRACT RD to NEAREST float",0x3f800000,0x33800000,0x3f7fffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_MULTIPLY ,"MULTIPLY RD to NEAREST float",0x3f800400,0x3f800400,0x3f800800,0}, 
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_DIVIDE ,"DIVIDE RD to NEAREST float",0x3f800001,0x40000000,0x3f000000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_REMAINDER ,"REMAINDER RD to NEAREST float",0x3fffffff,0x40000001,0xffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_SQUAREROOT,"SQUARE ROOT RD to NEAREST float",0x40000000,0x3fb504f3,0,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_ADD ,"Neg ADD RD to NEAREST float",0xb3800000,0xbf800000,0xbf800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to NEAREST float",0xbf800000,0x33800000,0xbf800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to NEAREST float",0x3f800400,0xbf800400,0xbf800800,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to NEAREST float",0xc0800000,0x40000000,0xffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_ADD_QUARTER ,"ADD 1/4 RD to NEAREST float",0x33000000,0x3f800000,0x3f800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to NEAREST float",0x3f800000,0x33000000,0x3f7fffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to NEAREST float",0x3f800200,0x3f800200,0x3f800400,0}, 
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to NEAREST float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to NEAREST float",0x33400000,0x3f800000,0x3f800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to NEAREST float",0x3f800000,0x33400000,0x3f7fffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to NEAREST float",0x3f800500,0x3f800500,0x3f800A00,0}, 
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to NEAREST float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to NEAREST float",0xb3000000,0xbf800000,0xbf800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to NEAREST float",0xbf800000,0x33000000,0xbf800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to NEAREST float",0x3f800200,0xbf800200,0xbf800400,0}, 
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to NEAREST float",0x3f800001,0x40000000,0xffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to NEAREST float",0xb3400000,0xbf800000,0xbf800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to NEAREST float",0xbf800000,0x33400000,0xbf800000,0},
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to NEAREST float",0xbf800500,0x3f800500,0xbf800A00,0}, 
 { ROUND_TO_NEAREST_TESTS_START_FLOAT+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to NEAREST float",0x3f800001,0x40000000,0xffffffff,0},

};
#if DO_DOUBLES
static DoubleTestDescription DoubleArthmeticTestsToNearest[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_ADD ,"ADD RD to NEAREST double",0x3380000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_SUBTRACT ,"SUBTRACT RD to NEAREST double",0x3f80000000000000,0x3380000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_MULTIPLY ,"MULTIPLY RD to NEAREST double",0x3f80040000000000,0x3f80040000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_DIVIDE ,"DIVIDE RD to NEAREST double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_REMAINDER ,"REMAINDER RD to NEAREST double",0x3fffffff00000000,0x4000000100000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_SQUAREROOT,"SQUARE ROOT RD to NEAREST double",0x4000000000000000,0x3fb504f300000000,0,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_ADD ,"Neg ADD RD to NEAREST double",0xb380000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to NEAREST double",0xbf80000000000000,0x3380000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to NEAREST double",0x3f80040000000000,0xbf80040000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to NEAREST double",0xc080000000000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_ADD_QUARTER ,"ADD 1/4 RD to NEAREST double",0x3300000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to NEAREST double",0x3f80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to NEAREST double",0x3f80020000000000,0x3f80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to NEAREST double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to NEAREST double",0x3340000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to NEAREST double",0x3f80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to NEAREST double",0x3f80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to NEAREST double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to NEAREST double",0xb300000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to NEAREST double",0xbf80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to NEAREST double",0x3f80020000000000,0xbf80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to NEAREST double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to NEAREST double",0xb340000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to NEAREST double",0xbf80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to NEAREST double",0xbf80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEAREST_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to NEAREST double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
};

static DoubleTestDescription DoubleArthmeticTestsToZero[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_ADD ,"ADD RD to ZERO double",0x3ca0000000000000,0x3ff0000000000000,0x3ff0000000000000,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_SUBTRACT ,"SUBTRACT RD to ZERO double",0x3ff0000000000000,0x3ca0000000000000,0x3fefffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_MULTIPLY ,"MULTIPLY RD to ZERO double",0x3ff0000000000400,0x3ff0000000000400,0x3ff0000000000800,0}, 
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_DIVIDE ,"DIVIDE RD to ZERO double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_REMAINDER ,"REMAINDER RD to ZERO double",0x3fffffffffffffff,0x4000000000000001,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_SQUAREROOT,"SQUARE ROOT RD to ZERO double",0x4000000000000000,0x3fb504f300000000,0,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_ADD ,"Neg ADD RD to ZERO double",0xb3ca000000000000,0xbfff000000000000,0xbff0000000000000,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to ZERO double",0xbff0000000000000,0x3ca0000000000000,0xbca0000000000000,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to ZERO double",0x3ff0000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to ZERO double",0xc080000000000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_ADD_QUARTER ,"ADD 1/4 RD to ZERO double",0x3300000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to ZERO double",0x3f80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to ZERO double",0x3f80020000000000,0x3f80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to ZERO double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to ZERO double",0x3340000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to ZERO double",0x3f80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to ZERO double",0x3f80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to ZERO double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to ZERO double",0xb300000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to ZERO double",0xbf80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to ZERO double",0x3f80020000000000,0xbf80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to ZERO double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to ZERO double",0xb340000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to ZERO double",0xbf80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to ZERO double",0xbf80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_ZERO_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to ZERO double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},

};

static DoubleTestDescription DoubleArthmeticTestsToNegativeInfinity[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_ADD ,"ADD RD to NEG INF double",0x3380000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_SUBTRACT ,"SUBTRACT RD to NEG INF double",0x3f80000000000000,0x3380000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_MULTIPLY ,"MULTIPLY RD to NEG INF double",0x3f80040000000000,0x3f80040000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_DIVIDE ,"DIVIDE RD to NEG INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_REMAINDER ,"REMAINDER RD to NEG INF double",0x3fffffff00000000,0x4000000100000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_SQUAREROOT,"SQUARE ROOT RD to NEG INF double",0x4000000000000000,0x3fb504f300000000,0,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_ADD ,"Neg ADD RD to NEG INF double",0xb380000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to NEG INF double",0xbf80000000000000,0x3380000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to NEG INF double",0x3f80040000000000,0xbf80040000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to NEG INF double",0xc080000000000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_ADD_QUARTER ,"ADD 1/4 RD to NEG INF double",0x3300000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to NEG INF double",0x3f80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to NEG INF double",0x3f80020000000000,0x3f80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to NEG INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to NEG INF double",0x3340000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to NEG INF double",0x3f80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to NEG INF double",0x3f80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to NEG INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to NEG INF double",0xb300000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to NEG INF double",0xbf80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to NEG INF double",0x3f80020000000000,0xbf80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to NEG INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to NEG INF double",0xb340000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to NEG INF double",0xbf80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to NEG INF double",0xbf80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_NEGATIVE_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to NEG INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},

};

static DoubleTestDescription DoubleArthmeticTestsToPositiveInfinity[e_ROUNDING_END_OF_LIST] = {
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_ADD ,"ADD RD to POS INF double",0x3380000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_SUBTRACT ,"SUBTRACT RD to POS INF double",0x3f80000000000000,0x3380000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_MULTIPLY ,"MULTIPLY RD to POS INF double",0x3f80040000000000,0x3f80040000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_DIVIDE ,"DIVIDE RD to POS INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_REMAINDER ,"REMAINDER RD to POS INF double",0x3fffffff00000000,0x4000000100000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_SQUAREROOT,"SQUARE ROOT RD to POS INF double",0x4000000000000000,0x3fb504f300000000,0,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_ADD ,"Neg ADD RD to POS INF double",0xb380000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT ,"Neg SUBTRACT RD to POS INF double",0xbf80000000000000,0x3380000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY ,"Neg MULTIPLY RD to POS INF double",0x3f80040000000000,0xbf80040000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE ,"Neg DIVIDE RD to POS INF double",0xc080000000000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_ADD_QUARTER ,"ADD 1/4 RD to POS INF double",0x3300000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_SUBTRACT_QUARTER ,"SUBTRACT 1/4 RD to POS INF double",0x3f80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_MULTIPLY_QUARTER ,"MULTIPLY 1/4 RD to POS INF double",0x3f80020000000000,0x3f80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_DIVIDE_QUARTER ,"DIVIDE 1/4 RD to POS INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_ADD_THREE_QUARTER ,"ADD 3/4 RD to POS INF double",0x3340000000000000,0x3f80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_SUBTRACT_THREE_QUARTER ,"SUBTRACT 3/4 RD to POS INF double",0x3f80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_MULTIPLY_THREE_QUARTER ,"MULTIPLY 3/4 RD to POS INF double",0x3f80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_DIVIDE_THREE_QUARTER ,"DIVIDE 3/4 RD to POS INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_ADD_QUARTER ,"Neg ADD 1/4 RD to POS INF double",0xb300000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_QUARTER ,"Neg SUBTRACT 1/4 RD to POS INF double",0xbf80000000000000,0x3300000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_QUARTER ,"Neg MULTIPLY 1/4 RD to POS INF double",0x3f80020000000000,0xbf80020000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_QUARTER ,"Neg DIVIDE 1/4 RD to POS INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_ADD_THREE_QUARTER ,"Neg ADD 3/4 RD to POS INF double",0xb340000000000000,0xbf80000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_SUBTRACT_THREE_QUARTER ,"Neg SUBTRACT 3/4 RD to POS INF double",0xbf80000000000000,0x3340000000000000,0xffffffffffffffff,0},
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_MULTIPLY_THREE_QUARTER ,"Neg MULTIPLY 3/4 RD to POS INF double",0xbf80050000000000,0x3f80050000000000,0xffffffffffffffff,0}, 
 { ROUND_TO_POSITIVE_TESTS_START_DOUBLE+e_NEGATIVE_DIVIDE_THREE_QUARTER ,"Neg DIVIDE 3/4 RD to POS INF double",0x3f80000100000000,0x4000000000000000,0xffffffffffffffff,0},

};

#endif      
#endif      
