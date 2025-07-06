#include<stdio.h>
//for loop
// first 10 natural numbers

int main(){
//	int i=1;
//	
//	for(i=1;i<=10;i++){
//		printf("%d ",i);
//	}
//	
//	printf("\nNot in for loop");


//	//sum of first 10 natural numbers
//	int i, sum=1;
//	
//	for(i=1;i<=100;i++){
//		sum=sum*i;
//	}
//	printf("%d ",sum);


	//print first n odd natural numbers
	int i,n;
	
	printf("Enter the value of 'n': ");
	scanf("%d",&n);
	
	for(i=n; i>=1; i--){
		printf("%d ",i*2-1);
	}
	return 0;
}

