#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string[31];
	char substring[15];
	char *pstring;
	printf("Masukkan string : ");
	fflush(stdin);
	gets(string);
	printf("Masukkan substring : ");
	fflush(stdin);
	gets(substring);
	pstring = strstr(string,substring);
	printf("Sub string = %s\n",pstring);
	printf("Posisi sub string = %i\n\n",(pstring-string)+1);
}

