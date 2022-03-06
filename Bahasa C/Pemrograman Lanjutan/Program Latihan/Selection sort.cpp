#include<stdio.h>

void selectionSort(int arr[],int n){
	int i,j,temp,idx;
	for (i=0;i<n-1;i++){
		idx=i;
		for(j=i+1;j<n;j++){
			if(arr[idx]>arr[j]){
				idx=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[idx];
		arr[idx]=temp;
	}
}
main(){
	int i,arr[]={32,75,69,58,21,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Sebelum sort: \n");
	for(i=0;i<n;i++){
		printf("%i ",arr[i]);
	}
	selectionSort(arr,n);
	printf("\n");
	printf("Setelah sort: \n");
	for(i=0;i<n;i++){
		printf("%i ",arr[i]);
	}
}
