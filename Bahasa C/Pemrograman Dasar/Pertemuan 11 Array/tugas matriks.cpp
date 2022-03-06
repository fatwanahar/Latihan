#include <stdio.h>
main(){
	int A[10][10],B[10][10],i,j,k,ordo,jumlah,z,hasil[10][10];
	ordo=3;
	printf("Masukkan Matriks A\n");
	for(i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("A[%i][%i]: ",i+1,j+1);scanf("%i",&A[i][j]);
		}
	}
	printf("\nMasukkan Matriks B\n");
	for(i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf("B[%i][%i]: ",i+1,j+1);scanf("%i",&B[i][j]);
		}
	}
	for(i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			for(k=0;k<ordo;k++){
				jumlah=jumlah+A[i][k]*B[k][j];
			}
			hasil[i][j]=jumlah;
			jumlah=0;
		}
	}
	printf("\nHasil Perkalian Matriks\n");
	for(i=0;i<ordo;i++){
		for(j=0;j<ordo;j++){
			printf(" %i ",hasil[i][j]);
		}
		printf("\n");
	}
}
