#include <stdio.h>
#include <stdlib.h>
main()
{
	int baris,kolom;
	printf("Masukkan jumlah baris :");
	scanf("%d", &baris);
	while(baris>=1)
    {
		kolom=1;
		while(kolom<=baris)
		{
			printf("%i ",baris*kolom);
			kolom++;
		}
		printf("\n");
		baris--;
	}
	printf("\n");
}

