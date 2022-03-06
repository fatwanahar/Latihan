#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct alamat{
	char desa[30],kecamatan[30],kota[30],alamatLengkap[100],rt[10],rw[10];
};
typedef struct mahasiswa{
	char nama[30],prodi[30],NPM[15];
	struct alamat alamat;
}mahasiswa;
mahasiswa siswa[100];
void print(int i){
	printf("nama\t\t: %s\n",siswa[i].nama);
	printf("NPM\t\t: %s\n",siswa[i].NPM);
	printf("Prodi\t\t: %s\n",siswa[i].prodi);
	printf("Desa\t\t: %s\n",siswa[i].alamat.desa);
	printf("Kecamatan\t: %s\n",siswa[i].alamat.kecamatan);
	printf("Kabupaten\t: %s\n",siswa[i].alamat.kota);
	printf("RT\t\t: %s\n",siswa[i].alamat.rt);
	printf("RW\t\t: %s\n",siswa[i].alamat.rw);
	printf("Alamat Lengkap\t: %s\n",siswa[i].alamat.alamatLengkap);
	printf("\n");
}
void insert(int a){
	int i,b,total;
	for(i=1;i<=a;i++){
		printf("masukkan data diri lengkap mahasiswa ke-%i \n",i);
		printf("nama: ");fflush (stdin);gets(siswa[i].nama);
		printf("NPM: ");fflush (stdin);gets(siswa[i].NPM);
		printf("Prodi: ");fflush(stdin);gets(siswa[i].prodi);
		printf("Alamat\n");
		printf("desa: ");fflush (stdin);gets(siswa[i].alamat.desa);
		printf("kecamatan: ");fflush (stdin);gets(siswa[i].alamat.kecamatan);
		printf("kota/kabupaten: ");fflush (stdin);gets(siswa[i].alamat.kota);
		printf("rt: ");fflush(stdin);gets(siswa[i].alamat.rt);
		printf("rw: ");fflush(stdin);gets(siswa[i].alamat.rw);
		printf("alamat lengkap jl, no rumah, dll: ");fflush(stdin);gets(siswa[i].alamat.alamatLengkap);
		printf("\n");
	}

}
void tampil(int a){
	int i;
	printf("\n---MENAMPILKAN DATA---\n\n");
	for (i=1;i<=a;i++){
		printf("data mahasiswa ke-%i \n",i);
		print(i);
	}
	
}
void update(){
	int i;
	printf("\n---UPDATE DATA---\n\n");
	printf("mahasiswa nomer berapa yang ingin diganti? ");scanf("%i",&i);
	printf("masukkan data diri baru mahasiswa ke-%i \n",i);
	printf("nama: ");fflush (stdin);gets(siswa[i].nama);
	printf("NPM: ");fflush (stdin);gets(siswa[i].NPM);
	printf("Prodi: ");fflush(stdin);gets(siswa[i].prodi);
	printf("Alamat\n");
	printf("desa: ");fflush (stdin);gets(siswa[i].alamat.desa);
	printf("kecamatan: ");fflush (stdin);gets(siswa[i].alamat.kecamatan);
	printf("kota/kabupaten: ");fflush (stdin);gets(siswa[i].alamat.kota);
	printf("rt: ");fflush(stdin);gets(siswa[i].alamat.rt);
	printf("rw: ");fflush(stdin);gets(siswa[i].alamat.rw);
	printf("alamat lengkap jl, no rumah, dll: ");fflush(stdin);gets(siswa[i].alamat.alamatLengkap);
	printf("\n");
}
void hapus(){
	printf("\n---MENGHAPUS DATA---\n\n");
	int i;
	printf("Data mahasiswa nomer berapa yang ingin dihapus? ");scanf("%i",&i);
	siswa[i].nama[0]='\0';
	siswa[i].NPM[0]='\0';
	siswa[i].prodi[0]='\0';
	siswa[i].alamat.desa[0]='\0';
	siswa[i].alamat.kecamatan[0]='\0';
	siswa[i].alamat.kota[0]='\0';
	siswa[i].alamat.rt[0]='\0';
	siswa[i].alamat.rw[0]='\0';
	siswa[i].alamat.alamatLengkap[0]='\0';
}
void cariLinear(int a){
	char cari[20];
	int i;
	printf("\n---MENCARI DATA---\n\n");
	printf("masukkan NPM yang ingin dicari: ");fflush(stdin);gets(cari);
	for(i=1;i<=a;i++){
		if(!strcmp(siswa[i].NPM,cari)){
			printf("mahasiswa berada pada urutan ke-%i\n",i);
			print(i);
			i=a+1;
		}
	}
}
void ascNpm(int a){
	int i,j;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
			if (strcmpi(siswa[j+1].NPM,siswa[j+2].NPM)>0){
				siswa[a+1] = siswa[j+1];
				siswa [j+1] = siswa[j+2];
				siswa [j+2] = siswa[a+1];
			}
		}
	}
}
void ascNama(int a){
	int i,j;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
			if (strcmpi(siswa[j+1].nama,siswa[j+2].nama)>0){
				siswa[a+1] = siswa[j+1];
				siswa [j+1] = siswa[j+2];
				siswa [j+2] = siswa[a+1];
			}
		}
	}	
}
void dscNpm(int a){
	int i,j;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
			if (strcmpi(siswa[j+1].NPM,siswa[j+2].NPM)<0){
				siswa[a+1] = siswa[j+1];
				siswa [j+1] = siswa[j+2];
				siswa [j+2] = siswa[a+1];
			}
		}
	}
}
void dscNama(int a){
	int i,j;
	for(i=0;i<a-1;i++){
		for(j=0;j<a-i-1;j++){
			if (strcmpi(siswa[j+1].nama,siswa[j+2].nama)<0){
				siswa[a+1] = siswa[j+1];
				siswa [j+1] = siswa[j+2];
				siswa [j+2] = siswa[a+1];
			}
		}
	}
}
void selectionSortNama(int a){
	int i,j,idx;
	for(i=0;i<a-1;i++){
		idx=i+1;
		for(j=i+1;j<a;j++){
			if(strcmpi(siswa[i+1].nama,siswa[j+1].nama) > 0){
				idx=j+1;
			}
		}
		siswa[a+1]=siswa[idx];
		siswa[idx]=siswa[i+1];
		siswa[i+1]=siswa[a+1];
	}
}
void selectionSortNpm(int a){
	int i,j,idx;
	for(i=0;i<a-1;i++){
		idx=i+1;
		for(j=i+1;j<a;j++){
			if(strcmpi(siswa[i+1].NPM,siswa[j+1].NPM)>0){
				idx=j+1;
			}
		}
		siswa[a+1]=siswa[idx];
		siswa[idx]=siswa[i+1];
		siswa[i+1]=siswa[a+1];
	}
}
void insertionSortNpm(int a){
	int i,j;
	for(i=1;i<=a;i++){
		j=i;
		while(j>0 && strcmpi(siswa[j].NPM,siswa[j+1].NPM) > 0){
			siswa[a+1]=siswa[j];
			siswa[j]=siswa[j+1];
			siswa[j+1]=siswa[a+1];
			j--;
		}
	}
}
void insertionSortNama(int a){
	int i,j;
	for(i=1;i<=a;i++){
		j=i;
		while(j>0 && strcmpi(siswa[j].nama,siswa[j+1].nama) > 0){
			siswa[a+1]=siswa[j];
			siswa[j]=siswa[j+1];
			siswa[j+1]=siswa[a+1];
			j--;
		}
	}
}
void cariBinary(int n){
	char cari[20];
	int mid,awal=0,akhir=n,i=0,temu=0;
	printf("\n---MENCARI DATA---\n\n");
	printf("masukkan NPM yang ingin dicari: ");fflush(stdin);gets(cari);
	ascNpm(n);
	while(i<n && temu==0){
		mid=(awal+akhir)/2;
		if (strcmpi(siswa[mid].NPM,cari)==0){
			printf("mahasiswa berada pada urutan ke- %i\n",mid);
			print(mid);
			temu=1;
		}
		else{
			if (strcmpi(siswa[mid].NPM,cari)>0){
				akhir=mid-1;
			}
			else{
				awal=mid+1;
			}
		}
		i++;
	}
}
main(){
	int menu,jumlah,ganti;
	int exit=0;
	printf("---PROGRAM DATA MAHASISWA---\n");
	printf("Ingin memasukkan berapa mahasiswa (MAX=20) = ");scanf ("%i",&jumlah);
	insert(jumlah);
	system ("pause");
	system ("cls");
	do{
	printf("Pilih Menu\n");
	printf("1.Tampilkan Data\n");
	printf("2.Update Data\n");
	printf("3.Mencari Data\n");
	printf("4.Menghapus Data\n");
	printf("5.Urutkan Berdasarkan NPM\n");
	printf("6.Urutkan Berdasarkan Nama\n");
	printf("7.Keluar\n");
	printf("pilihan anda? 1/2/3/4/5/6/7: ");scanf("%i",&menu);
	switch(menu){
		case 1:
			tampil (jumlah);
			system ("pause");
			system ("cls");
			exit=1;
		break;
		case 2:
			update ();
			system ("pause");
			system ("cls");
			exit=1;
		break;
		case 3:
			int urutan;
			printf("1.Linear Search/2.Binary Search? ");scanf("%i",&urutan);
			if(urutan==1){
				cariLinear(jumlah);
				system("pause");
				system("cls");
				exit=1;
			}
			else{
				cariBinary (jumlah);
				system ("pause");
				system ("cls");
				exit=1;
			}
		break;
		case 4:
			hapus ();
			system ("pause");
			system ("cls");
			exit=1;
		break;
		case 5:
			int sorting;
			printf("1.Bubble Sort\n");
			printf("2.Selection Sort\n");
			printf("3.Insertion Sort\n");
			printf("pilihan anda? ");scanf("%i",&sorting);
			switch (sorting){
				case 1:
					printf("1.ascending / 2.descending: ");scanf("%i",&urutan);
					if (urutan==1){
						ascNpm(jumlah);
						printf("\n---MENGURUTKAN DATA ASCENDING SELESAI---\n\n");
						system ("pause");
						system ("cls");
						exit =1;
					}
					else if(urutan==2){
						dscNpm(jumlah);
						printf("\n---MENGURUTKAN DATA DESCENDING SELESAI---\n\n");
						system("pause");
						system("cls");
						exit=1;
					}
					else{
						printf("salah memasukkan coba lagi!\n");
						system("pause");
						system("cls");
						exit=1;
					}		
				break;
				case 2:
					selectionSortNpm(jumlah);
					printf("\n---MENGURUTKAN DATA SELESAI---\n\n");
					system("pause");
					system("cls");
					exit=1;
				break;
				case 3:
					insertionSortNpm(jumlah);
					printf("\n---MENGURUTKAN DATA SELESAI---\n\n");
					system("pause");
					system("cls");
					exit=1;	
				break;
				default:
					;
			}
		break;
		case 6:
			printf("1.Bubble Sort\n");
			printf("2.Selection Sort\n");
			printf("3.Insertion Sort\n");
			printf("pilihan anda? ");scanf("%i",&sorting);
			switch (sorting){
				case 1:
					printf("1.ascending / 2.descending: ");scanf("%i",&urutan);
					if (urutan==1){
						ascNama(jumlah);
						printf("\n---MENGURUTKAN DATA ASCENDING SELESAI---\n\n");
						system ("pause");
						system ("cls");
						exit =1;
					}
					else if(urutan==2){
						dscNama(jumlah);
						printf("\n---MENGURUTKAN DATA DESCENDING SELESAI---\n\n");
						system("pause");
						system("cls");
						exit=1;
					}
					else{
						printf("salah memasukkan coba lagi!\n");
						system("pause");
						system("cls");
						exit=1;
					}
				break;
				case 2:
					selectionSortNama(jumlah);
					printf("\n---MENGURUTKAN DATA SELESAI---\n\n");
					system("pause");
					system("cls");
					exit=1;	
				break;
				case 3:
					insertionSortNama(jumlah);
					printf("\n---MENGURUTKAN DATA SELESAI---\n\n");
					system("pause");
					system("cls");
					exit=1;		
				break;
				default:
					;
			}
		break;
		case 7:
			exit =0;
		break;
		default:
			exit=1;
			system ("pause");
			system ("cls");
	}
		
	}while(exit>=1);
}
