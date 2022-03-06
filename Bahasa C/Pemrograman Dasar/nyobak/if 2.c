#include<stdio.h>
int main(){
	char pass[30];
	printf("masukkan password: ");
	scanf("%s",&pass);
	if (strcmp(pass, "kopi") == 0){
		printf("selamat datang\n");
	}
	else {
		printf("password salah, silahkan coba lagi\n");
	}
	printf("terimakasih sudah menggunakan aplikasi ini\n");	
return 0;
}
