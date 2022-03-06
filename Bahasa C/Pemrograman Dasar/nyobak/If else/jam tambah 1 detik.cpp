#include<stdio.h>
main(){
	typedef struct jas{
		int h;
		int m;
		int s;
	}clock;
	clock jam;
	printf("masukkan jam: ");scanf("%i",&jam.h);
	printf("Masukkan menit: ");scanf("%i",&jam.m);
	printf("Masukkan detik: ");scanf("%i",&jam.s);
	if (jam.s+1<60){
		jam.s=jam.s+1;
	}
	else{
		jam.s=0;
		jam.m=jam.m+1;
		if (jam.m+1<60){
			jam.m=jam.m;
		}
		else{
			jam.m=0;
			jam.h=jam.h;
			if (jam.h+1<24){
				jam.h=jam.h+1;
			}
			else{
				jam.h=0;
			}		
	}	
	}
	printf("Total Waktu Setelah Penambahan 1 detik adalah %i Jam %i Menit %i Detik",jam.h,jam.m,jam.s);
}
