/*******************************************************************************
 * Copyleft 2025 Ramzi Maalouf (fourthmuskeeter@yahoo.com).
 *      All lefts reserved.
 * 
 * File Name : ArthmaticTemplates.c
 * 
 * Description : 
 *   -- this defines the templates for testing.  This will be used for float
 *   -- or double (if enabled).
 * Version : 0.1.0
 * 
 * Created Date : November 05 2025
 * 
 * Modification History :
 *    0.1    RSM    Initial Release
 * 
 ******************************************************************************/

#include <stdio.h>
#include <math.h>
#include "../include.d/globals.h"

#if !defined(ARTHMATIC_TEMPLATES_H_)
#define ARTHMATIC_TEMPLATES_H_

template <class TypeA, class TypeB, class TypeC>
  bool Add(TypeA Input1, TypeB Input2, TypeC Expected, int TestID, char *Description) {
  TypeC Result;
  int t_iNumberOfBytes = sizeof(Result.BitPattern);
  bool t_bReturn = true;
  char t_pFormat [80];
 
  Result.Number = Input1.Number + Input2.Number;
  if (Result.BitPattern != Expected.BitPattern ) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");
    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result.BitPattern);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern ^ Result.BitPattern);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

 return t_bReturn;
}

template <class TypeA, class TypeB, class TypeC>
  bool Subtract(TypeA Input1, TypeB Input2, TypeC Expected, int TestID, char *Description) {


  TypeC Result;
  int t_iNumberOfBytes = sizeof(Result.BitPattern);
  bool t_bReturn = true;
  char t_pFormat [80];

 
  Result.Number = Input1.Number - Input2.Number;
  if (Result.BitPattern != Expected.BitPattern ) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");
    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result.BitPattern);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern ^ Result.BitPattern);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn;
}

template <class TypeA, class TypeB, class TypeC>
  bool Multiply(TypeA Input1, TypeB Input2, TypeC Expected, int TestID, char *Description) {
  TypeC Result;
  int t_iNumberOfBytes = sizeof(Result.BitPattern);
  char t_pFormat [80];
  bool t_bReturn = true;

  Result.Number = Input1.Number * Input2.Number;
  if (Result.BitPattern != Expected.BitPattern ) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");
    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result.BitPattern);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern ^ Result.BitPattern);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn;
}

template <class TypeA, class TypeB, class TypeC>
  bool Divide(TypeA Input1, TypeB Input2, TypeC Expected, int TestID, char *Description) {
  TypeC Result;
  int t_iNumberOfBytes = sizeof(Result.BitPattern);
  char t_pFormat [80];
  bool t_bReturn = true;

  Result.Number = Input1.Number / Input2.Number;

  if (Result.BitPattern != Expected.BitPattern ) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");
    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result.BitPattern);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern ^ Result.BitPattern);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else  if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL)  {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

 return t_bReturn;
}

template <class TypeA, class TypeB, class TypeC>
  bool Remainder(TypeA Input1, TypeB Input2, TypeC Expected, int TestID, char *Description) {
  TypeC Result;
  int t_iNumberOfBytes = sizeof(Result.BitPattern);
  char t_pFormat [80];
  bool t_bReturn = true;

  Result.Number = Input1.Number % Input2.Number;

  if (Result.BitPattern != Expected.BitPattern ) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");
    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result.BitPattern);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern ^ Result.BitPattern);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL)  {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn ;
}

template <class TypeA , class TypeB >
  bool SquareRoot(TypeA Input1, TypeB Expected, int TestID, char *Description) {
  TypeB Result;
  int t_iNumberOfBytes = sizeof(Result.BitPattern);
  char t_pFormat [80];
  bool t_bReturn = true;

  Result.Number = sqrt(Input1.Number);

  if (Result.BitPattern != Expected.BitPattern ) {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
  fprintf(stdout, " Result %f Expected Value %g \n",Result.Number, Input1.Number);
    sprintf(t_pFormat,"%%s 0x%%*.*%s ",(t_iNumberOfBytes==SIZEOF_LONG_LONG)?"llx":"x");
    fprintf(stdout,t_pFormat,"Failed Result ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Result.BitPattern);
    fprintf(stdout,t_pFormat,"Expected ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern);
    fprintf(stdout,t_pFormat,"Difference ", t_iNumberOfBytes*2,t_iNumberOfBytes*2,Expected.BitPattern ^ Result.BitPattern);
    fprintf(stdout,"\n");
    t_bReturn = false;
  } else   if (g_iVerbosityFlag >= DEFAULT_DEBUG_LEVEL)  {
  fprintf(stdout, "Test ID: %4.4d %-30.30s ",TestID, Description);
    fprintf(stdout,"Passed\n");
  }

  return t_bReturn ;
}

#endif
