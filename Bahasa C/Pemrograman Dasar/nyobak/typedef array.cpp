#include<stdio.h>

#define maks 100
typedef struct{
	long int nip;
	char nama [100];
	char alamat [100];
}data_dosen;
data_dosen dosen[maks];
main(){
	int i,j;
	printf("-------------------\n");
	printf("ingin memasukkan berapa dosen?");
	scanf("%i",&j);
	printf("-------------------\n");
	printf("\n");
	for (i=0;i<j;i++){
		
		printf("Masukkan data dosen ke-%i\n",i+1);
		printf("-------------------\n");
		printf("nama : "); fflush(stdin); gets(dosen[i].nama);
		printf("nip : "); fflush(stdin); scanf("%li",&dosen[1].nip);
		printf("alamat : "); fflush (stdin); gets(dosen[i].alamat);
		printf("-------------------\n");
		printf("\n");
	}
	printf("-------------------\n");
	printf("DATA DATA DOSEN YANG TELAH DIMASUKKAN\n");
	printf("-------------------\n");
	printf("\n");
	for (i=0;i<j;i++){
		printf("data dosen ke-%i\n",i+1);
		printf("-------------------\n");
		printf("nama : %s\n",dosen[i].nama);
		printf("nip : %li\n",dosen[i].nip); 
		printf("alamat : %s\n",dosen[i].alamat);
		printf("-------------------\n"); 
		printf("\n");
	}
	
}
