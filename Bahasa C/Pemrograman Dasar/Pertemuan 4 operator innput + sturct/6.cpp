#include <stdio.h>
#include <stdlib.h>
typedef struct	//struct pertama
{
	int tanggal;
	int bulan;
	int tahun;
}data_tanggal;
typedef struct	//struct dalam struct
{
	long int nip;
	char nama[30];
	char alamat[60];
	data_tanggal tanggal_lahir;
}data_dosen; 
data_dosen dosen;
main()
{
	// untuk input
	printf("Nip :"); scanf("%li",&dosen.nip);
	printf("Nama :"); fflush(stdin); gets(dosen.nama);
	printf("Alamat :"); fflush(stdin); gets(dosen.alamat);
	printf("Tanggal Lahir :"); 
	scanf("%i",&dosen.tanggal_lahir.tanggal);
	printf("Bulan Lahir :"); 
	scanf("%i",&dosen.tanggal_lahir.bulan);
	printf("Tahun Lahir :"); 
	scanf("%i",&dosen.tanggal_lahir.tahun);
	printf("\n\n");
// untuk output
	printf("Nip : %li\n", dosen.nip);
	printf("Nama : %s\n", dosen.nama);
	printf("Alamat : %s\n", dosen.alamat);
	printf("Tanggal Lahir : %i\n", dosen.tanggal_lahir.tanggal);
	printf("Bulan Lahir : %i\n", dosen.tanggal_lahir.bulan);
	printf("Tahun Lahir : %i\n", dosen.tanggal_lahir.tahun);
	printf("\n\n");
}

