#include<stdio.h>
main(){
	typedef struct{
		int x;
		int y;
	}koordinat;
	koordinat p;
	printf("Masukkan koordinat x: ");scanf("%i",&p.x);
	printf("Masukkan koordinat y: ");scanf("%i",&p.y);
	if (p.x>0 && p.y >0){
		printf("Kuadran 1\n");
	}
	else if(p.x<0 && p.y>0){
		printf("Kuadran 2\n");
	}
	else if (p.x<0&&p.y<0){
		printf("Kuadran 3\n");
	}
	else if(p.x>0&&p.y<0){
		printf("Kuadran 4\n");
	}
	else{
		printf("Tidak terletak di kuadran manapun");
	}
}
