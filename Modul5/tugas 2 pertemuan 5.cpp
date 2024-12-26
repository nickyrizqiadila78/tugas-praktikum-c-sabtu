#include <stdio.h>

int main() {
    int kode;
    char jenis;
    float harga, harga_setelah_diskon, diskon;

    // Input
    printf("Masukkan kode: ");
    scanf("%d", &kode);
    printf("Masukkan jenis (A/B/C): ");
    scanf(" %c", &jenis);
    printf("Masukkan harga: ");
    scanf("%f", &harga);

 
    switch (jenis) {
        case 'A':
            diskon = 0.10;
            break;
        case 'B':
            diskon = 0.15;
            break;
        case 'C':
            diskon = 0.20;
            break;
        default:
            printf("Jenis tidak valid.\n");
            return 1;
    }

    // rumus
    harga_setelah_diskon = harga - (harga * diskon);

    // Output
    printf("Kode: %d\n", kode);
    printf("Jenis: %c\n", jenis);
    printf("Harga setelah diskon: %.2f\n", harga_setelah_diskon);

    return 0;
}