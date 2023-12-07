#include <limits.h>

/*@ requires \valid(a + (0..n-1));
    requires n > 0;
    assigns \nothing;
    ensures \result >= 0 ==> a[\result] == \abs(x);
    ensures \result < 0 ==> (\forall integer i; 0 <= i < n ==> a[i] != \abs(x));
*/
int searchabs(int a[], int x, int n)
{
    /*@ loop invariant 0 <= i <= n;
        loop invariant (\forall integer k; 0 <= k < i ==> (a[k] == \abs(x) || a[k] != \abs(x)));
        loop assigns i;
        loop variant n - i;
    */
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == abs(x))
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int result = searchabs(arr, 3, 5);

    return 0;
}