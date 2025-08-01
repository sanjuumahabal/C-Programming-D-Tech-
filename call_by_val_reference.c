#include<stdio.h>

void f1(int n){
	printf("f1 function value: %d\n",n);
	printf("f1 function Address: %d\n",&n);	//6487536
	n = n + 10;
}

void f2(int arr[]){
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	
	arr[4] = 606;	
}

void bubbleSort(int arr[], int n){
	int i,j, temp;
	for(i=0; i<n; i++){
		for(j=0; j<n-1; j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void printArray(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}


int secondLargest(int arr[], int n){
	int max=arr[0];
	int sLargest;
	
	int i;
	
	for(i=0; i<n; i++){
		if(max<arr[i]){
			sLargest = max;
			max = arr[i];
		}
		else if(arr[i]!=max && sLargest<arr[i])
			sLargest = arr[i];
	}
	
	return sLargest;
}


int main(){
	//int num=50;
	
	//f1(num);
	
	//printf("main function value: %d\n",num);
	//printf("main function adderess: %d\n",&num);
	
//	int arr[] = {45,23,78,89,7,5,33,565,76,43};
	int arr[] = {10,45,30};		//length = 5	size=20 bytes
	
	int n = sizeof(arr)/sizeof(arr[0]);
	
	f2(arr);		//address
	
//	printf("%d %d %d\n",arr[0],arr[1],arr[4]);

	printArray(arr, n);
	printf("Largest Element is %d\n",secondLargest(arr, n));
	//bubbleSort(arr, n);
	
	
	return 0;
}

