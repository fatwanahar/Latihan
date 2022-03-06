#include<stdio.h>
void main(){
/*	int a,b;
	float c;
	printf("input nilai a: ");
	scanf("%i",&a);
	printf("input nilai b: ");
	scanf("%i",&b);
	printf("hasil %i + %i adalah %.0f\n",a,b,c=a+b);
	printf("hasil %i - %i adalah %.0f\n",a,b,c=a-b);
	printf("hasil %i X %i adalah %.0f\n",a,b,c=a*b);
	printf("hasil %i / %i adalah %.2f\n",a,b,c=(float)a/(float)b);
	printf("hasil %i mod %i adalah %.2f\n",a,b,c=a%b);*/
	int a,b;
	a=10;
	b=5;
	a+=b;
	printf("hasil a += b adalah %i\n",a);
	a-=b;
	printf("hasil a -= b adalah %i\n",a);
	a*=b;
	printf("hasil a *= b adalah %i\n",a);
	a/=b;
	printf("hasil a /= b adalah %i\n",a);
	a%=b;
	printf("hasil a %= b adalah %i\n",a);
}
