#include <stdio.h>


int main() {
    int row = 4;
    for (int i = 1; i <= row; i++) {

        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= (row - i + 1) * 2 - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}