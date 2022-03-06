#include <stdio.h>
int perkalian(int a, int b)
{
 if(a==0)
 {
 return 0;
 }
 else
 {
 return perkalian(a-1,b)+b;
 }
}
main(){
	int a,b;
	printf("masukkan angka pertama: ");scanf("%i",&a);
	printf("masukkan angka kedua:");scanf("%i",&b);
	printf("%i",perkalian(a,b));
}
