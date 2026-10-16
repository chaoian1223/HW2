#include <stdio.h>

int main(void) {
    printf("Pythagorean Triples (up to 500):\n");
    printf("Side 1\tSide 2\tHypotenuse\n");

    for (int side1 = 1; side1 <= 500; side1++) {
        for (int side2 = 1; side2 <= 500; side2++) {
            for (int hyp = 1; hyp <= 500; hyp++) {
                if ((side1 * side1 + side2 * side2) == (hyp * hyp)) {
                    printf("%d\t%d\t%d\n", side1, side2, hyp);
                }
            }
        }
    }

    return 0;
}