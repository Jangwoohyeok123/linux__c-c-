#include <stdio.h>

void rec(int count) {
    printf("apple\n");
    if (count == 3) return;
    rec(count + 1);
    printf("jam\n");
}

int main() {
    rec(1);
    return 0;
}
