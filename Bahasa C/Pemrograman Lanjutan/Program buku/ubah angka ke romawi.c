#include <stdio.h>
main(){
	int i,a;
	printf("masukkan angka: ");scanf("%i",&a);
	while(a>=1000){
		printf("M");
		a=a-1000;
	}
	while (a>500){
		if (a==900){
			printf("DM");
			a=a-900;
		}
		else {
			printf("D");
			a=a-500;
		}
	}
	while (a>=100){
		if (a>=400){
			printf("CD");
			a=a-400;
		}
		else {
			printf("C");
			a=a-100;
		}
	}
	while (a>=50){
		if(a>=90){
			printf("LC");
			a=a-90;
		}
		else{
			printf("L");
			a=a-50;
		}
	}
	while (a>=10){
		if (a>=40){
			printf("XL");
			a=a-40;
		}
		else {
			printf("X");
			a=a-10;
		}
	}
	while (a>=5){
		if (a==9){
			printf("IX");
			a=a-9;
		}
		else {
			printf("V");
			a=a-5;
		}
	}
	while (a>=1){
		if (a==4){
			printf("IV");
			a=a-4;
		}
		else {
			printf("I");
			a=a-1;
		}
	}
}
