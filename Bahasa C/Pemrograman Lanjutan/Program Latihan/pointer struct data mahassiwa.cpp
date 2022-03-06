#include<stdio.h>

struct data{
	char nama[30],jurusan[30];
	int npm;
};
typedef struct data pelajar;
main(){
	pelajar mahasiswa;
	printf("masukkan nama mahasiswa: ");fflush(stdin);gets(mahasiswa.nama);
	printf("masukkan jurusan: ");fflush(stdin);gets(mahasiswa.jurusan);
	printf("masukkan NPM: ");fflush(stdin);scanf("%i",&mahasiswa.npm);
	
	pelajar *mahasiswaUPN;
	mahasiswaUPN = &mahasiswa;
	
	printf("nama: %s\n",mahasiswaUPN -> nama);
	printf("jurusan: %s\n",mahasiswaUPN->jurusan);
	printf("NPM: %i\n",mahasiswaUPN->npm);
}
