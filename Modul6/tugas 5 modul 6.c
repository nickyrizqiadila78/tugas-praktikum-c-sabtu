#include <stdio.h>

int main() {
    double saldo = 1000000; // saldo awal
    double bunga = 0.02;    // bunga 2%

    for (int i = 1; i <= 10; i++) {
        saldo += saldo * bunga; // tambah bunga ke saldo
    }

    printf("Saldo setelah 10 bulan: Rp %.2lf\n", saldo);
    return 0;
}