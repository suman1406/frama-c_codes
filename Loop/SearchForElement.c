/*@ requires \valid(arr + (0..n-1));
    requires n > 0;
    requires \forall integer i; 0 <= i < n ==> \valid(arr + i);
    requires \forall integer i; 0 <= i < n ==> \forall integer j; 0 <= j < n ==> i != j ==> arr[i] != arr[j];
    ensures \result == -1 || (0 <= \result < n && arr[\result] == x);
*/
int search(int arr[], int n, int x) {
    /*@ loop invariant 0 <= i <= n;
        loop invariant \forall integer j; 0 <= j < i ==> arr[j] != x;
        loop assigns i;
        loop variant n - i;
    */
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}
