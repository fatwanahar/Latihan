#include <stdio.h>
void perkalian(int a,int b, int *hasil){
	int i;
	*hasil=1;
	for (i=0;i<b;i++){
		*hasil=*hasil*a;
	}
}
main(){
	int a,b,hasil;
	printf("masukkan angka: "); scanf("%i",&a);
	printf("masukkan pangkat: ");scanf("%i",&b);
	perkalian(a,b,&hasil);
	printf("hasil perkalian dari %i dan %i adalah %i",a,b,hasil);
}
/*main(){
	int a,b,i,hasil;
	hasil=0;
	printf("masukkan angka pertama: ");scanf("%i",&a);
	printf("masukkan angka kedua: "); scanf("%i",&b);
	for (i=0;i<a;i++){
		hasil=hasil+b;
	}
	printf("hasilnya adalah %i",hasil);
}*/
