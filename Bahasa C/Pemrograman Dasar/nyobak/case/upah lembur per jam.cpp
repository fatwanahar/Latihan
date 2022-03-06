#include <stdio.h>
main(){
	const int jam=48;
	const int upahlembur=3000;
	int upahtotal,jamtotal,upahperjam,jamlembur;
	char gol;
	printf("Masukkan golongan(a-d): ");scanf("%c",&gol);
	printf("Masukkan total jam kerja: ");scanf("%i",&jamtotal);
	switch (gol){
		case 'a':
			upahperjam = 4000;
		break;
		case 'b':
			upahperjam=5000;
		break;
		case 'c':
			upahperjam=6000;
		break;
		case 'd':
			upahperjam=7500;
		break;
	}
	if (jamtotal<=jam){
		upahtotal=jamtotal*upahperjam;
		printf("Upah total anda: Rp%i\n",upahtotal);
	}
	else {
		jamlembur=jamtotal-jam;
		upahtotal=jam*upahperjam+jamlembur*upahlembur;
		printf("Upah total Lembur anda: Rp%i\n",upahtotal);
	}
	
}
