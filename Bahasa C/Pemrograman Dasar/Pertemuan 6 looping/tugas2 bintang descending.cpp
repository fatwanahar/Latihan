#include<stdio.h>
main(){
	int i,j,k;
	printf("PROGRAM BINTANG DESCENDING\n");
	printf("Masukkan angka: "); scanf("%i",&j);
	for(i=j;i>=1;i--){
		for(k=i;k>=1;k--){
			printf("*");
		}
		printf("\n");
	}
}
