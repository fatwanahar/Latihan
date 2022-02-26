#include<stdio.h>
struct luasAlasSegitiga{
	int a,t;
};
struct prismaSegitiga{
	struct luasAlasSegitiga LuasAlas;
	int t;
};
struct prismaSegitiga prisma1;

void luasAlas(int *la,int a,int t){
	*la=(a*t)/2;
}
void volume(int *v,int la,int t){
	*v=la*t;
}
int main(){
	int la,v,c;
	printf("masukkan nilai tinggi segitiga: ");
	scanf("%i",&prisma1.LuasAlas.t);
	printf("masukkan nilai alas segitiga: ");
	scanf("%i",&prisma1.LuasAlas.a);
	printf("masukkan nilai tinggi prisma: ");
	scanf("%i",&prisma1.t);
	luasAlas(&la, prisma1.LuasAlas.a, prisma1.LuasAlas.t);
	printf("luas alas adalah: %i\n",la);
	volume(&v, la, prisma1.t);
	printf("volume prisma adalah: %d\n",v);
	return 0;
}

