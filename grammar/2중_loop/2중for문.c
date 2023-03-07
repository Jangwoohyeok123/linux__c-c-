#include <stdio.h>

void rowLoop(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    return;
}

void columnLoop() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return;
}

void diagonalLoop(void) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || i + j == 4)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return;
}
// 대각선 이동은 i 와 j 가 같고, i 와 j 를 더했을 때 최대 인덱스가 나온다면 성립된다.

void main(void) {
    printf("=> 기본 가로이동 이중 loop\n");
    rowLoop();
    printf("\n");

    printf("=> 세로이동 loop\n");
    columnLoop();  // 2중 for
    printf("\n");

    printf("=> 대각선이동 loop\n");
    diagonalLoop();  // 2중 for
    printf("\n");
    return;
}
