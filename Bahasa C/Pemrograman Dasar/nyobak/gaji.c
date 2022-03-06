#include <stdio.h>
void main(){
	const float persentunjangan = 0.2;
	const float persenpajak = 0.15;
	//#define persentunjangan 0.2
	//#define persenpajak 0.15
	char namakaryawan[20]; 
	float gajipokok,tunjangan,gajibersih,pajak;
	printf("masukkan nama karyawan: ");
	scanf("%s",&namakaryawan);
	printf("Masukkan Gaji Pokok: Rp");
	scanf("%f",&gajipokok);
	//printf("gaji pokokmu yaitu %d \n",gajipokok);
	printf("tunjanganmu adalah Rp%.0f \n",tunjangan=gajipokok*persentunjangan);
	float c=gajipokok+tunjangan;
	pajak=persenpajak*c;
	printf("Pajakmu adalah Rp%.0f \n",pajak);
	gajibersih=gajipokok+tunjangan-pajak;
	printf("%s, gaji bersihmu adalah Rp%.0f \n",namakaryawan,gajibersih);
	
}
