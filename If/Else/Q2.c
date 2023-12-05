/*@
  ensures \result == a || \result == b || \result == c;
  assigns \nothing;

  behavior middle:
    assumes b >= a && b >= c;
    ensures \result == b;
    assigns \nothing;

  behavior smaller:
    assumes c >= a && c >= b;
    ensures \result == c;
    assigns \nothing;

  behavior greater:
    assumes a >= b && a >= c;
    ensures \result == a;
    assigns \nothing;
*/
int max(int a, int b, int c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
