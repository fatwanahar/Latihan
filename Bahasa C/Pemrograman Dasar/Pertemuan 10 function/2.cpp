#include <stdio.h>
#include <stdlib.h>

float kecepatan(float s, float t)
{
	float v;
	v=s/t;
	return v;
}
main()
{
	float s_isi, t_isi, t;
	printf("Masukkan Jarak (KM) : ");
	scanf("%f",&s_isi);
	printf("Masukkan Waktu (s) :");
	scanf("%f",&t_isi);
	t=kecepatan(s_isi,t_isi);
	printf("\nKecepatan = %.2f KM/Jam\n\n",t);
}

