#include <stdio.h>
void perkalian(int a,int b){
	int *hasil;
	*hasil = a*b;
}
main(){
	int a,b,hasil;
	a=5;
	b=6;
	printf("hasil perkalian %i dan %i adalah %i",a,b,&hasil);
}
