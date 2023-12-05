/*@ requires \valid(arr + (0..n-1));
    requires n > 0;
    ensures \result >= -1 && \result < n;
    ensures \result == -1 || arr[\result] == x;
*/
int linearSearch(int arr[], int n, int x) {
    int i;
    /*@ loop invariant 0 <= i <= n;
        loop invariant \forall integer j; 0 <= j < i ==> arr[j] != x;
        loop assigns i;
        loop variant n - i;
    */
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}