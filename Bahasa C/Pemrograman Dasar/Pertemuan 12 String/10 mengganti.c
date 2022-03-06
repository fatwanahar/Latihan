#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main()
{
	char string[ ]="Saya sedang belajar fungsi string";
	char karakter ='A';
	strnset(string,karakter,11);
	printf("String setelah strnset = %s\n",string);
	strset(string,karakter);
	printf("String setelah strset = %s\n\n",string);
}

