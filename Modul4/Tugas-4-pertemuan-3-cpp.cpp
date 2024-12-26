#include <stdio.h>

int main() {
    int bilangan;

    // Input bilangan bulat
    printf("Input bilangan bulat: ");
    scanf("%d", &bilangan);

    // Cek apakah bilangan ganjil atau genap
    if (bilangan % 2 == 0) {
        printf("Bilangan %d adalah GENAP\n", bilangan);
    } else {
        printf("Bilangan %d adalah GANJIL\n", bilangan);
    }

    return 0;
}