#include <stdio.h>
main(){
	int a;
	char bulan[20];
	printf("Masukkan Angka Bulan ke-");scanf("%i",&a);
	printf("\n");
	switch (a){
		case 1: printf("Bulan Januari\n");
		break;
		case 2: printf("Bulan Februari\n");
		break;
		case 3: printf("Bulan Maret\n");
		break;
		case 4: printf("Bulan April\n");
		break;
		case 5: printf("Bulan Mei\n");
		break;
		case 6: printf("Bulan Juni\n");
		break;
		case 7: printf("Bulan Juli\n");
		break;
		case 8: printf("Bulan Agustus\n");
		break;
		case 9: printf("Bulan September\n");
		break;
		case 10: printf("Bulan Oktober\n");
		break;
		case 11: printf("Bulan November\n");
		break;
		case 12: printf("Bulan Desember\n");
		break;
		default: printf("Angka Yang Dimasukkan Salah\n");
	}
}
