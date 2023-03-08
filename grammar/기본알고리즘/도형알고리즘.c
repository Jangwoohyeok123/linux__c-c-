#include <stdio.h>

int main() {
    int length = 5;

    /* 2중 for 문에 대한 이해
        첫 번째 for 문은 row for 문으로 부른다.
        두 번째 for 문은 column for 문으로 부른다.
    */
    printf("<default 2-loop>\n");
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("<same triangle>\n");
    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("<pyramid>");



    return 0;
}