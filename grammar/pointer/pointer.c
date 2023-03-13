#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // pointer는 연산을 위해서 앞을 지정하고, 뒤는 아키텍쳐에 따라 저장되는 크기가 달라지며 자의적으로 조절할 수 없다.
    int v = 5;
    int* ptr = &v;  // 읽는 방법: integer 에 대한 포인터 => 값은 8byte 고 포인터 연산은 4 바이트 단위로 움직인다.
    printf("%d\n", sizeof(ptr));
    printf("주소: %p\n", ptr);
    ptr += 1;
    printf("주소: %p\n", ptr);

    // pointer의 연산 기본단위는 변수를 선언할 당시에 타입에 의하여 결정된다.
    // 변수는 시작주소와 크기를 안다면 값을 부여할 수 있게된다.
    return 0;
}
