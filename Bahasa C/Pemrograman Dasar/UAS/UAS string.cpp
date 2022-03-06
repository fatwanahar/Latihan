#include<stdio.h>
#include<string.h>
main(){
	char a[50],b[50];
	printf("masukkan teks1: ");fflush(stdin);gets(a);
	printf("masukkan teks2: ");fflush(stdin);gets(b);
	printf("hasil penggabungan kedua teks adalah: %s\n",strcat(a,b));
	
}
