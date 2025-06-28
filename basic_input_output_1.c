#include<stdio.h>
//WAP to calculate sum of two nums, take numbers as input from user.

int main(){
	float num1=2, num2=4,sum=0;
	
//	printf("Sum of %f and %f is %f.\n",num1,num2,(num1+num2));
	printf("Enter Two Numbers: ");
	scanf("%f,%f",&num1,&num2);
	
	sum = num1+num2;
	
	printf("Sum of %f & %f is %f",num1,num2,sum);
	
	
	return 0;
}
