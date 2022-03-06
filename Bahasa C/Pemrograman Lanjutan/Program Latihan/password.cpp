#include <stdio.h>
#include <string.h>

int main(){
    char nama[8], pas[8];
    int ulang = 0;

    for(int i=0; i<3; i++){
        printf(" \n           Silahkan login.\n");
        printf("\n Masukkan username anda :");
        scanf("%s", &nama);

        printf("\n Masukkan password anda : ");
        scanf("%s", &pas);

        if ((strcmp(nama,"usersaya")==0)&&(strcmp(pas,"passaya1")==0)) {
            break;
        } else {
            printf("Maaf password atau username anda salah\n");
            ulang = ulang + 1;
        }
    }

    if(ulang<3){
        printf("\n              Anda telah berhasil login.");
    } else {
        printf("Sudah melebihi batas login, tidak bisa login lagi");
    }

}
