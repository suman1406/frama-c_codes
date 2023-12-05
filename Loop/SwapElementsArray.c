/*@ requires \valid(arr + (0..n-1));
    ensures \forall integer i; 0 <= i < n ==> arr[i] == \old(arr[n-1-i]);
    assigns arr[0..n-1];
*/
void swapElements(int arr[], int n) {
    /*@ loop invariant 0 <= i <= n/2;
        loop invariant \forall integer j; 0 <= j < i ==> arr[j] == \old(arr[n-1-j]);
        loop assigns i, arr[0..n-1];
        loop variant n/2 - i;
    */
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}
