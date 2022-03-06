#include <stdio.h>
int main(){
	int x,y;
	x=5;
	y= 8-x++;
	printf("contoh1: nilai x = %d | y = %d\n",x,y);
	x=5;
	y=8-++x;
	printf("contoh2: nilai x = %d | y = %d\n",x,y);
	x = 5;
	y = 8 - x--;
	printf("contoh 3: Nilai x = %d | y = %d\n", x, y);
	x = 5;
	y = 8 - --x;
	printf("contoh 4: Nilai x = %d | y = %d\n", x, y);
	return 0;
return 0;
}
