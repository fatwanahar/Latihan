#include<stdio.h>
#include<stdlib.h>
main(){
	int pass,i,log;
	i=1;
	log=0;
	do{
		printf("--------------------\n");
		printf(" |PROGRAM PASSWORD|\n");
		printf("--------------------\n");
		printf("Masukkan Password: "); scanf("%i",&pass);
		if (pass==123456){
			printf("\n");
			printf("----------------------------------\n");
			printf("Password Kamu Benar Selamat Datang\n");	
			printf("----------------------------------\n");
			printf("\n");
			i=4;
			log=1;
		}
		else{-
			printf("\n");
			printf("---------------------------------\n");
			printf("Password yang kamu masukkan salah\n");
			printf("---------------------------------\n");
			printf("\n");
			i=i+1;
		}
		system("PAUSE");
		system("cls");
	}while(i<=3);
	if (log!=1){
		printf("\n\n");
		printf("------------------------------------------------------------------\n");
		printf("|Maaf kamu salah memasukkan password 3 kali silahkan kembali lagi|\n");
		printf("------------------------------------------------------------------\n");
	}
	else{
		
	}

}
