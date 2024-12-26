#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	
	int a;
	
	printf("Masukan Bilangan Bulat: ");
	scanf("%d", &a);
	 
	 if( a%2 == 1) {
	 	printf ("\nGanjil", a);
	 }else {
	 	printf("\nGenap", a);
	 }
	
	return 0;
}