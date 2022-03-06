#include<stdio.h>
main(){
	int angka; //deklarasi varibel
	int *pointer1; //deklarasi pointer 1
	int **pointer2; //deklarasi pointer 2
	printf("Masukkan angka: ");scanf("%i",&angka); //membuat inputan user
	pointer1=&angka; //memasukkan alamat angka kedalam pointer1
	pointer2=&pointer1; //memasukkan alamat pointer1 kedalam pointer2
	printf("angka dalam pointer1= %i\n",*pointer1); //menampilkan pointer1
	printf("angka dalam pointer2= %i\n",**pointer2); //menampilkan pointer2
}
