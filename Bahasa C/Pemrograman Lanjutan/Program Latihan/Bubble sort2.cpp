#include<stdio.h>
bubleasc(int n, int arr[]){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if (arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
main(){
	int arr[]={5,4,2,7,3,10,43,12};
	int n=sizeof(arr)/sizeof(arr[0]);
	bubleasc(n, arr);
	printf("data setelah disortir: \n");
	for(int i=0;i<n;i++){
		printf(" %i",arr[i]);
	}
}

