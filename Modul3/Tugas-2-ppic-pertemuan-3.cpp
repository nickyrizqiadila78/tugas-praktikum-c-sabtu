#include <stdio.h>
#include <math.h>

int main() {
	float alas, tinggi, luas, keliling, sisi_miring;
	
	// Input alas dan tinggi
	printf("Input alas segitiga (cm): ");
	scanf("%f", &alas);
	printf("Input tinggi segitiga (cm): ");
	scanf("%f", &tinggi);
	
	//Hitung luas
	luas = 0.5 * alas * tinggi;
	
	// Hitung sisi miring menggunakan teorema Pythagoras
	sisi_miring = sqrt(alas * alas + tinggi * tinggi);
	
	// Hitung keliling
	keliling = alas + tinggi + sisi_miring;
	
	// Tampilkan hasil
	printf("Luas segitiga: %.2f cm^2\n", luas);
	printf("Luas segitiga: %.2f cm\n", keliling);
	
	return 0;
}