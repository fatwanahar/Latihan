#include <stdio.h>
#include <stdlib.h>
main()
{
	int x[5];	//deklarasi array
	printf("Masukkan nilai 1 :"); scanf("%d",&x[0]);
	printf("Masukkan nilai 2 :"); scanf("%d",&x[1]);
	printf("Masukkan nilai 3 :"); scanf("%d",&x[2]);
	printf("Masukkan nilai 4 :"); scanf("%d",&x[3]);
	printf("Masukkan nilai 5 :"); scanf("%d",&x[4]);
	printf("\n");
	printf("Nilai ke-1 = %d\n",x[0]);
	printf("Nilai ke-2 = %d\n",x[1]);
	printf("Nilai ke-3 = %d\n",x[2]);
	printf("Nilai ke-4 = %d\n",x[3]);
	printf("Nilai ke-5 = %d\n",x[4]);
}

