#include<stdio.h>
void main(){
	int a,b;
	printf("masukkan a true(1) atau false(0): ");
	scanf("%d",&a);
	printf("masukkan b true(1) atau false(0): ");
	scanf("%d",&b);
	printf("a&&b = %d\n",a&&b);
	printf("a||b = %d\n",a||b);
	printf("!a = %d\n",!a);
	printf("!b = %d\n",!b);
return 0;
}
