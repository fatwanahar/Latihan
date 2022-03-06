#include<stdio.h>
main(){
	int pilih;
	float L,r,p,l,phi;
	phi=3.14;
	printf("-------------------------\n");
	printf("program Perhitungan\n");
	printf("-------------------------\n");
	printf("1. Menghitung luas Lingkaran\n");
	printf("2. Menghitung Luas Persegi\n");
	printf("3. Menghitung Luas Persegi Panjang\n");
	printf("\nsilahkan pilih(1/2/3): "); scanf("%i",&pilih);
	printf("\n");
	switch(pilih){
		case 1:
			printf("Menghitung Luas Lingkaran\n");
			printf("-------------------------\n");
			printf("masukkan jari-jari lingkaran: ");scanf("%f",&r);
			printf("-------------------------\n");
			L=phi*r*r;
			printf("Luas Lingkaran: %f\n",L);
		break;
		case 2:
			printf("Menghitung Luas Persegi\n");
			printf("-------------------------\n");
			printf("Masukkan panjang sisi persegi: "); scanf("%f",&p);
			printf("-------------------------\n");
			L=p*p;
			printf("panjang persegi: %.3f\n",L);
		break;
		case 3:
			printf("Menghitung Luas Persegi Panjang\n");
			printf("-------------------------\n");
			printf("Masukkan panjang persegi: "); scanf("%f",&p);
			printf("Masukkan lebar persegi: "); scanf("%f",&l);
			printf("-------------------------\n");
			L=p*l;
			printf("Luas persegi panjang: %.3f\n",L);
		break;
		default:
			printf("Anda Salah Memasukkan Input, Silahkan Coba Lagi\n");
		break;
		
	}
	
}
