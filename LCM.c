#include<stdio.h>

int main(){
	int num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%d%d",&num1,&num2);
	
	int big;
	
	//ternary operator	(?:)
	
	big = num1>num2?num1:num2;

	int i;
	
	for(i=big;i<=num1*num2;i++){
		if(i%num1==0 && i%num2==0){
			printf("LCM is %d\n",i);
			break;
		}
	}
	
	return 0;
}

