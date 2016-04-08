/*******************************************************************************
 * Copyright 2015 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All rights reserved.
 * 
 * File Name : arthmetic_tests.h
 * 
 * Description : 
 *     -- the is the interface of the test that will be used by main()
 * Version : 0.1.0
 * 
 * Created Date : November 05 2015
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#if !defined(ARTHMETIC_TESTS_H_)
#define ARTHMETIC_TESTS_H_

class MathTests
{
 public:
  MathTests();
  ~MathTests();
  bool RunAll ();
  bool RunFloatMathTests();
  bool RunDoubleMathTests();
  bool RunLongDoubleMathTests();
  
  bool m_bConstructionStatus;
 private:

};

#endif
