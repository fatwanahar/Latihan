#include <stdio.h>
#include <stdlib.h>

void jumlah_deret(int batas, int *jumlah);
void jumlah_deret(int batas, int *jumlah)
{
	int x;
	*jumlah = 0;
	for(x=1;x<=batas;x++)
	{
		*jumlah=*jumlah+x;
	}
}
main()
{
	int batas, jumlah;
	printf("Masukkan batas deret : ");
	scanf("%i",&batas);
	jumlah_deret(batas,&jumlah);
	printf("%i\n\n",jumlah);
}

