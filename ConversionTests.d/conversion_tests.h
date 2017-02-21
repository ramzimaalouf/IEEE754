/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : conversion_tests.h
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

#if !defined(CONVERSION_TESTS_H_)
#define CONVERSION_TESTS_H_

class ConversionTests
{
 public:
  ConversionTests();
  ~ConversionTests();
  bool RunAll ();
  bool RunFloatConversionTests();
  bool RunDoubleConversionTests();
  bool RunLongDoubleConversionTests();
  
  bool ReturnConstructionStatus () const;
 private:
  bool m_bConstructionStatus;
};

#endif
