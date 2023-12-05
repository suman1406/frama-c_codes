#include <stdio.h>

/*@ behavior less:
  @   assumes a < b;
  @   ensures \result == a;
  @   assigns \nothing;
  @
  @ behavior greater:
  @   assumes a >= b;
  @   ensures \result == b;
  @   assigns \nothing;
  @
  @ complete behaviors;
  @ disjoint behaviors;
  @*/
int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}