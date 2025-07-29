#include<stdio.h>
//Arrays part 2

int printNum(int num){
	printf("%d ",num);
	num = num+10;
	printf("%d ",num);
	printf("%d ",&num);
	return num;
}

void printArray(int a[], int n){		//generalized function
	int i;
	for(i=0; i<n; i++){
		printf("%d ",a[i]);
	}
	printf("Address: %d\n",&a[0]);
}

int main(){
	int arr[6];
	
	int marks[10] = {0};
	
	printArray(marks, 10);
	printf("main Address: %d\n",&marks[0]);
	
//	printf("%d ",num);
	
//	printf("Enter 1st Number: ");
//	scanf("%d",&arr[0]);
//	
//	printf("Enter 2nd Number: ");
//	scanf("%d",&arr[1]);
//	
//	printf("Enter 3rd Number: ");
//	scanf("%d",&arr[2]);
//	
//	printf("Enter 4th Number: ");
//	scanf("%d",&arr[3]);

//	int i;
//	for(i=0; i<6; i++){
//		printf("Enter %d value: ",i+1);
//		scanf("%d",&arr[i]);
//	}
	
//	for(i=0; i<6; i++){
//		printf("%d ",arr[i]);
//	}

	
//	printArray(arr,6);		//function call
	
	
	return 0;
}

