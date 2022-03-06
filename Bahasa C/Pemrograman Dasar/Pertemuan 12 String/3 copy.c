#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char string1[30],string2[30];
	int k;
	printf("Masukkan String: ");fflush(stdin);gets(string1);
	printf("Masukkan banyak karakter yang ingin di salin: ");scanf("%i",&k);
	strcpy(string2,string1);
	printf("Hasil copy strcpy adalah: %s\n",string2);
	strncpy(string2,string1,k);
	string2[k]='\0';
	printf("Hasil copy strncpy adalah: %s\n",string2);
}
