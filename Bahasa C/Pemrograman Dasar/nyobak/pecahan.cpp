#include<stdio.h>
main(){
	typedef struct{
		int a;
		int b;
	}p;
	p p1,p2,p3;
	printf("Masukkan pembilang pecahan 1: "); scanf("%i",&p1.a);
	printf("Masukkan penyebut pecahan 1: "); scanf("%i",&p1.b);
	printf("Masukkan pembilang pecahan 2: "); scanf("%i",&p2.a);
	printf("Masukkan penyebut pecahan 2: "); scanf("%i",&p2.b);
	printf("\n");
	if(p1.b!=0 && p2.b!=0){
		printf("penjumalahan pecahan adalah %i / %i\n",p3.a=p1.a*p2.b+p1.b*p2.a , p3.b=p1.b*p2.b);
		printf("Pengurangan pecahan adalah %i / %i\n",p3.a=p1.a*p2.b-p2.a*p1.b , p3.b=p1.b*p2.b);
		printf("Perkalian pecahan adalah %i / %i\n",p3.a=p1.a*p2.a, p3.b = p1.b*p2.b);
		printf("Pembagian pecahan adalah %i / %i\n",p3.a=p1.a*p2.b, p3.b = p1.b*p2.a);
	}
	else{
		printf("Pecahan tidak valid\n");
	}
}
