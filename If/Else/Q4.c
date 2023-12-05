/*@
ensures \result == 0 || \result == 1;
assigns \nothing;

behavior even:
    assumes a%2 == 0;
    ensures \result == 0;
    assigns \nothing;

behavior odd:
    assumes a%2 == 1;
    ensures \result == 1;
    assigns \nothing;
*/

int check(int a) {
    if (a%2 == 0) {
        return 0;
    } else {
        return 1;
    }
}