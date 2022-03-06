#include <stdio.h>

main(){
typedef struct{
	long int nip;
	char nama[50];
	char alamat [100];
}data_dosen;
data_dosen dosen1, dosen2, dosen3;

//input
printf("-------------\n");
printf("data dosen 1");
printf("\n");
printf("masukkan nama dosen: "); gets(dosen1.nama);
printf("masukkan nip dosen: "); fflush(stdin); scanf("%li",&dosen1.nip);
printf("masukkan alamat dosen: "); fflush(stdin); gets(dosen1.alamat);
printf("-------------\n");
printf("data dosen 2");
printf("\n");
printf("masukkan nama dosen: "); gets(dosen2.nama);
printf("masukkan nip dosen: "); fflush(stdin); scanf("%li",&dosen2.nip);
printf("masukkan alamat dosen: "); fflush(stdin); gets(dosen2.alamat);
//output
printf("-------------\n");
printf("data dosen 1");
printf("\n");
printf("nama : %s\n",dosen1.nama);
printf("nip : %li\n",dosen1.nip);
printf("alamat : %s\n",dosen1.alamat);
printf("-------------\n");
printf("data dosen 2");
printf("\n");
printf("nama : %s\n",dosen2.nama);
printf("nip : %li\n",dosen2.nip);
printf("alamat : %s\n",dosen2.alamat);

}
