#include <stdio.h>

int main() {
    int A[11] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35}; 
    int i;
    
    printf("Nilai yang dimasukkan dan bernilai genap:\n");
    
    
    for(i = 0; i < 11; i++) {
        if(A[i] % 2 == 0) {  
            printf("%d ", A[i]); 
        }
    }

    printf("\n");

    return 0;
}
