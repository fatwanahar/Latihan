#include <stdio.h>
#include <stdlib.h>
main()
{
	int j=1, m, d;
	do
	{
		m=j*60;
		d=m*60;
		printf("%d jam  %d menit  %d detik\n", j, m, d);
		j++;
	}
	while(j<=10);
	printf("\n");
}

