#include <stdio.h>
int perkalian(int a,int b){
	int i,hasil;
	hasil=0;
	for (i=0;i<b;i++){
		hasil=hasil+a;
	}
	return hasil;
}
main(){
	int a,b;
	printf("masukkan angka pertama: "); scanf("%i",&a);
	printf("masukkan angka kedua: ");scanf("%i",&b);
	printf("hasil perkalian dari %i dan %i adalah %i",a,b,perkalian(a,b));
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
