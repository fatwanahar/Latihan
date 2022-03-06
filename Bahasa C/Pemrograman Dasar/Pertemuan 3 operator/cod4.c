#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
	printf("Ukuran karakter = %d byte\n",sizeof(char));
	printf("Ukuran integer = %d byte\n",sizeof(int));
	printf("Ukuran long integer = %d byte\n",sizeof(long int));
	printf("Ukuran float = %d byte\n",sizeof(float));
	printf("Ukuran double = %d byte\n",sizeof(double));
	printf("Ukuran long double = %d byte\n",sizeof(long double));
	return 0;
}

