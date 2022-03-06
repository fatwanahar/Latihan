#include <stdio.h>
#include <stdlib.h>

main()
{
	int i;
	char nama[5]={'A','D','@','m','\0'};
	char nama2[5]="Ad@m";
	printf("Array per karakter = ");
	for(i=0;i<=4;i++)
	{
		printf("%c",nama[i]);
	}
	printf("\n");
	printf("Array string = %s\n\n",nama2);
}

