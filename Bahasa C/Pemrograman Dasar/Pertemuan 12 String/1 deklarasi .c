#include<stdio.h>
main(){
	char nama1[50];
	char *nama2 = "faishal muttaqin";
	printf("Masukkan nama pertama: ");fflush(stdin);gets(nama1);
	printf("nama pertama = %s\n",nama1);
	printf("nama kedua = %s\n",nama2);
}
