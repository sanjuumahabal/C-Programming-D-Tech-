#include<stdio.h>
//#include<math.h>

//armstrong number
int main(){
	int num;
	
	printf("Enter a Number: ");
	scanf("%d",&num);
	
	int temp = num, digits=0;
	
	while(temp!=0){
		temp/=10;
		++digits;
	}
	
	temp=num;
	
	int rem, sum=0;
	
	while(temp!=0){
		rem = temp%10;
		sum = sum + pow(rem,digits);
		temp/=10;
	}
	
	if(sum==num)
		printf("%d is an armstrong number.\n",num);
	else
		printf("%d is not an armstrong number.\n",num);
	return 0;
}

