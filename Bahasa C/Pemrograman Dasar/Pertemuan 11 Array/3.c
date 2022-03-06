#include <stdio.h>
#include <stdlib.h>

main()
{
	int X[5]={1,2,3,4,5};
	int i;
	for(i=0;i<=4;i++)
	{
		printf("X[%i] default = %i\n", i,X[i]);
	}
	X[2]=30;
	X[3]=40;
	printf("\n");
	for(i=0;i<=4;i++)
	{
		printf("X[%i] = %i\n",i,X[i]);
	}
	printf("\n");
}

