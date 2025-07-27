#include<stdio.h>
//print fibonacci series
int fibonacci(int n){
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	return fibonacci(n-1)+fibonacci(n-2);
}

int power(int n, int p){
	if(p==0)
		return 1;
	if(p==1)
		return n;
	return n*power(n,p-1);
}
int main(){
	int i,n=10;
//	for(i=0; i<10; i++){
//		printf("%d ",fibonacci(i));	
//	}
	printf("10 to the power 4 is %d\n",power(10,4));
	return 0;
}

