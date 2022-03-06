#include<stdio.h>
#include<stdlib.h>

void contoh_biasa()
{
	int x=0;
	x=x+1;
	printf("x biasa= %i\n",x);
}

void contoh_statis()
{
	static int x=0;
	x=x+1;
	printf("x biasa= %i\n",x);
}

int main(int argc, char *argv[]) 
{
	contoh_biasa();
	contoh_biasa();
	contoh_biasa();
	printf("\n\n");
	contoh_statis();
	contoh_statis();
	contoh_statis();
	printf("\n\n");
	system("PAUSE");
	return 0;
}

