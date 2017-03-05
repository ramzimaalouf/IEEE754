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
  RoundingTests(const int TestType);
  ~RoundingTests();

  bool RunAll ();

  bool ReturnConstructionStatus () const;
 private:
  bool RunFloatRounding();
  bool RunDoubleRounding();
  bool RunLongDoubleRounding();
  char m_cRoundingTypeString[32] ;
  int m_iTestType = -1;
  FloatTestDescription *m_FloatTestDecriptions = NULL;
  DoubleTestDescription *m_DoubleTestDescriptions = NULL;
  int m_iTestOffset = 0;
  bool m_bConstructionStatus = false;

};

#endif
