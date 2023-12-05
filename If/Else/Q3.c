/*@
    ensures \result == 0 || \result == 1 || \result == 2;
    assigns \nothing;

    behavior negative:
        assumes a < 0;
        ensures \result == 0;
        assigns \nothing;

    behavior positive:
        assumes a > 0;
        ensures \result == 1;
        assigns \nothing;

    behavior zero:
        assumes a == 0;
        ensures \result == 2;
        assigns \nothing;
*/

int check (int a) {
    if (a < 0) {
        return 0;
    } else if (a > 0) {
        return 1;
    } else {
        return 2;
    }
}