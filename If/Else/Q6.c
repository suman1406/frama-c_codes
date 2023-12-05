#include <stdio.h>
double gross_salary = 0;

/*@
  requires basic_salary > 0;
  assigns gross_salary;

  behavior less_than_10000:
    assumes basic_salary <= 10000;
    ensures \result == gross_salary;

  behavior less_than_20000:
    assumes basic_salary <= 20000 && basic_salary > 10000;
    ensures \result == gross_salary;

  behavior greater_than_20000:
    assumes basic_salary > 20000;
    ensures \result == gross_salary;

    complete behaviors less_than_10000, less_than_20000, greater_than_20000;
    disjoint behaviors less_than_10000, less_than_20000, greater_than_20000;
*/

double calculateGrossSalary(double basic_salary)
{
    double hra, da;

    if (basic_salary <= 10000)
    {
        hra = 1.0/5.0 * basic_salary;
        da = 8.0/10.0 * basic_salary;
        gross_salary = basic_salary + hra + da;
        return gross_salary;
    }
    else if (basic_salary <= 20000 && basic_salary > 10000)
    {
        hra = 1.0/4.0 * basic_salary;
        da = 9.0/10.0 * basic_salary;
        gross_salary = basic_salary + hra + da;
        return gross_salary;
    }
    else
    {
        hra = 3.0/10.0 * basic_salary;
        da = 95.0/100.0 * basic_salary;
        gross_salary = basic_salary + hra + da;
        return gross_salary;
    }
}