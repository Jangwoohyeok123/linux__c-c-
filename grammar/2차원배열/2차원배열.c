#include <stdio.h>

int main() {
    int aList[3][4] = {
        {10, 20, 30, 40},
        {50, 60, 70, 80},
        {90, 100, 110, 120}
    };


    // c 언어의 2 차원 배열의 문제점 
    // 2차원 배열의 index 계산을 통해 1차원 index 로 변환하는 과정에서 column 에 문제가 있다.
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", aList[i][j]);
        }
        printf("\n");
    }

    return 0;
}