#include<stdio.h>

int main(){
	int num1 = 57;
	int age = 15;
	
	int answer = !(age>=18);
	
	printf("%d\n",answer);
	
	int n = 573;
	
	int sum = (n%10) + (n/100) + ((n/10)%10);
	printf("Sum is %d\n",sum);
	return 0;
}
