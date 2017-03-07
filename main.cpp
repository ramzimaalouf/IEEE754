/*******************************************************************************
 * Copyright 2016 Ramzi Maalouf (fourthmuskeeter@yahoo.com)
 *               All Rights Reserved
 *
 * File Name : main.cpp
 *
 * Description :
 *   -- this exeutable tests compliance with IEEE 754 (currently 1985) standard
 *   -- 
 *
 * Version : 0.1.0
 *
 * Created Date : Novemeber 05 2016
 *
 * Modification History :
 *    0.1    RSM    Initial Release
 *
 ******************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <fenv.h>
#include <stdint.h>
#include "time.h"
#include "include.d/globals.h"
#include "include.d/defined_tests.h"

/* version number.  Note: the bug release is a normally a date code */
#define MAJOR_REVISION 0
#define MINOR_REVISION 1
#if !defined(BUG_RELEASE_REVISION)
#define BUG_RELEASE_REVISION "0000000"
#endif

int g_iVerbosityFlag;
int g_iErrorCount;
int g_iIntermediateRegisterWidth;

static struct option long_options[] =
  {
    /* These options set a flag. */
    {"brief",   no_argument, &g_iVerbosityFlag, 0},
    /* These options don't set a flag.
       We distinguish them by their indices. */
    {"debug_level",   required_argument, 0, 'd'}, 
    {"intermediate_register_width",   required_argument, 0, 'w'}, 
    {"help",       no_argument,             0 ,'h'},
    {"version", no_argument,0,'v'},
    {0, 0, 0, 0}
  };
/* prototypes */
void Usage (char *Name);
void Version (char *Name);

int main(int argc, char *argv[])
{
  int  c = -1;
  int option_index = 0;
  int t_iError = 0;
  MathTests *pMathTest = NULL;
  ComparisonTests *pComparisonTest = NULL;
  ConversionTests *pConversionTest = NULL;
  RoundingTests *pRoundingTest = NULL;
  g_iVerbosityFlag = DEFAULT_DEBUG_LEVEL;
  g_iIntermediateRegisterWidth = 0;


  if (argc == 1) {
    fprintf(stdout,"%s: No passed Parameters using defaults!\n",argv[0]);
  } 
  
  while ((c = getopt_long (argc, argv, "hvd:w:",
			   long_options, 
			   &option_index)) != -1) {
    switch (c)
      {
      case 'd':
	g_iVerbosityFlag = strtoul(optarg,(char **)NULL,10);
	break; 
      case 'w':
	g_iIntermediateRegisterWidth = strtoul(optarg,(char **)NULL,10);
	break; 
      case 'h':
	Usage(argv[0]);
        t_iError = 1;
	/* getopt_long already printed an error message. */
	break;
      case 'v':
        Version(argv[0]);
        t_iError = 1;
        break;
      } 
  }

  if (t_iError == 0) {
    if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
    Version(argv[0]);
    fprintf(stdout,"%s:\tDebug Level:\t %d\n",argv[0],g_iVerbosityFlag);
    fprintf(stdout,"%s:\tIntermediate Register Width:\t %d\n",argv[0],g_iIntermediateRegisterWidth);
    }
    g_iErrorCount= 0;

    pMathTest = new MathTests;
    if (pMathTest->ReturnConstuctionStatus()) {
      pMathTest->RunAll();
    }
    delete pMathTest;
    pMathTest = NULL;

    pComparisonTest = new ComparisonTests;
    if (pComparisonTest->ReturnConstructionStatus()) {
      pComparisonTest->RunAll();
    }
    delete pComparisonTest;
    pComparisonTest = NULL;

    pConversionTest = new ConversionTests;
    if (pConversionTest->ReturnConstructionStatus()) {
      pConversionTest->RunAll();
    }

    delete pConversionTest;
    pConversionTest = NULL;

    /* All Rounding Tests */
    pRoundingTest = new RoundingTests (FE_TOWARDZERO);
    if (pRoundingTest->ReturnConstructionStatus()) {
      pRoundingTest->RunAll();
    }

    delete pRoundingTest;
    pRoundingTest = NULL;

    pRoundingTest = new RoundingTests (FE_TONEAREST);
    if (pRoundingTest->ReturnConstructionStatus()) {
      pRoundingTest->RunAll();
    }

    delete pRoundingTest;
    pRoundingTest = NULL;

    pRoundingTest = new RoundingTests (FE_UPWARD);
    if (pRoundingTest->ReturnConstructionStatus()) {
      pRoundingTest->RunAll();
    }

    delete pRoundingTest;
    pRoundingTest = NULL;


    pRoundingTest = new RoundingTests (FE_DOWNWARD);
    if (pRoundingTest->ReturnConstructionStatus()) {
      pRoundingTest->RunAll();
    }

    delete pRoundingTest;
    pRoundingTest = NULL;

    fprintf(stdout,"%s: Done Error Count %d\n",argv[0],g_iErrorCount);
  } 
  return t_iError;
}

void Usage (char *Name) 
{
  fprintf(stdout,"%s Usage\n",Name);
  fprintf(stdout, "--verbose:\t\t (default on) prints information to stdout\n");
  fprintf(stdout, "--brief:\t\t (default off) runs quiet\n");
  fprintf(stdout, "-d, --debug_level:\t debug level\n"); 
  fprintf(stdout, "-h, --help: \t\t this menu\n");
  fprintf(stdout, "-w, --intermediate_register_width: \t\t size of intermediate register\n");
  return ;
}

void Version(char *Name)
{
  fprintf(stdout, "%s: Compiled on %s %s\n",Name,
	  CompileDate,CompileTime);
  fprintf(stdout, "%s: Release %d.%d.%s\n",Name,
	  MAJOR_REVISION,
	  MINOR_REVISION,
	  BUG_RELEASE_REVISION);

  return;
}
