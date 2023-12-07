#include <limits.h>
/*@
requires n>0 && n<INT_MAX;
requires \valid_read(a+(0..n-1));
requires \valid_read(b+(0..n-1));
assigns \nothing;
behavior same:
    assumes \forall integer j;0<=j<n ==> a[j]==b[j];
    ensures \result==1;
behavior notones:
    assumes \exists integer j;0<=j<n && a[j]!=b[j];
    ensures \result==0;
complete behaviors;
disjoint behaviors;
*/
int equ(int a[], int b[], int n)
{
    /*@
    loop invariant 0<=i<=n;
    loop invariant \forall integer j;0<=j<i ==> a[j]==b[j];
    loop assigns i;
    loop variant n-i;
    */
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            return 0;
        }
    }
    return 1;
}