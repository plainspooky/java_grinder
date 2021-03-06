/**
 *  Java Grinder
 *  Author: Michael Kohn
 *   Email: mike@mikekohn.net
 *     Web: http://www.mikekohn.net/
 * License: GPL
 *
 * Copyright 2014-2015 by Michael Kohn
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#include "JavaClass.h"
#include "w65c265sxb_.h"

#define CHECK_FUNC(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->w65c265sxb_##funct##sig(); \
  }

#define CHECK_FUNC_CONST_1(funct,sig) \
  if (strcmp(#funct#sig, method_name) == 0) \
  { \
    return generator->w65c265sxb_##funct##sig(const_val); \
  }

int w65c265sxb(JavaClass *java_class, Generator *generator, char *method_name)
{
  CHECK_FUNC(getChar,)
  CHECK_FUNC(putChar,_C)
  CHECK_FUNC(getInt,)
  CHECK_FUNC(putInt,_I)
  CHECK_FUNC(getString,)
  CHECK_FUNC(putString,_X)

  return -1;
}

int w65c265sxb(JavaClass *java_class, Generator *generator, char *method_name, int const_val)
{
  return -1;
}


