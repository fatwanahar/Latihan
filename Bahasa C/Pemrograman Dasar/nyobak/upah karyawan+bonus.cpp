#include<stdio.h>
#include<stdlib.h>
main(){
	const int jamnormal=48;
	const int upah=3000;
	char gol;
	int a,lembur,totaljam,totalgaji,jamlembur,b;
	printf("Masukkan jam kerja: ");scanf("%i",&totaljam);
	printf("Masukkan golongan (a-d): "); fflush(stdin);scanf("%c",&gol);
	switch(gol){
		case 'a':
			lembur=4000;
			b=1;
		break;
		case 'b':
			lembur=5000;
			b=1;
		break;
		case 'c':
			lembur=6000;
			b=1;
		break;
		case 'd':
			lembur=7500;
			b=1;
		break;
		default:
			printf("salah memasukkan golongan\n");
			b=0;
	}
	if (b==1){
		if (totaljam>jamnormal){
		jamlembur=totaljam-jamnormal;
		totalgaji=jamlembur*lembur+jamnormal*upah;
		printf("Gaji = Rp%i",totalgaji);
		}
		else{
		totalgaji=totaljam*upah;
		printf("Gaji = Rp%i",totalgaji);	
		}
	}
	else{
	}
}
