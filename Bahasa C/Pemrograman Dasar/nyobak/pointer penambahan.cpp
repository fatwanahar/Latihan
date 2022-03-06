#include <stdio.h>

void tambah(int angka, int penambah){
    angka = angka + penambah;
}

main(){
    int i,angka = 0,penambah,b,a;
    printf("Masukkan angka awal: ");scanf("%i",&a);
	printf("Masukkan angka penambah: ");scanf("%i",&penambah);
	printf("Masukkan batas: ");scanf("%i",&b);
    printf("angka awal: %d\n", a);
    angka = a;
    for(i=1;i<=b;i++){
    	tambah(angka,penambah);
    	printf("penambahan angka ke - %i = %i\n",i,angka);
	}
    printf("angka terakhir: %d\n", angka);
}
