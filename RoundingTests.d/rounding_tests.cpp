/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : rounding_tests.c
 * 
 * Description : 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2016
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/
#include <fenv.h>
#include <string.h>
#include "../include.d/globals.h"
#include "../ArthmaticTests.d/arthmatic_templates.h"
#include "rounding_tests_pattern.h"
#include "rounding_tests.h"

RoundingTests::RoundingTests (const int TestType) 
{
  switch(TestType) {
  case FE_TONEAREST:
    m_FloatTestDecriptions = FloatArthmeticTestsToNearest;
    m_DoubleTestDescriptions  = NULL ;
    m_bConstructionStatus = true;
    m_iTestType = TestType;
    strcpy(m_cRoundingTypeString, "To Nearest\0");
    break;
  case FE_TOWARDZERO:
    m_FloatTestDecriptions = FloatArthmeticTestsToZero;
    m_DoubleTestDescriptions  = NULL ;
    m_bConstructionStatus = true;
    m_iTestType = TestType;
    strcpy(m_cRoundingTypeString, "Toward Zero\0");
    break;
  case FE_DOWNWARD:
    m_FloatTestDecriptions = FloatArthmeticTestsToNegativeInfinity;
    m_DoubleTestDescriptions  = NULL ;
    m_bConstructionStatus = true;
    m_iTestType = TestType;
    strcpy(m_cRoundingTypeString, "To Negative Infinity\0");
    break;
  case FE_UPWARD:
    m_FloatTestDecriptions = FloatArthmeticTestsToPositiveInfinity;
    m_DoubleTestDescriptions  = NULL ;
    m_bConstructionStatus = true;
    m_iTestType = TestType;
    strcpy(m_cRoundingTypeString, "To Positive InFinity\0");
    break;
  default:
    m_bConstructionStatus  = false;
    break;
  }
}

RoundingTests::~RoundingTests ()
{
  m_bConstructionStatus = false;
  return;
}

bool RoundingTests::ReturnConstructionStatus () const
{
  return m_bConstructionStatus;
}

bool RoundingTests::RunAll()
{
  bool t_bReturn = false;

  do {
    if (g_iVerbosityFlag > 4*DEFAULT_DEBUG_LEVEL) {
      fprintf(stdout,"Rounding set to %s\n",m_cRoundingTypeString);
    }
    t_bReturn = RunFloatRounding();
    if (!t_bReturn) { break; } ;
    // t_bReturn = RunDoubleRounding();
    // if (!t_bReturn) { break; } ;
    //    t_bReturn = RunLongDoubleRounding();
    //   if (!t_bReturn) { break; } ;
  } while (0);

  return t_bReturn;
}

bool RoundingTests::RunFloatRounding()
{

  FloatTestType TestPattern1 ;
  __attribute__ ((unused)) FloatTestType ReturnedPattern; 
  FloatTestType ExpectedPattern;
  bool t_bReturn = true;
  
  /* Set Rounding mode to zero */
  if ((0 != fesetround(m_iTestType)) && (m_iTestType == fegetround())){
    fprintf(stderr, "Failed to change Round %s mode\n",
	    m_cRoundingTypeString);
    t_bReturn = false;
  } else {

    //Square Root 
    TestPattern1.BitPattern =
      m_FloatTestDecriptions[e_SQUAREROOT].FloatPattern1.BitPattern;
    ExpectedPattern.BitPattern =
      m_FloatTestDecriptions[e_SQUAREROOT].FloatPattern2.BitPattern;

    if(!SquareRoot<>(TestPattern1,
		     ExpectedPattern,
		     m_FloatTestDecriptions[e_SQUAREROOT].TestID,
		     m_FloatTestDecriptions[e_SQUAREROOT].Description )) {g_iErrorCount++;};

    RunFloatsSubset(&m_FloatTestDecriptions[e_ADD] ) ;
    RunFloatsSubset(&m_FloatTestDecriptions[e_NEGATIVE_ADD] ) ;
    RunFloatsSubset(&m_FloatTestDecriptions[e_ADD_QUARTER] ) ;
    RunFloatsSubset(&m_FloatTestDecriptions[e_ADD_THREE_QUARTER] ) ;
    RunFloatsSubset(&m_FloatTestDecriptions[e_NEGATIVE_ADD_QUARTER] ) ;
    RunFloatsSubset(&m_FloatTestDecriptions[e_NEGATIVE_ADD_THREE_QUARTER] ) ;

  } 
  return t_bReturn;
}
    
bool RoundingTests::RunDoubleRounding()
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

bool RoundingTests::RunFloatsSubset(FloatTestDescription *FloatDescriptors) const 
{
  FloatTestType TestPattern1 ;
  FloatTestType TestPattern2 ;
  __attribute__ ((unused)) FloatTestType ReturnedPattern; 
  FloatTestType ExpectedPattern;
  bool t_bReturn = true;

  // Add 
  TestPattern1.BitPattern =
    FloatDescriptors[e_ADD].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatDescriptors[e_ADD].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatDescriptors[e_ADD].FloatPattern3.BitPattern;
  
  if (!Add<>(TestPattern1,
	     TestPattern2,
	     ExpectedPattern,
	     FloatDescriptors[e_ADD].TestID,
	     FloatDescriptors[e_ADD].Description )) { g_iErrorCount ++;};

  // Subtract
  TestPattern1.BitPattern =
    FloatDescriptors[e_SUBTRACT].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatDescriptors[e_SUBTRACT].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatDescriptors[e_SUBTRACT].FloatPattern3.BitPattern;
  
  if(!Subtract<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 FloatDescriptors[e_SUBTRACT].TestID,
		 FloatDescriptors[e_SUBTRACT].Description )) {g_iErrorCount++;};

  // Multiply  
  TestPattern1.BitPattern =
    FloatDescriptors[e_MULTIPLY].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatDescriptors[e_MULTIPLY].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatDescriptors[e_MULTIPLY].FloatPattern3.BitPattern;
  
  if(!Multiply<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 FloatDescriptors[e_MULTIPLY].TestID,
		 FloatDescriptors[e_MULTIPLY].Description )) {g_iErrorCount++;};

  // Divide 
  TestPattern1.BitPattern =
    FloatDescriptors[e_DIVIDE].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatDescriptors[e_DIVIDE].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatDescriptors[e_DIVIDE].FloatPattern3.BitPattern;
  
  if(!Divide<>(TestPattern1,
	       TestPattern2,
	       ExpectedPattern,
	       FloatDescriptors[e_DIVIDE].TestID,
	       FloatDescriptors[e_DIVIDE].Description )) {g_iErrorCount++;};
  
  return t_bReturn;
}

bool RoundingTests::RunLongDoubleRounding()
{
#if DO_LONG_DOUBLES
#endif
  return false;
}
