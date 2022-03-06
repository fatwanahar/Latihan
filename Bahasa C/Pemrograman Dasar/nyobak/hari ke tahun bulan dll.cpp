#include<stdio.h>
main(){
	typedef struct{
		long int yy;
		long int mm;
		long int dd;
	}tahun;
	tahun y;
	long int sisa,hari;
	printf("Masukkan total hari: "); scanf("%li",&hari);
	y.yy=hari/365;
	sisa=hari%365;
	y.mm=sisa/30;
	sisa=hari%30;
	y.dd=sisa;
	printf("%li hari adalah %li tahun %li bulan %li hari",hari,y.yy,y.mm,y.dd);
}
