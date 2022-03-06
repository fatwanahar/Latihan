#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string[31];
	printf("Masukkan string : ");
	fflush(stdin);
	gets(string);
	strrev(string);
	printf("String setelah strrev = %s\n\n",string);
}

