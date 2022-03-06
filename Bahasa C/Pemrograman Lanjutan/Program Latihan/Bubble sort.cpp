#include <stdio.h>
#include<stdlib.h>
void bubbleSortAsc(int angka[]){
	int i,j,k,a;
	for(i=0;i<6-1;i++){
		printf("sortir ke-%i\n",i+1);
		for(j=0;j<6-i-1;j++){
			if (angka[j]>angka[j+1]){
				a=angka[j];
				angka[j]=angka[j+1];
				angka [j+1]=a;
				}
				for (k=0;k<6;k++){
					printf("%i ",angka[k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
main(){
	int i,angka[]={22,10,15,3,8,2};
	bubbleSortAsc(angka);
	system("pause");
}

