#include<stdio.h>
main(){
	typedef struct{
		long int yy;
		long int mm;
		long int dd;
	}tahun;
	tahun y1,y2,y3;
	int hari1,hari2,total,hasil;
	printf("Masukkan total tahun pertama: ");scanf("%li",&y1.yy);
	printf("Masukkan total bulan pertama: ");scanf("%li",&y1.mm);
	printf("Masukkan total hari pertama: ");scanf("%li",&y1.dd);
	hari1=y1.yy*365+y1.mm*30+y1.dd;
	printf("\n");
	printf("Masukkan total tahun kedua: ");scanf("%li",&y2.yy);
	printf("Masukkan total bulan kedua: ");scanf("%li",&y2.mm);
	printf("Masukkan total hari kedua: ");scanf("%li",&y2.dd);
	hari2=y2.yy*365+y2.mm*30+y2.dd;
	printf("\n");
	if(hari2>hari1){
		printf("perhitungan pertama tidak boleh lebih kecil dari hari perhitungan kedua, silahkan coba lagi\n");
	}
	else{
		total=hari1-hari2;
		y3.	yy=total/365;
		hasil=total%365;
		y3.mm=hasil/30;
		hasil=total%30;
		y3.dd=hasil;
		printf("Selisih keduanya adalah %li tahun %li bulan %li hari",y3.yy,y3.mm,y3.dd);
	}
}
