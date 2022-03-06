#include <stdio.h>
#include <stdlib.h>

void perkalian_lima(int bil);
main()
{
	int bil_isi;
	printf("Masukkan bilangan : ");
	scanf("%i",&bil_isi);
	perkalian_lima(bil_isi);
	printf("Bilangan input : %i\n\n",bil_isi);
}

void perkalian_lima(int bil)
{
	bil=bil*5;
	printf("Hasil Perkalian Lima : %i\n",bil);
}

