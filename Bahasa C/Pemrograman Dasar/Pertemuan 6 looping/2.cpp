#include<stdio.h>
main(){
	int i,j,k;
	printf("masukkan angka: ");
	scanf("%i",&k);
	for(i=1;i<=k;i++){
		for (j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
