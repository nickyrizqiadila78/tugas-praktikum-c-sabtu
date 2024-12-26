#include <stdio.h>

int main() {
    int value = 1;
    for (int i = 0; i < 11; i++) {
        printf("%d ", value);
        value *= 2;
    }
    printf("\n");
    return 0;
}