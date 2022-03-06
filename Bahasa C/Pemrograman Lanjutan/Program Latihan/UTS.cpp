#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct{
	char kabupaten[20];
	char provinsi[20];
	int level;
	float penduduk;
	float lansia;
	float totalvaksin;
	float lansiavaksin;
}data;
data dat[10];
void assigment(){
	strcpy(dat[0].kabupaten,"jombang");
	dat[0].penduduk=100000;
	dat[0].lansia=5000;
	strcpy(dat[0].provinsi,"jawa timur");
	dat[0].totalvaksin=60231;
	dat[0].lansiavaksin=3100;
	
	strcpy(dat[1].kabupaten,"sidoarjo");
	dat[1].penduduk=100032;
	dat[1].lansia=3211;
	strcpy(dat[1].provinsi,"jawa timur");
	dat[1].totalvaksin=55275;
	dat[1].lansiavaksin=3000;
	
	strcpy(dat[2].kabupaten,"nganjuk");
	dat[2].penduduk=1232132;
	dat[2].lansia=2231;
	strcpy(dat[2].provinsi,"jawa timur");
	dat[2].totalvaksin=1032132;
	dat[2].lansiavaksin=1233;
	
	strcpy(dat[3].kabupaten,"mojokerto");
	dat[3].penduduk=3685334;
	dat[3].lansia=3214;
	strcpy(dat[3].provinsi,"jawa timur");
	dat[3].totalvaksin=3375334;
	dat[3].lansiavaksin=1000;
	
	strcpy(dat[4].kabupaten,"gresik");
	dat[4].penduduk=542434;
	dat[4].lansia=3434;
	strcpy(dat[4].provinsi,"jawa timur");
	dat[4].totalvaksin=432433;
	dat[4].lansiavaksin=1500;
	
	strcpy(dat[5].kabupaten,"blora");
	dat[5].penduduk=454546;
	dat[5].lansia=4532;
	strcpy(dat[5].provinsi,"jawa tengah");
	dat[5].totalvaksin=321311;
	dat[5].lansiavaksin=4000;
	
	strcpy(dat[6].kabupaten,"wonogiri");
	dat[6].penduduk=1453225;
	dat[6].lansia=4555;
	strcpy(dat[6].provinsi,"jawa tengah");
	dat[6].totalvaksin=232131;
	dat[6].lansiavaksin=3500;
	
	strcpy(dat[7].kabupaten,"sukoharjo");
	dat[7].penduduk=927321;
	dat[7].lansia=3100;
	strcpy(dat[7].provinsi,"jawa tengah");
	dat[7].totalvaksin=527321;
	dat[7].lansiavaksin=3000;
	
	strcpy(dat[8].kabupaten,"bandung");
	dat[8].penduduk=1000321;
	dat[8].lansia=1233;
	strcpy(dat[8].provinsi,"jawa barat");
	dat[8].totalvaksin=700321;
	dat[8].lansiavaksin=1000;
	
	strcpy(dat[9].kabupaten,"bogor");
	dat[9].penduduk=382123;
	dat[9].lansia=3921;
	strcpy(dat[9].provinsi,"jawa barat");
	dat[9].totalvaksin=303213;
	dat[9].lansiavaksin=2000;
}
levelvaksin(){
	int i;
	float persenvaksin,persenlansia;
	for(i=0;i<10;i++){
		persenvaksin=(dat[i].totalvaksin/dat[i].penduduk)*100;
		persenlansia=(dat[i].lansiavaksin/dat[i].lansia)*100;
		if(persenvaksin>=70 && persenlansia>=60){
			dat[i].level=1;
		}
		else if(persenvaksin>=50 && persenlansia>=40){
			dat[i].level=2;
		}
		else{
			dat[i].level=3;
		}
	}
}
print(){
	printf("\n");
	for(int i=0;i<10;i++){
		printf("kota: %s\n",dat[i].kabupaten);
		printf("provinsi: %s\n",dat[i].provinsi);
		printf("jumlah penduduk: %.0f\n",dat[i].penduduk);
		printf("julmah lansia: %.0f\n",dat[i].lansia);
		printf("total tervaksin: %.0f\n",dat[i].totalvaksin);
		printf("total lansia tervaksin: %.0f\n",dat[i].lansiavaksin);
		printf("Level PPKM: %i\n",dat[i].level);
		printf("\n");
	}
}
pencariankabupaten(){
	char cari[20];
	printf("masukkan kabupaten: ");fflush(stdin);gets(cari);
	printf("\n");
	for(int i=0;i<10;i++){
		if(!strcmpi(dat[i].kabupaten,cari)){
			printf("kota: %s\n",dat[i].kabupaten);
			printf("provinsi: %s\n",dat[i].provinsi);
			printf("jumlah penduduk: %.0f\n",dat[i].penduduk);
			printf("julmah lansia: %.0f\n",dat[i].lansia);
			printf("total tervaksin: %.0f\n",dat[i].totalvaksin);
			printf("total lansia tervaksin: %.0f\n",dat[i].lansiavaksin);
			printf("Level PPKM: %i\n",dat[i].level);
			printf("\n");
			i=11;
		}
	}
}
pencarianPPKM(){
	int cari;
	printf("masukkan level PPKM: ");scanf("%i",&cari);
	printf("\n");
	for(int i=0;i<10;i++){
		if(dat[i].level==cari){
			printf("kota: %s\n",dat[i].kabupaten);
			printf("provinsi: %s\n",dat[i].provinsi);
			printf("jumlah penduduk: %.0f\n",dat[i].penduduk);
			printf("julmah lansia: %.0f\n",dat[i].lansia);
			printf("total tervaksin: %.0f\n",dat[i].totalvaksin);
			printf("total lansia tervaksin: %.0f\n",dat[i].lansiavaksin);
			printf("Level PPKM: %i\n",dat[i].level);
			printf("\n");
		}
	}
}
pencarianprovinsi(){
	char cari[20];
	printf("masukkan provinsi: ");fflush(stdin);gets(cari);
	printf("\n");
	for(int i=0;i<10;i++){
		if(!strcmpi(dat[i].provinsi,cari)){
			printf("kota: %s\n",dat[i].kabupaten);
			printf("provinsi: %s\n",dat[i].provinsi);
			printf("jumlah penduduk: %.0f\n",dat[i].penduduk);
			printf("julmah lansia: %.0f\n",dat[i].lansia);
			printf("total tervaksin: %.0f\n",dat[i].totalvaksin);
			printf("total lansia tervaksin: %.0f\n",dat[i].lansiavaksin);
			printf("Level PPKM: %i\n",dat[i].level);
			printf("\n");
		}
	}
}
sortingAsc(){
	int i,j,idx;
	for(i=0;i<10;i++){
		idx=i;
		for(j=i;j<10;j++){
			if(dat[j].level<dat[idx].level){
				idx=j;
			}
		}
		dat[10]=dat[i];
		dat[i]=dat[idx];
		dat[idx]=dat[10];
	}
}

sortingDsc(){
	int i,j,idx;
	for(i=0;i<10;i++){
		idx=i;
		for(j=i;j<10;j++){
			if(dat[j].level>dat[idx].level){
				idx=j;
			}
		}
		dat[10]=dat[i];
		dat[i]=dat[idx];
		dat[idx]=dat[10];
	}
}
main(){
	int pilih,exit=0;
	assigment();
	levelvaksin();
	do{
	printf("1. menampilkan data\n");
	printf("2. mencari data berdasarkan PPKM\n");
	printf("3. mencari data berdasarkan kabupaten\n");
	printf("4. mencari data berdasarkan provinsi\n");
	printf("5. mengurutkan Level PPKM ascending\n");
	printf("6. mengurutkan Level PPKM descending\n");
	printf("7. keluar\n");
	printf("pilihanmu: ");scanf("%i",&pilih);
	if(pilih==1){
		print();
		exit=1;
		system("PAUSE");
		system("cls");
	}
    else if(pilih==2){
    	pencarianPPKM();
    	exit=1;
		system("PAUSE");
		system("cls");
	}
	else if(pilih==3){
		pencariankabupaten();
		exit=1;
		system("PAUSE");
		system("cls");
	}
	else if(pilih==4){
		pencarianprovinsi();
		exit=1;
		system("PAUSE");
		system("cls");
	}
	else if(pilih==5){
		sortingAsc();
		exit=1;
		system("PAUSE");
		system("cls");
	}
	else if(pilih==6){
		sortingDsc();
		exit=1;
		system("PAUSE");
		system("cls");
	}
	else if(pilih==7){
		exit=0;
	}
	else{
		exit=1;
	}
	}while (exit>=1);
}
