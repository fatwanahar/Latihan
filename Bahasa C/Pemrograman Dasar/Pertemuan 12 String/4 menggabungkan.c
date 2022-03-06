#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char string1[]="aku sedang belajar", string2[]=" jangan ganggu aku",string3[50];
	strcpy(string3,string1);
	printf("hasil strcat adalah = %s\n",strcat(string3,string2));
	printf("hasil strncat adalah = %s\n",strncat(string1,string2,5));
}
