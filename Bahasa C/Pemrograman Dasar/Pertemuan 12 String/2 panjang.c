#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
	char nama[30];
	int panjang;
	printf("Masukkan String: ");fflush(stdin);gets(nama);
	panjang = strlen(nama);
	printf("string yang anda masukkan adalah : %s\n",nama);
	printf("Panjang string yang anda masukkan adalah : %i\n",panjang);	
}
