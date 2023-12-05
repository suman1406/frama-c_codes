/*@ requires n > 0;
    requires \valid(arr + (0..n-1));
    assigns \nothing;
    ensures \forall integer i; 0 <= i < n ==> arr[i] <= \result;
*/
int findMax(int arr[], int n) {
    int max = arr[0];
    /*@ loop invariant 1 <= i <= n;
        loop invariant \forall integer j; 0 <= j < i ==> arr[j] <= max;
        loop assigns i,max;
        loop variant n - i;
    */
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
