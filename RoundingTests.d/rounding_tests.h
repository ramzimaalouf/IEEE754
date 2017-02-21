/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : rounding_tests.h
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

#if !defined(ROUNDING_TESTS_H_)
#define ROUNDING_TESTS_H_

class RoundingTests
{
 public:
  RoundingTests();
  ~RoundingTests();

  bool RunAll ();
  bool RunFloatRoundingToZeroTests();
  bool RunDoubleRoundingToZeroTests();
  bool RunLongDoubleRoundingToZeroTests();
  
  bool RunFloatRoundingToPositiveInfinityTests();
  bool RunDoubleRoundingToPositiveInfinityTests();
  bool RunLongDoubleRoundingToPositiveInfinityTests();

  bool RunFloatRoundingToNegativeInfinityTests();
  bool RunDoubleRoundingToNegativeInfinityTests();
  bool RunLongDoubleRoundingToNegativeInfinityTests();

  bool RunFloatRoundingToNearestTests();
  bool RunDoubleRoundingToNearestTests();
  bool RunLongDoubleRoundingToNearestTests();

  bool ReturnConstructionStatus () const;
 private:
  bool m_bConstructionStatus;
};

#endif
