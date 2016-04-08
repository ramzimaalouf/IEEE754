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

#include "globals.h"
#include "arthmetic_templates.h"
#include "arthmetic_tests.h"
#include "arthmetic_tests_pattern.h"

MathTests::MathTests () 
{
  m_bConstructionStatus  = true;
}


MathTests::~MathTests ()
{
  return;
}

bool MathTests::RunAll()
{
  RunFloatMathTests();
  RunDoubleMathTests();
  RunLongDoubleMathTests();
  return true;
}

bool MathTests::RunFloatMathTests()
{
  FloatTestType TestPattern1 ;
  FloatTestType TestPattern2 ;
  FloatTestType ReturnedPattern; 
  FloatTestType ExpectedPattern;

  // Existence Tests of all operations
  // Add 
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_ADD].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatArthmeticTests[e_ADD].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_ADD].FloatPattern3.BitPattern;
  
  if (!Add<>(TestPattern1,
	TestPattern2,
	ExpectedPattern,
	FloatArthmeticTests[e_ADD].TestID,
	FloatArthmeticTests[e_ADD].Description )) { g_iErrorCount ++;};
 

  // Subtract
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_SUBTRACT].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatArthmeticTests[e_SUBTRACT].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_SUBTRACT].FloatPattern3.BitPattern;
  
  if(!Subtract<>(TestPattern1,
	TestPattern2,
	ExpectedPattern,
	FloatArthmeticTests[e_SUBTRACT].TestID,
	FloatArthmeticTests[e_SUBTRACT].Description )) {g_iErrorCount++;};

  // Multiply  
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_MULTIPLY].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatArthmeticTests[e_MULTIPLY].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_MULTIPLY].FloatPattern3.BitPattern;
  
  if(!Multiply<>(TestPattern1,
	TestPattern2,
	ExpectedPattern,
	FloatArthmeticTests[e_MULTIPLY].TestID,
	FloatArthmeticTests[e_MULTIPLY].Description )) {g_iErrorCount++;};

  // Divide 
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_DIVIDE].FloatPattern1.BitPattern;
  TestPattern2.BitPattern =
    FloatArthmeticTests[e_DIVIDE].FloatPattern2.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_DIVIDE].FloatPattern3.BitPattern;
  
  if(!Divide<>(TestPattern1,
	TestPattern2,
	ExpectedPattern,
	FloatArthmeticTests[e_DIVIDE].TestID,
	FloatArthmeticTests[e_DIVIDE].Description )) {g_iErrorCount++;};


 //Square Root 
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        FloatArthmeticTests[e_SQUAREROOT].TestID,
        FloatArthmeticTests[e_SQUAREROOT].Description )) {g_iErrorCount++;};

//Square Root
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        FloatArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].TestID,
        FloatArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].Description )) {g_iErrorCount++;};

//Square Root
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        FloatArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].TestID,
        FloatArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].Description )) {g_iErrorCount++;};


//Square Root
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED].TestID,
        FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED].Description )) {g_iErrorCount++;};

//Square Root
  TestPattern1.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED_SMALLEST].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED_SMALLEST].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED_SMALLEST].TestID,
        FloatArthmeticTests[e_SQUAREROOT_DENORMALIZED_SMALLEST].Description )) {g_iErrorCount++;};

  return true;
}
    
bool MathTests::RunDoubleMathTests()
{
#if DO_DOUBLES
  DoubleTestType TestPattern1 ;
  DoubleTestType TestPattern2 ;
  DoubleTestType ReturnedPattern; 
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

//Square Root -0
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        DoubleArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].TestID,
        DoubleArthmeticTests[e_SQUAREROOT_NEGATIVE_ZERO].Description )) {g_iErrorCount++;};

//Square Root +0
  TestPattern1.BitPattern =
    DoubleArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].FloatPattern1.BitPattern;
  ExpectedPattern.BitPattern =
    DoubleArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].FloatPattern2.BitPattern;

  if(!SquareRoot<>(TestPattern1,
        ExpectedPattern,
        DoubleArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].TestID,
        DoubleArthmeticTests[e_SQUAREROOT_POSITIVE_ZERO].Description )) {g_iErrorCount++;};

#endif

  return false;
}

bool MathTests::RunLongDoubleMathTests()
{
#if DO_LONG_DOUBLES
#endif
  return false;
}
