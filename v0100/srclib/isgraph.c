/*
  Copyright (c) 2014, Alexey Frunze
  2-clause BSD license.
*/
#include "ictype.h"

int isgraph(int c)
{
  return c > ' ' && c <= '~';
}
