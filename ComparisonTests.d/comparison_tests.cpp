/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : arthmetic_tests.c
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

#include "../include.d/globals.h"
#include "comparison_templates.h"
#include "comparison_tests.h"
#include "comparison_tests_pattern.h"

ComparisonTests::ComparisonTests () 
{
  m_bConstructionStatus  = true;
}


ComparisonTests::~ComparisonTests ()
{
  return;
}

bool ComparisonTests::RunAll()
{
  RunFloatComparisonTests();
  RunDoubleComparisonTests();
  RunLongDoubleComparisonTests();
  return true;
}

bool ComparisonTests::ReturnConstructionStatus () const
{
  return m_bConstructionStatus;
}

bool ComparisonTests::RunFloatComparisonTests()
{
  FloatTestType TestPattern1 ;
  FloatTestType TestPattern2 ;
  bool ExpectedPattern;

  // Existence Tests of all operations
  // Add 
  TestPattern1.BitPattern =
    FloatComparisonTests[e_EQUAL].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatComparisonTests[e_EQUAL].FloatPattern2.BitPattern;
  ExpectedPattern =
    (FloatComparisonTests[e_EQUAL].FloatPattern3.BitPattern > 0 ) ? true: false;
  
  if (!Equal<>(TestPattern1,
	       TestPattern2,
	       ExpectedPattern,
	       FloatComparisonTests[e_EQUAL].TestID,
	       FloatComparisonTests[e_EQUAL].Description ))
    { g_iErrorCount ++;};
 

  // Not Equal
  TestPattern1.BitPattern =
    FloatComparisonTests[e_NOT_EQUAL].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatComparisonTests[e_NOT_EQUAL].FloatPattern2.BitPattern;
  ExpectedPattern =
    (FloatComparisonTests[e_EQUAL].FloatPattern3.BitPattern > 0 ) ? true: false;
  
  if(!NotEqual<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 FloatComparisonTests[e_NOT_EQUAL].TestID,
		 FloatComparisonTests[e_NOT_EQUAL].Description ))
    {g_iErrorCount++;};

  // Greater than 
  TestPattern1.BitPattern =
    FloatComparisonTests[e_GREATER_THAN].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatComparisonTests[e_GREATER_THAN].FloatPattern2.BitPattern;
  ExpectedPattern =
    (FloatComparisonTests[e_EQUAL].FloatPattern3.BitPattern > 0 ) ? true: false;
  
  if(!GreaterThan<>(TestPattern1,
		    TestPattern2,
		    ExpectedPattern,
		    FloatComparisonTests[e_GREATER_THAN].TestID,
		    FloatComparisonTests[e_GREATER_THAN].Description ))
    {g_iErrorCount++;};

  // Less Than
  TestPattern1.BitPattern =
    FloatComparisonTests[e_LESS_THAN].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatComparisonTests[e_LESS_THAN].FloatPattern2.BitPattern;
  ExpectedPattern =
    (FloatComparisonTests[e_EQUAL].FloatPattern3.BitPattern > 0 ) ? true: false;
  
  if(!LessThan<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 FloatComparisonTests[e_LESS_THAN].TestID,
		 FloatComparisonTests[e_LESS_THAN].Description ))
    {g_iErrorCount++;};

  return true;
}
    
bool ComparisonTests::RunDoubleComparisonTests()
{
#if DO_DOUBLES
  DoubleTestType TestPattern1 ;
  DoubleTestType TestPattern2 ;
  bool ExpectedPattern;

  // Existence Tests of all operations
  // Equal 
  TestPattern1.BitPattern =
    DoubleComparisonTests[e_EQUAL].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleComparisonTests[e_EQUAL].FloatPattern2.BitPattern;
  ExpectedPattern =
    (DoubleComparisonTests[e_EQUAL].FloatPattern2.BitPattern > 0) ? true : false;

  if(!Equal<>(TestPattern1,
	      TestPattern2,
	      ExpectedPattern,
	      DoubleComparisonTests[e_EQUAL].TestID,
	      DoubleComparisonTests[e_EQUAL].Description ))
    {g_iErrorCount++;};

  // NotEqual 
  TestPattern1.BitPattern =
    DoubleComparisonTests[e_NOT_EQUAL].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleComparisonTests[e_NOT_EQUAL].FloatPattern2.BitPattern;
  ExpectedPattern =
    (DoubleComparisonTests[e_EQUAL].FloatPattern3.BitPattern > 0) ? true : false;

  if(!NotEqual<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 DoubleComparisonTests[e_NOT_EQUAL].TestID,
		 DoubleComparisonTests[e_NOT_EQUAL].Description )) {g_iErrorCount++;};


  // Greater Than
  TestPattern1.BitPattern =
    DoubleComparisonTests[e_GREATER_THAN].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleComparisonTests[e_GREATER_THAN].FloatPattern2.BitPattern;
  ExpectedPattern =
    (DoubleComparisonTests[e_EQUAL].FloatPattern3.BitPattern > 0) ? true : false;

  if(!GreaterThan<>(TestPattern1,
		    TestPattern2,
		    ExpectedPattern,
		    DoubleComparisonTests[e_GREATER_THAN].TestID,
		    DoubleComparisonTests[e_GREATER_THAN].Description )) {g_iErrorCount++;};


  // Less Than
  TestPattern1.BitPattern =
    DoubleComparisonTests[e_LESS_THAN].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    DoubleComparisonTests[e_LESS_THAN].FloatPattern2.BitPattern;
  ExpectedPattern =
    (DoubleComparisonTests[e_LESS_THAN].FloatPattern3.BitPattern > 0) ? true : false;

  if(!LessThan<>(TestPattern1,
		 TestPattern2,
		 ExpectedPattern,
		 DoubleComparisonTests[e_LESS_THAN].TestID,
		 DoubleComparisonTests[e_LESS_THAN].Description )) {g_iErrorCount++;};

#endif

  return false;
}

bool ComparisonTests::RunLongDoubleComparisonTests()
{
#if DO_LONG_DOUBLES
#endif
  return false;
}
