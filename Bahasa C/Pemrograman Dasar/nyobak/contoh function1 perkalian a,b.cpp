#include<stdio.h>
int perkalian(int a,int b);
int perkalian(int a,int b){
	int c;
	c=a*b;
	return c;
}
main (){
	int a,b;
	printf("Masukkan angka a: ");scanf("%i",&a);
	printf("Masukkan angka b: ");scanf("%i",&b);
	printf("\nHasil Perkalian: %i\n",perkalian(a,b));
}
