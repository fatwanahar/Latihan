#include<stdio.h>
main (){
	int pilih;
	printf("Pilihan Lampu Lalu Lintas\n");
	printf("-----------------\n");
	printf("lampu merah = 1\n");
	printf("lampu kuning = 2\n");
	printf("lampu hijau = 3\n");
	printf("-----------------\n");
	printf("masukkan pilihan anda (1/2/3): "); scanf("%i",&pilih);
	printf("\n");
	
	if(pilih==1){
		printf("lampu yang kamu pilih adalah merah\n");
		printf("artinya kamu tidak bisa jalan\n");
	}
	else if(pilih==2){
		printf("lampu yang kamu pilih adalah kuning\n");
		printf("artinya kamu bersiap-siap untuk jalan\n");
	} 
	else if(pilih==3){
		printf("lampu yang kamu pilih adalah hijau\n");
		printf("artinya kamu boleh jalan, Selamat Jalan\n");
	}
	else{
		printf("perintah yang kamu masukkan salah!\n");
	}
	
}
