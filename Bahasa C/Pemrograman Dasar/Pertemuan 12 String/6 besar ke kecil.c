#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string[31];
	printf("Masukkan string : ");
	fflush(stdin);
	gets(string);
	strlwr(string);
	printf("String setelah strlwr = %s\n\n",string);
}

