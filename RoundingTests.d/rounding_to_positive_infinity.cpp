/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : rounding_tests.c
 * 
 * Description : 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2015
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/
#include <fenv.h>
#include "../include.d/globals.h"
#include "../ArthmaticTests.d/arthmatic_templates.h"
#include "rounding_tests_pattern.h"
#include "rounding_tests.h"

bool RoundingTests::RunFloatRoundingToPositiveInfinityTests()
{
  FloatTestType TestPattern1 ;
  FloatTestType TestPattern2 ;
  __attribute__ ((unused)) FloatTestType ReturnedPattern; 
  FloatTestType ExpectedPattern;

  bool t_bReturn = true;
  
  /* Set Rounding mode to zero */
  if ((0 != fesetround(FE_UPWARD)) && (FE_UPWARD == fegetround())){
    fprintf(stderr, "Failed to change Round to POSITIVE INFINITY mode\n");
    t_bReturn = false;
  } else {

    // Existence Tests of all operations
    // Add 
    TestPattern1.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_ADD].FloatPattern1.BitPattern;
    TestPattern2.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_ADD].FloatPattern2.BitPattern;
    ExpectedPattern.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_ADD].FloatPattern3.BitPattern;
  
    if (!Add<>(TestPattern1,
	       TestPattern2,
	       ExpectedPattern,
	       FloatArthmeticTestsToPositiveInfinity[e_ADD].TestID,
	       FloatArthmeticTestsToPositiveInfinity[e_ADD].Description )) { g_iErrorCount ++;};
 

    // Subtract
    TestPattern1.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_SUBTRACT].FloatPattern1.BitPattern;
    TestPattern2.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_SUBTRACT].FloatPattern2.BitPattern;
    ExpectedPattern.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_SUBTRACT].FloatPattern3.BitPattern;
  
    if(!Subtract<>(TestPattern1,
		   TestPattern2,
		   ExpectedPattern,
		   FloatArthmeticTestsToPositiveInfinity[e_SUBTRACT].TestID,
		   FloatArthmeticTestsToPositiveInfinity[e_SUBTRACT].Description )) {g_iErrorCount++;};

    // Multiply  
    TestPattern1.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_MULTIPLY].FloatPattern1.BitPattern;
    TestPattern2.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_MULTIPLY].FloatPattern2.BitPattern;
    ExpectedPattern.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_MULTIPLY].FloatPattern3.BitPattern;
  
    if(!Multiply<>(TestPattern1,
		   TestPattern2,
		   ExpectedPattern,
		   FloatArthmeticTestsToPositiveInfinity[e_MULTIPLY].TestID,
		   FloatArthmeticTestsToPositiveInfinity[e_MULTIPLY].Description )) {g_iErrorCount++;};

    // Divide 
    TestPattern1.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_DIVIDE].FloatPattern1.BitPattern;
    TestPattern2.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_DIVIDE].FloatPattern2.BitPattern;
    ExpectedPattern.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_DIVIDE].FloatPattern3.BitPattern;
  
    if(!Divide<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 FloatArthmeticTestsToPositiveInfinity[e_DIVIDE].TestID,
		 FloatArthmeticTestsToPositiveInfinity[e_DIVIDE].Description )) {g_iErrorCount++;};


    //Square Root 
    TestPattern1.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_SQUAREROOT].FloatPattern1.BitPattern;
    ExpectedPattern.BitPattern =
      FloatArthmeticTestsToPositiveInfinity[e_SQUAREROOT].FloatPattern2.BitPattern;

    if(!SquareRoot<>(TestPattern1,
		     ExpectedPattern,
		     FloatArthmeticTestsToPositiveInfinity[e_SQUAREROOT].TestID,
		     FloatArthmeticTestsToPositiveInfinity[e_SQUAREROOT].Description )) {g_iErrorCount++;};

  } 
  return t_bReturn;
}
    
bool RoundingTests::RunDoubleRoundingToPositiveInfinityTests()
{
#if DO_DOUBLES
  DoubleTestType TestPattern1 ;
  DoubleTestType TestPattern2 ;
  __attribute__ ((unused)) DoubleTestType ReturnedPattern; 
  DoubleTestType ExpectedPattern;

  // Existence Tests of all operations
  // Add 
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_ADD].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleArthmeticTests[e_ADD].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_ADD].FloatPattern3.BitPattern;

  if(!Add<>(TestPattern1,
	    TestPattern2,
	    ExpectedPattern,
	    DoubleArthmeticTests[e_ADD].TestID,
	    DoubleArthmeticTests[e_ADD].Description )) {g_iErrorCount++;};

  // Subtract
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_SUBTRACT].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleArthmeticTests[e_SUBTRACT].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_SUBTRACT].FloatPattern3.BitPattern;

  if(!Subtract<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 DoubleArthmeticTests[e_SUBTRACT].TestID,
		 DoubleArthmeticTests[e_SUBTRACT].Description )) {g_iErrorCount++;};


  // Multiply
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_MULTIPLY].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleArthmeticTests[e_MULTIPLY].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_MULTIPLY].FloatPattern3.BitPattern;

  if(!Multiply<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 DoubleArthmeticTests[e_MULTIPLY].TestID,
		 DoubleArthmeticTests[e_MULTIPLY].Description )) {g_iErrorCount++;};


  // Divide
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_DIVIDE].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleArthmeticTests[e_DIVIDE].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_DIVIDE].FloatPattern3.BitPattern;

  if(!Divide<>(TestPattern1,
	       TestPattern2,
	       ExpectedPattern,
	       DoubleArthmeticTests[e_DIVIDE].TestID,
	       DoubleArthmeticTests[e_DIVIDE].Description )) {g_iErrorCount++;};

  //Square Root 
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_SQUAREROOT].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_SQUAREROOT].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
		   ExpectedPattern,
		   DoubleArthmeticTests[e_SQUAREROOT].TestID,
		   DoubleArthmeticTests[e_SQUAREROOT].Description )) {g_iErrorCount++;};

#endif

  return false;
}

bool RoundingTests::RunLongDoubleRoundingToPositiveInfinityTests()
{
#if DO_LONG_DOUBLES
#endif
  return false;
}
