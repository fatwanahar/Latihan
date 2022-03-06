#include<stdio.h>
main(){
	typedef struct{
		long int dd;
		long int hh;
		long int mm;
		long int ss;
	}hari;
	hari d;
	long int sisa,detik;
	printf("Masukkan total detik: "); scanf("%li",&detik);
	d.dd=detik/86400;
	sisa=detik%86400;
	d.hh=sisa/3600;
	sisa=detik%3600;
	d.mm=sisa/60;
	sisa=detik%60;
	d.ss=sisa;
	printf("%li detik adalah %li hari %li jam %li menit %li detik",detik , d.dd, d.hh, d.mm, d.ss);
}
