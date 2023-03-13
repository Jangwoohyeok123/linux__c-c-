#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int aList[3] = {0};
    int nMax = -9999;

    for (int i = 0; i < 3; ++i) {
        printf("양의 정수를 입력하세요: ");
        scanf("%d", &aList[i]);
    }

    nMax = getMax(aList[0], aList[1], aList[2]);
    printf("정수중 가장 큰 수는 %d 입니다.", nMax);
}

int getMax(int a, int b, int c) {
    int max = 0;
    if (max < a) max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    return max;
}

// 근본적으로 user 의 입력과 출력이 일어나는 곳은 모아둬야 한다.