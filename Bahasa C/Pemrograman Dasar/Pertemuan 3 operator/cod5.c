#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) 
{
	int A=10, B=10;
	printf("%d < %d hasilnya adalah %d\n", A, B, A<B);
	printf("%d <= %d hasilnya adalah %d\n", A, B, A<=B);
	printf("%d > %d hasilnya adalah %d\n", A, B, A>B);
	printf("%d >= %d hasilnya adalah %d\n", A, B, A>=B);
	printf("%d == %d hasilnya adalah %d\n", A, B, A==B);
	printf("%d != %d hasilnya adalah %d\n", A, B, A!=B);
	return 0;
}

