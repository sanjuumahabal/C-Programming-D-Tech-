#include<stdio.h>
// prime number
int main(){
	
	int num;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	int i, k;
	
	for(i=2; i<=num/2; i++){
		k=1;
		if(num%i==0){
			k=0;
			printf("Not Prime !!");
			break;
		}
	}
	if(k){
		printf("Prime Number !!");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

