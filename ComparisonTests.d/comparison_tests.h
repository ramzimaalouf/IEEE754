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

#if !defined(COMPARISON_TESTS_H_)
#define COMPARISON_TESTS_H_

class ComparisonTests
{
 public:
  ComparisonTests();
  ~ComparisonTests();
  bool RunAll ();
  bool RunFloatComparisonTests();
  bool RunDoubleComparisonTests();
  bool RunLongDoubleComparisonTests();
  
  bool ReturnConstructionStatus () const;
  
 private:
  bool m_bConstructionStatus;
};

#endif
