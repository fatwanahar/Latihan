#include <stdio.h>
void main(){
	typedef struct {
	long int hh;
	long int mm;
	long int ss;
	} jam;
	jam j;
	long int totaldetik;
	printf("jam: "); scanf("%ld",&j.hh);
	printf("menit: "); scanf("%ld",&j.mm);
	printf("detik: "); scanf("%ld",&j.ss);
	totaldetik = (j.hh*3600) + (j.mm*60) + j.ss;
	printf("totaldetik: %ld",totaldetik);
}
