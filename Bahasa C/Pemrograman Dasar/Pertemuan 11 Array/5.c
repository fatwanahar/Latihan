#include <stdio.h>
#include <stdlib.h>
main()
{
	float nilai[10];
	int x,y;
	printf("Mau berapa data[1...10] : ");
	scanf("%d",&y);
	for(x=0;x<y;x++)
	{
		printf("Nilai ke-%i : ",x+1);
		scanf("%f",&nilai[x]);
	}
	printf("\n");
	for(x=0;x<y;x++)
	{
		printf("Nilai ke-%i : %2.f\n",x+1,nilai[x]);
	}
	printf("\n");
}

