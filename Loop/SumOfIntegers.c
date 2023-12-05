/*@ requires n >= 0;
    assigns \nothing;
    ensures \result == (n * (n + 1)) / 2;
*/
int sum_of_integers(int n) {
    int sum = 0;
    int i = 1;

    /*@ loop invariant 1 <= i <= n + 1;
        loop invariant sum == (i - 1) * i / 2;
        loop assigns sum,i;
        loop variant n - i + 1;
    */
    while (i <= n) {
        sum += i;
        i++;
    }

    return sum;
}
