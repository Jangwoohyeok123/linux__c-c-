#include<stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("양수를 입력하세요: ");
    scanf("%d", &a);
    printf("양수를 입력하세요: ");
    scanf("%d", &b);
    printf("양수를 입력하세요: ");
    scanf("%d", &c);

    max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("최대값은 %d", max);
    return 0;
}


// 모든 숫자에게 max 와의 비교를 통해 값을 구할 수 있다.