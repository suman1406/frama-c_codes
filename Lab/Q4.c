#include <stdio.h>
#include <limits.h>

int a;

/*@ requires bmi > 0;
    assigns  a;
    behavior a1:
      assumes bmi < 18.5;
      ensures \result == a;
    behavior a2:
      assumes bmi >= 18.5 && bmi < 25;
      ensures \result == a;
    behavior a3:
      assumes bmi >= 25 && bmi < 30;
      ensures \result == a;
    behavior a4:
      assumes bmi >= 30;
      ensures \result == a;
    complete behaviors a1, a2, a3, a4;
    disjoint behaviors a1, a2, a3, a4;
*/
int index(float bmi)
{
    if (bmi < 18.5)
    {
        a = 0;
        return a;
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        a = 1;
        return a;
    }
    else if (bmi >= 25 && bmi <30)
    {
        a = 2;
        return a;
    }
    else
    {
        a = 3;
        return a;
    }
}
