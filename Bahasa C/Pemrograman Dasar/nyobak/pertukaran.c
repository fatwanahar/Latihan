#include <stdio.h>
void main(){
	int a,b,c;
	printf("masukkan angka a : ");
	scanf("%i",&a);
	printf("masukkan angka b : ");
	scanf("%i",&b);
	printf("angka sebelum pertukaran\n");
	printf("a= %i\n",a);
	printf("b= %i\n",b);
	c=a;
	a=b;
	b=c;
	printf("angka setelah pertukaran\n");
	printf("a= %i\n",a);
	printf("b= %i\n",b);
		
}
