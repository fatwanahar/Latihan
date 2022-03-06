//Nama : fatwa Sifaun Nahar
//NPM: 20081010073
//Kelas: Pemrograman Lanjut B081
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
typedef struct {
	char judul[40];
	char pengarang[20];
	int kode;
}buku;
	buku b[]={
		{"C programming","James Lee",3031},
		{"Wordpress Expert","Andrew Octa",101},
		{"Web From Zero to Hero","David Guetta",8812},
		{"Laravel","Hans Jackson",790},
		{"Master Flutter","Ozur Haskels",66},
		{"CodeIgniter 4 the guide","Gantz Patrick",111},
		{"Raspberry Pi 4","Tony Watts",678},
		{"buliding Robotic AI","Leny Imelda",901},
		{"Data Science with Python","Ranya Sundar",303},
		{"Go Lang Introduction","Brian Macakzie",4089}
	};
void print (int n){
	int i;
	for(i=0;i<n;i++){
		printf("Kode: %i\n",b[i].kode);
		printf("Judul Buku: %s\n",b[i].judul);
		printf("Pengarang: %s\n",b[i].pengarang);
		printf("\n");
	}
}
void sortingAscCode(int n){
	int i,j,idx;
	for(i=0;i<n;i++){
		idx=i;
		for(j=i;j<n;j++){
			if(b[j].kode<b[idx].kode){
				idx=j;
			}
		}
		b[11]=b[i];
		b[i]=b[idx];
		b[idx]=b[11];
	}
}
void sortingAscName(int n){
	int i,j,idx;
	for(i=0;i<n;i++){
		idx=i;
		for(j=i;j<n;j++){
			if(strcmpi(b[j].judul,b[idx].judul)<0){
				idx=j;
			}
		}
		b[11]=b[i];
		b[i]=b[idx];
		b[idx]=b[11];
	}
}
void jumpSearchCode(int n){
	int query;
	printf("Masukkan kode buku yang ingin dicari: ");scanf("%i",&query);
	int jump=sqrt(n);
	int jumper=jump;
	int prev=0;
	int counter=0;
	while(b[jumper].kode<=query && jumper<n){
		prev=jumper;
		jumper=jumper+jump;
		counter++;
	}
	int ketemu=0;
	for (int i=prev;i<=jumper;i++){
		if(b[i].kode==query){
			ketemu=1;
			printf("\ndata ditemukan pada urutan ke - %i\n\n",i+1);
			printf("Kode: %i\n",b[i].kode);
			printf("Judul Buku: %s\n",b[i].judul);
			printf("Pengarang: %s\n",b[i].pengarang);
			printf("\n");	
			i=jumper+2;
		}
	}
	if (ketemu==0){
			printf("data tidak ada\n");
		}
}
main(){
	int n=10;
	int pilih;
	int exit=1;
	do {
	printf("1.Tampil Data\n");
	printf("2.Pencarian Berdasarkan kode\n");
	printf("3.Pencarian berdasarkan nama(belum bisa)\n");
	printf("4.Keluar\n");
	printf("Pilihanmu: ");scanf("%i",&pilih);
		if (pilih ==1){
			sortingAscCode(n);
			print(n);
			system ("pause");
			system ("cls");
			exit=1;
		}
		else if (pilih==2){
			sortingAscCode(n);
			jumpSearchCode(n);
			system ("pause");
			system ("cls");
			exit=1;
		}
		else if(pilih==3){
			system ("pause");
			system ("cls");
			exit=1;
		}
		else if (pilih==4){
			exit=0;
		}
		else{
			printf("salah masukkan, coba lagi\n");
			system ("pause");
			system ("cls");
			exit=1;
		}
	}while(exit>=1);
}
