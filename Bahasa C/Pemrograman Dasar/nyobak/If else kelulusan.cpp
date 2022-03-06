#include<stdio.h>
main(){
	float nilai;
	printf("Program Penentuan Kelulusan\n");
	printf("Masukkan IPK: "); scanf("%f",&nilai);
	if (nilai>=0 && nilai<2){
		printf("Status Kelulusan: TIDAK LULUS\n");
	}
	else if (nilai>=2&&nilai<=4){
		printf("status Kelulusan: LULUS\n");
	}
	else{
		printf("anda salah memasukkan nilai");
	}
	
}
