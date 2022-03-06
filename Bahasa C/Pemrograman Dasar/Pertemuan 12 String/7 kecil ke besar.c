#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string[30];
	printf("Masukkan string : ");
	fflush(stdin);
	gets(string);
	strupr(string);
	printf("String setelah strupr = %s\n\n",string);
}

