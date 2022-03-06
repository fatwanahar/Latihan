#include <stdio.h>
main(){
	char nama[40],indeks;
	int nilai,a;
	printf("masukkan namamu: ");fflush(stdin);gets(nama);
	printf("masukkan nilai: ");scanf("%i",&nilai);
	if(nilai>=0&&nilai<=100){
		if(nilai>=80&&nilai<=100){
			indeks='A';
		}
		else if(nilai>=70&&nilai<80){
			indeks='B';
		}
		else if(nilai>=55&&nilai<70){
			indeks='C';
		}
		else if(nilai>=40&&nilai<55){
			indeks='D';
		}
		else {
			indeks='E';
		}
	printf("Halo %s Indeks Nilaimu adalah: %c",nama,indeks);
	}
	else {
		printf("kamu salah masukkan nilai");
	}
}
