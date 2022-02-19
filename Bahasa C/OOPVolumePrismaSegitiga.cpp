#include<stdio.h>
struct luasAlas
{
    int t,a;
};
struct prisma
{
    struct luasAlas alas;
    int t;
};
struct prisma prisma1;
void LuasAlas(int *la,int at,int aa){
    *la=(at*aa)/2;
}
void Volume(int *v,int la,int t){
    *v=la*t;
}
main(){
    int v,la,at,aa,t;
    prisma1.alas.t=5;
    prisma1.alas.a=10;
    prisma1.t=5;
    at=prisma1.alas.t;
    aa=prisma1.alas.a;
    t=prisma1.t;
    LuasAlas(&la,at,aa);
    //printf("%i",la);
    Volume(&v,la,t);
    printf("Volume prisma segitiga adalah: %i",v);
}



