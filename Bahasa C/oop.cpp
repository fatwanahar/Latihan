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
    void hitung(){
        
    }

main(){
    struct prisma prisma1;
    prisma1.persegi.panjang = 1;
    prisma1.persegi.lebar = 2;
    prisma1.segi3.alas = 4;
    prisma1.segi3.tinggi = 4;

}
