#include<stdio.h>
int a=0,b;
int *ptr=&a;
void loop (int a){
	int i,b,total;
	total=*ptr+a;
	for(i=*ptr+1;i<=total;i++){
		printf("nilai %i\n",i);
	}
}
main(){
	int a,exit;
	exit=0;
	do{
		printf("masukkan a: ");scanf("%i",&a);
		loop(a);
		*ptr=*ptr+a;
		exit=exit+1;
	}while(exit<3);

}
