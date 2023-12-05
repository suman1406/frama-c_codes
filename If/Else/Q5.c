/*@
  requires \valid_read(&n);
  requires 1 <= n <= 7;
  ensures 1 <= \result <= 7;
  ensures \result == n;
  assigns \nothing;
*/
int getWeekday(int n)
{
    if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else if (n == 3) {
        return 3;
    } else if (n == 4) {
        return 4;
    } else if (n == 5) {
        return 5;
    } else if (n == 6) {
        return 6;
    } else {
        return 7;
    }
}