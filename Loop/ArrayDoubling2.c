/*@
requires n > 0;
requires \valid(a + (0..n-1));
ensures \forall integer k; 0 <= k < n ==> a[k] == 2 * \old(a[k]);
*/
void arraydouble(int *a, int n)
{
    /*@
   loop invariant 0 <= p <= n;
   loop invariant \forall integer k; 0 <= k < p ==> a[k] == 2 * \at(a[k], LoopEntry);
   loop invariant \forall integer k; p <= k < n ==> a[k] == \at(a[k], LoopEntry);
   loop assigns p, a[0..n-1];
   loop variant n-p;
    */
    for (int p = 0; p < n; p++)
    {
        a[p] = a[p] * 2;
    }
}