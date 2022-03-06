#include<stdio.h>
main(){
	int i,j;
	printf("PROGRAM DERET KELIPATAN TIGA\n");
	printf("silahkan masukkan batas untuk angka terakhir: "); scanf("%i",&j);
	for(i=3;i<=j;i){
		printf("%i ",i);
		i=i+3;
	}
}
