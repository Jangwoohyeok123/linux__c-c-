#include <stdio.h>

int main(void) {

    int array[10] = { 1, 5, 7, 9, 10, -2, -999, 15, 23,3 };
    for (int i = 0; i < 10; i++) {
        int min = array[i];
        int minIndex = i;

        for (int j = i + 1; j < 10; j++) {
            if (min > array[j]) {
                min = array[j];
                minIndex = j;
            }
        }

        int tmp = array[minIndex];
        array[minIndex] = array[i];
        array[i] = tmp;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}