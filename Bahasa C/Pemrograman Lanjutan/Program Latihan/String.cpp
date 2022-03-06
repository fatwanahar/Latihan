#include<stdio.h>
#include<string.h>
main(){
	int i;
	char cari[20];
	typedef struct{
		char nama[20];
	}mahasiswa;
	mahasiswa siswa[20];
	strcpy(siswa[0].nama, "20081010073");
	strcpy(siswa[1].nama, "20081010074");
	strcpy(siswa[2].nama, "20081010075");
	int a=sizeof siswa/ sizeof siswa[0];
	printf("%i\n",a);
	printf("cari nama: ");fflush(stdin);gets(cari);
	for(i=0;i<a;i++){
		if(!strcmp(siswa[i].nama,cari)){
			printf("mahasiswa ada di nomer %i\n",i);
		}
	}
}

