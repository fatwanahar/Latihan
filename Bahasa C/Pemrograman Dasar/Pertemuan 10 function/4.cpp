#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void pangkat_dua(float *bil);
void pangkat_dua(float *bil)
{
	*bil=pow(*bil,2);
}
main()
{
	float bilangan;
	printf("Masukkan bilangan : ");
	scanf("%f",&bilangan);
	pangkat_dua(&bilangan);
	printf("pangkat dua = %.0f\n\n",bilangan);
}

