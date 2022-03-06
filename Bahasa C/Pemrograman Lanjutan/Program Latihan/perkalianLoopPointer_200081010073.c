#include <stdio.h>
void pangkat(int a, int b,int *hasil){
	int i;
	*hasil=1;
	if (a==0){
		*hasil=1;
	}
	else{
		for(i=0;i<b;i++){
			*hasil=*hasil*a;
		}
	}
	
}
main(){
	int a,b,hasil;
	printf("masukkan angka: ");scanf("%i",&a);
	printf("masukkan pangkat: ");scanf("%i",&b);
	pangkat(a,b,&hasil);
	printf("hasil dari %i pangkat %i adalah %i",a,b,hasil);
}
