/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : conversion_tests.h
 * 
 * Description : 
 *   -- This is class definition of ConversionTests
 * 
 * Version : 0.1.0
 * 
 * Created Date : November 05 2016
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
