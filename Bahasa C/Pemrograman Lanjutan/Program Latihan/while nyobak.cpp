#include<stdio.h>
#include<stdlib.h>
void print(){
	printf("a");
}
main(){
	int pilih,i,pass;
	i=1;
	do{
	printf("1.a 2.b 3.c 4.keluar\n");
	printf("pilihanmu: ");scanf("%i",&pilih);
		switch (pilih){
			case 1:
				print();
				i=1;
			break;
			case 2:
				print();
				i=1;
			break;
			case 3:
				print();
				i=1;
			break;
			case 4:
				i=0;
			break;
			default:
				i=1;
		}
	}while(i=1);
}
