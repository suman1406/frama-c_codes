/*@
    requires n > 0;
    requires \valid(arr + (0..n-1));
    assigns \nothing;
    ensures \result>= 0 || \result < 0;
*/
int sumOfElements(int arr[], int n)
{
    int sum = 0;
    int i;
    /*@
        loop invariant 0 <= i <= n;
        loop assigns i, sum;
        loop variant n - i;
    */
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
