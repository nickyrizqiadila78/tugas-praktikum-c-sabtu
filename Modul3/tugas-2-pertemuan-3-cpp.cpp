#include <stdio.h>

int main() {
    float celcius, fahrenheit, reamur;

    // Input suhu dalam Celcius
    printf("Input suhu dalam Celcius: ");
    scanf("%f", &celcius);

    // Hitung konversi ke Fahrenheit dan Reamur
    fahrenheit = (9.0/5.0) * celcius + 32;
    reamur = (4.0/5.0) * celcius;

    // Tampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f°F\n", fahrenheit);
    printf("Suhu dalam Reamur: %.2f°R\n", reamur);

    return 0;
}