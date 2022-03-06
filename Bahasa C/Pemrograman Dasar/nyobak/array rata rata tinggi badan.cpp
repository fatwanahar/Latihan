#include<stdio.h>
main(){
	int tinggi[5]={175,123,165,187,145};
	int n = sizeof(tinggi)/sizeof(*tinggi);
	int sum;
	for(int i=0;i<n;i++){
		sum=sum+tinggi[i];
	}
	printf("jumlah tinggi badan %i\n",sum);
	float rata = (float)sum /(float) n;
	printf("Rata rata tinggi badan adalah %.2f",rata);
	
}
