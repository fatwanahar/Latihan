#include<stdio.h>
    struct segiempat
    {
        int panjang,lebar;
    };
    struct segitiga
    {
        int alas,tinggi;
    };
    struct prisma
    {
        struct segiempat persegi;
        struct segitiga segi3;
    };
    void hitungPersegi(int *n,int p,int l){
        *n=p*l;
        return;
    }
    void hitungSegitiga(int *m,int a,int t){
        *m = (a*t)/2;
        return;
    }
    void LuasPrisma(int *L,int n,int m){
        *L=(3*n)+(2*m);
    }
main(){
    struct prisma prisma1;
    int n,m,p,l,a,t,L;
    prisma1.persegi.panjang = 2;
    prisma1.persegi.lebar = 2;
    prisma1.segi3.alas = 4;
    prisma1.segi3.tinggi = 4;
    p=prisma1.persegi.panjang;
    l=prisma1.persegi.lebar;
    a=prisma1.segi3.alas;
    t=prisma1.segi3.tinggi;
    hitungPersegi(&n,p,l);
    hitungSegitiga(&m,a,t);
    LuasPrisma(&L,n,m);
    printf("panjang segiempat: %i\n",n);
    printf("panjang segitiga: %i\n",m);
    printf("Luas permukaan prisma adalah: %i",L);
}
