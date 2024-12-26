#include <stdio.h>
#include <math.h>

int main() {
    float alas, tinggi, sisi_miring;

    // Input alas dan tinggi
    printf("Input alas segitiga siku-siku (cm): ");
    scanf("%f", &alas);
    printf("Input tinggi segitiga siku-siku (cm): ");
    scanf("%f", &tinggi);

    // Hitung sisi miring menggunakan rumus Pythagoras
    sisi_miring = sqrt(alas * alas + tinggi * tinggi);

    // Tampilkan hasil
    printf("Sisi miring segitiga: %.2f cm\n", sisi_miring);

    return 0;
}