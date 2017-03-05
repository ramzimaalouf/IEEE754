/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : arthmetic_tests.c
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

#include "../include.d/globals.h"
#include "conversion_templates.h"
#include "conversion_tests.h"
#include "conversion_tests_pattern.h"

ConversionTests::ConversionTests () 
{
  m_bConstructionStatus  = true;
}


ConversionTests::~ConversionTests ()
{
  return;
}

bool ConversionTests::ReturnConstructionStatus () const
{
  return m_bConstructionStatus;
}
bool ConversionTests::RunAll()
{
  RunFloatConversionTests();
  RunDoubleConversionTests();
  RunLongDoubleConversionTests();
  return true;
}

bool ConversionTests::RunFloatConversionTests()
{
  FloatTestType TestPattern1 ;
  __attribute__ ((unused)) FloatTestType TestPattern2 ;
  uint32_t ExpectedPattern;

  // Existence Tests of all operations
  // Convert integer to float` 
  TestPattern1.BitPattern =
    FloatConversionTests[e_FLOAT_INTEGER].FloatPattern1.BitPattern;
  ExpectedPattern =
    FloatConversionTests[e_FLOAT_INTEGER].FloatPattern2.BitPattern;
  
  if (!ConvertToInteger<>(TestPattern1.Number,
	       ExpectedPattern,
	       FloatConversionTests[e_FLOAT_INTEGER].TestID,
	       FloatConversionTests[e_FLOAT_INTEGER].Description ))
    { g_iErrorCount ++;};
 

  // ConvertToInteger
  TestPattern1.BitPattern =
    FloatConversionTests[e_FLOAT_INTEGER].FloatPattern1.BitPattern;
  ExpectedPattern =
    FloatConversionTests[e_FLOAT_INTEGER].FloatPattern2.BitPattern;
  
  if(!ConvertToInteger<>(TestPattern1.Number,
		 ExpectedPattern,
		 FloatConversionTests[e_FLOAT_INTEGER].TestID,
		 FloatConversionTests[e_FLOAT_INTEGER].Description ))
    {g_iErrorCount++;};

  return true;
}
    
bool ConversionTests::RunDoubleConversionTests()
{
#if DO_DOUBLES
  DoubleTestType TestPattern1 ;
  __attribute__ ((unused)) DoubleTestType TestPattern2 ;
  LONG_SIZED_DOUBLE ExpectedPattern;

  // Existence Tests of all operations
  // ConvertToInteger 
  TestPattern1.BitPattern =
    DoubleConversionTests[e_FLOAT_INTEGER].FloatPattern1.BitPattern;
  ExpectedPattern =
    DoubleConversionTests[e_FLOAT_INTEGER].FloatPattern2.BitPattern;

  if(!ConvertToInteger<>(TestPattern1.Number,
	      ExpectedPattern,
	      DoubleConversionTests[e_FLOAT_INTEGER].TestID,
	      DoubleConversionTests[e_FLOAT_INTEGER].Description ))
    {g_iErrorCount++;};

  // ConvertToInteger 
  TestPattern1.BitPattern =
    DoubleConversionTests[e_FLOAT_INTEGER].FloatPattern1.BitPattern;
  ExpectedPattern =
    DoubleConversionTests[e_FLOAT_INTEGER].FloatPattern2.BitPattern;

  if(!ConvertToInteger<>(TestPattern1.Number,
		 ExpectedPattern,
		 DoubleConversionTests[e_FLOAT_INTEGER].TestID,
		 DoubleConversionTests[e_FLOAT_INTEGER].Description )) {g_iErrorCount++;};


#endif

  return false;
}

bool ConversionTests::RunLongDoubleConversionTests()
{
#if DO_LONG_DOUBLES
#endif
  return false;
}
