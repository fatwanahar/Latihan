#include<stdio.h>
#include<stdlib.h>
int main(){
	int ordo,i,j,matriks1[10][10],matriks2[10][10];
	printf("Masukkan ordo:"); scanf("%i",&ordo);
	//matriks ke-1
	printf("Masukkan Matriks A: \n");
	for (i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("A[%i][%i]: ",i+1,j+1); 
			scanf("%i",&matriks1[i][j]);
		}
	}
	//output matriks 1
	printf("\n");
	printf("Matriks A yang anda masukkan sebagai Berikut\n");
	for (i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("%3d",matriks1[i][j]);
		}
		printf("\n");
	}
	system("PAUSE");
	//matriks ke-2
	printf("\n");
	printf("Masukkan Matriks B: \n");
	for (i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("A[%i][%i]: ",i+1,j+1); 
			scanf("%i",&matriks2[i][j]);
		}
	}
	//output matriks 2
	printf("\n");
	printf("Matriks B yang anda masukkan sebagai Berikut\n");
	for (i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("%3d",matriks1[i][j]);
		}
		printf("\n");
	}
	system("PAUSE");
	//penjumlahan matriks
	printf("\n");
	printf("Hasil Penjumlahan kedua matriks tersebut adalah Sebagai Berikut: \n");
	for (i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("%3d",matriks1[i][j]+matriks2[i][j]);
		}
		printf("\n");
	}
return 0;
}

