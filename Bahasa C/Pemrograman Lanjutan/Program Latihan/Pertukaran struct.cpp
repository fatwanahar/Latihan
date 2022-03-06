#include<stdio.h>
#include<string.h>
typedef struct{
	char nama[20],npm[20];
}mahasiswa;
mahasiswa siswa[10];
void buat(int a){
	printf("ingin memasukkan berapa mahasiswa? ");scanf("%i",&jumlah);
}
void urutan(){
	int i,j;
	char temp[20];
	for(i=0;i<-1;i++){
		for (j=0;j<jumlah-1-i;i++){
			if(strcmp (siswa[j].nama,siswa[j+1].nama)>0){
				strcpy(temp,siswa[j].nama);
				strcpy(siswa[j].nama,siswa[j+1].nama);
				strcpy(siswa[j+1].nama,temp);
			}
		}
	}
}
main(){
	urutan();
}
