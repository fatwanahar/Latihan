#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float akar_pangkat(int bil);
float akar_pangkat(int bil)		//bil disini parameter formal
{
	return(sqrt(bil));
}
main()
{
	int a;
	printf("Masukkan bilangan : ");
	scanf("%i",&a);
	printf("Akar pangkat dua = %.2f\n\n",akar_pangkat(a)); //bil disini parameter aktual
}

