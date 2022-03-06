#include<stdio.h>
#include<math.h>
main(){
	float p,l,L,k,d;
	int pil;
	printf("Menu Empat Persegi Panjang\n");
	printf("1.Hitung Luas\n");
	printf("2.Hitung Keliling\n");
	printf("3.Hitung Panjang Diagonal\n");
	printf("4.Keluar Program\n\n");
	printf("Masukkan pilihan 1-4: ");scanf("%i",&pil);
	switch(pil){
		case 1:
			printf("Masukkan Panjang: "); scanf("%f",&p);
			printf("Masukkan lebar: "); scanf("%f",&l);
			printf("Luas Persegi panjang: %.2f\n",L=l*p);
		break;
		case 2:
			printf("Masukkan Panjang: "); scanf("%f",&p);
			printf("Masukkan lebar: "); scanf("%f",&l);
			printf("Keliling Persegi Panjang: %.2f\n",k=2*p+2*l);
		break;
		case 3:
			printf("Masukkan Panjang: "); scanf("%f",&p);
			printf("Masukkan lebar: "); scanf("%f",&l);
			printf("Diagonal Persegi Panjang: %.2f\n",d=sqrt(2*p+2*l));
		break;
		default: 
			printf("Keluar program");
	}
}
