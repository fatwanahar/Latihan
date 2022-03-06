#include <stdio.h>
#include <stdlib.h>
main()
{
	int nilai;
	printf("Masukkan nilai 1 - 3 ?");
	scanf("%d",&nilai);
	switch(nilai)
	{
		case 1:
		printf("satu\n");
		break;
		case 2:
		printf("dua\n");
		break;
		case 3:
		printf("tiga\n");
		break;
		default:
		printf("Bukan nilai 1,2 atau 3\n");
		break;
	}
}

