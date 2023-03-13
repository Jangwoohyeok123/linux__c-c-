#include <stdio.h>
#include <stdlib.h>
int printUI();

int main() {
    int menu;
    while ((menu = printUI()) != 0) {
        switch (menu) {
            case 1:
                puts("기능1");
                break;
            case 2:
                puts("기능2");
                break;
            case 3:
                puts("기능3");
                break;
            case 4:
                puts("기능4");
                break;
            default:
                puts("알 수 없는 명령어 입니다. 다시 한 번 입력해주세요.");
                break;
        }
    }

    printf("안녕히 가세요.");
    return 0;
}

int printUI() {
    int input;
    printf("[1]New [2]Search [3]Print [4]Remove [0]Exit\n: ");
    scanf("%d", &input);
    return input;
}