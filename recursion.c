#include<stdio.h>

void print(int n){
	if(n==0)
		return;
	print(n-1);
	printf("%d ",n);
}

int sum(int n){
	if(n==1)
		return 1;
	return n+sum(n-1);
}

int main(){
	int n=10;
//	printf("%d\n",sum(n));
	print(n);
	return 0;
	
}
