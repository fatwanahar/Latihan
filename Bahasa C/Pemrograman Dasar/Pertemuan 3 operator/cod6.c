#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int a;
	a = 0 && 1;
	printf("isi variabel a: %d\n",a);
	a = 1 && 1;
	printf("isi variabel a: %d\n",a);
	a = 0 || 1;
	printf("isi variabel a: %d\n",a);
	a = 0 || 0;
	printf("isi variabel a: %d\n",a);
	a = !0;
	printf("isi variabel a: %d\n",a);
	return 0;
}


