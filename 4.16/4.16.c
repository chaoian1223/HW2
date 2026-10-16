#include <stdio.h>

int main(void) {
    int i, j, space;

    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    printf("(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    printf("(C)\n");
    for (i = 10; i >= 1; i--) {
        for (space = 0; space < 10 - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    printf("(D)\n");
    for (i = 1; i <= 10; i++) {
        for (space = 0; space < 10 - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}