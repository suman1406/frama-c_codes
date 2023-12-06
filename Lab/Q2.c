/*@ requires \valid_read(arr + (0..n-1));
    ensures \result == 1 || \result == 0;
    ensures \forall integer i; 0 <= i < n ==> arr[i] <= 0 ==> \result == 0;
    ensures \exists integer i; 0 <= i < n ==> arr[i] > 0 ==> \result == 1;
    assigns \nothing;
    behavior pos:
        assumes n == 0;
        ensures \result == 0;
        assigns \nothing;

    behavior neg:
        assumes n > 0;
        ensures \result == 1;
        assigns \nothing;

    complete behaviors pos, neg;
    disjoint behaviors pos, neg;
*/
int checkPos(int arr[], int n)
{
    /*@ loop invariant 0 <= i < n;
        loop invariant \forall integer j; 0 <= j < i ==> arr[j] <= 0;
        loop assigns i;
        loop variant n - i;
    */
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            return 1;
        }
    }
    return 0;
}