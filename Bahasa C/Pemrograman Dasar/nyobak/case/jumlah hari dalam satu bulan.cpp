#include<stdio.h>
main(){
	int nomorbulan,tahun,jumlahhari;
	printf("Masukkan Nomer Bulan(1-12): ");scanf("%i",&nomorbulan);
	printf("Masukkan tahun: ");scanf("%i",&tahun);
	switch (nomorbulan){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			jumlahhari=31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			jumlahhari=30;
			break;
		case 2:
			if (tahun%4==0&&tahun%100==0||tahun%400==0){
				jumlahhari=29;
			}
			else {
				jumlahhari=28;
			}
	}
	printf("Jumlah hari pada bulan %i tahun %i adalah %i",nomorbulan,tahun,jumlahhari);
}
