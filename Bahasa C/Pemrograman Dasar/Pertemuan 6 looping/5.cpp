#include <stdio.h>
#include <stdlib.h>
main()
{
	int i, pilih;
	do
	{
		printf("===========================\n");
		printf("|           MENU           |\n"); 	                             		
		printf("===========================\n");
		printf("| 1. Tampilkan Hai         |\n");
		printf("| 2. Tampilkan Hoi         |\n");
		printf("| 3. Tampilkan Hui         |\n");
		printf("| 4. Keluar                |\n");
		printf("===========================\n");
		printf("| Pilihan [1..4] :         |\n");
		printf("============================\n");
		scanf("%d",&pilih);
		switch(pilih)
		{
			case 1:
				printf("Hai\n\n");
			break;
			case 2:
				printf("Hoi\n\n");
			break;
			case 3:
				printf("Hui\n\n");
			break;
			case 4:
				printf("Byee\n\n");
			break;
			default:
				printf("Anda salah pilih\n\n");
		}
		system("PAUSE");
		system("cls");
	}while(pilih!=4);
		printf("\n\n");
}


