#include<stdio.h>


void test(){			//function definition
	printf("\nGood Afternoon Everyone !!");
}

void test1(){
	test();			
	printf("This is test1\n");
	printf("\nGood AFternoon!!!");
}

void printN(int k){
	int i;
	for(i=1; i<=k; i++){
		printf("%d ",i);
	}
}

int sum(int n){
	//calculate sum of first n natural numbers
	int i, sum = 0;
	
	for(i=1; i<=n; i++){
		sum+=i;
	}
	
	return sum;
}

int square(int num){
	return num*num;
}

float areaOfRectangle(float l, float b){
	return l*b;
}


int main(){
	
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	
	float average = sum(n)/(float)n;
	
	float l=4.5, b=3.2;
	
	printf("Average is %f\n",average);
	printf("Square is %d\n",square(n));
	printf("Area of Rectangle is %f\n",areaOfRectangle(l,b));
	
	return 0;
}

