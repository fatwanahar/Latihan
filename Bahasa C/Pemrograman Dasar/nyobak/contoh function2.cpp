#include <stdio.h>
#include <stdlib.h>
void lampuhijau(){
	printf("\nsilahkan jalan\n");
}
void lampumerah(){
	printf("\nMohon Berhenti\n");
}
void lampukuning(){
	printf("\nBersiap untuk jalan atau berhenti\n");
}
main(){
	int pil;
	printf("Program Lampu Lalu Lintas\n");
	printf("1.Lampu merah\n");
	printf("2.Lampu kuning\n");
	printf("3.Lampu Hijau\n");
	printf("4.Keluar\n\n");
	printf("Masukkan Pilihan 1-4: ");scanf("%i",&pil);
		switch(pil){
		case 1:
			lampumerah();
			system("PAUSE");
		break;
		case 2:
			lampukuning();
			system("PAUSE");
		break;
		case 3:
			lampuhijau();
			system("PAUSE");
		break;
		case 4:
			system("PAUSE");
		break;
		default:
			system("PAUSE");
	}
}
