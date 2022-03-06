#include <stdio.h>
#include <stdlib.h>
main()
{
	int jumlah_data;
	float nilai, rata2, jumlah_nilai;
	jumlah_data=0;
	jumlah_nilai=0;
	printf("Masukkan nilai :");
	scanf("%f",&nilai);
	while((nilai>=0)&&(nilai<=100))
	{
		jumlah_data=jumlah_data+1;
		jumlah_nilai=jumlah_nilai+nilai;
		printf("Masukkan nilai :");
		scanf("%f",&nilai);
	}
	if(jumlah_data!=0)
	{
		rata2=jumlah_nilai/jumlah_data;
		printf("\nRata-rata    =%.2f\n\n",rata2);
	}
	else
	printf("Tidak ada data inputan!\n\n");
}

