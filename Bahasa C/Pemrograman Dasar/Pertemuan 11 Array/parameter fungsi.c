#include <stdio.h>
#include <stdlib.h>

void input_array(int bil[], int banyak_data)
{
	int i;
	for(i=0;i<banyak_data;i++)
	{
		printf("Nilai bil[%i] :",i+1);
		scanf("%i",&bil[i]);
	}
}

int jumlah_elemen(int bil[], int banyak_data)
{
	int i, jumlah=0;
	for(i=0;i<banyak_data;i++)
	{
		jumlah=jumlah+bil[i];
	}
	return jumlah;
}
main()
{
	int bil[100];	//maksimal elemen
	int banyak_data;
	int jumlah;
	printf("Masukkan banyak elemen yang di inginkan :");
	scanf("%i",&banyak_data);
	printf("\n");

	//memanggil void input array
	input_array(bil,banyak_data);

	//memanggil fungsi elemen
	jumlah = jumlah_elemen(bil,banyak_data);
	
	printf("\n");
	printf("Hasil penjumlahan elemen = %i\n\n",jumlah);
}


