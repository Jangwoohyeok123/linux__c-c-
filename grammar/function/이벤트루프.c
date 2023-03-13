#include <stdio.h>
int printUI();
// event loop 란 입력과 출력을 여러번하는 함수를 말한다.

int main() {
    int menuNum;
    while (menuNum = printUI()) {
        switch (menuNum) {
            case 1:
                puts("기능1의 값을 받아온 뒤 main 함수에서 출력\n");
                break;
            case 2:
                puts("기능2의 값을 받아온 뒤 main 함수에서 출력\n");
                break;
            case 3:
                puts("기능3의 값을 받아온 뒤 main 함수에서 출력\n");
                break;
            case 4:
                puts("기능4의 값을 받아온 뒤 main 함수에서 출력\n");
                break;
            case 0:
                puts("exit 합니다. == 유저가 종료키 누름\n");
                break;
            default:
                puts("기능이 없기에 오류 메시지 출력\n");
        }
    }
    printf("안녕히 가세요! == 창 닫힘\n");
    return 0;
}

int printUI() {
    int select;
    printf("[1]기능1 [2]기능2 [3]기능3 [4]기능4 [0]exit\n번호를 입력해주세요: ");
    scanf("%d", &select);
    return select;
}