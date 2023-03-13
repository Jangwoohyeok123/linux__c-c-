#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;
    int na;
    printf("요소 개수: ");
    scanf("%d", &na);
    puts("");
    a = calloc(na, sizeof(int));

    if (a == NULL) {
        puts("메모리 확보에 실패했다.");
    } else {
        printf("%d개의 정수를 입력하세요.\n", na);
        for (int i = 0; i < na; i++) {
            printf("a[%d]: ", i);
            scanf("%d", &a[i]);
        }

        puts("\n각 요소값은 아래와 같습니다.");
        for (int i = 0; i < na; i++) {
            printf("a[%d]: %d\n", i, a[i]);
        }

        free(a);
    }

    return 0;
}