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

#include "../include.d/globals.h"
#include "../ArthmaticTests.d/arthmatic_templates.h"
#include "rounding_tests_pattern.h"
#include "rounding_tests.h"

RoundingTests::RoundingTests () 
{
  m_bConstructionStatus  = true;
}


RoundingTests::~RoundingTests ()
{
  return;
}

bool RoundingTests::ReturnConstructionStatus () const
{
  return m_bConstructionStatus;
}

bool RoundingTests::RunAll()
{
  RunFloatRoundingToZeroTests();
  RunDoubleRoundingToZeroTests();
  RunLongDoubleRoundingToZeroTests();

  RunFloatRoundingToNearestTests();
  RunDoubleRoundingToNearestTests();
  RunLongDoubleRoundingToNearestTests();

  RunFloatRoundingToNegativeInfinityTests();
  RunDoubleRoundingToNegativeInfinityTests();
  RunLongDoubleRoundingToNegativeInfinityTests();

  RunFloatRoundingToPositiveInfinityTests();
  RunDoubleRoundingToPositiveInfinityTests();
  RunLongDoubleRoundingToPositiveInfinityTests();
  return true;
}

