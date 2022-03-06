#include<stdio.h>
main(){
	int jawab;
	printf("berpakah hasil kali antara 3 dan 4\n");
	printf("jawabanmu? ");
	scanf("%i",&jawab);
	printf("jawaban anda %s\n", (jawab == 12) ? "benar, anda dapat 1 jt":"salah, anda membayar kami 100jt");
}
