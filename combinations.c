#include<stdio.h>


int fact(int number){		//TSRS
	//to calculate factorial of a number
	if(number<0)
		return 0;
	
	int i, factorial=1;
	for(i=1; i<=number; i++){
		factorial = factorial * i;
	}
	return factorial;
}

int combine(int n, int r){		//TSRS
	int result = fact(n)/(fact(r)*fact(n-r));
	return result;
}

int main(){
	int n=8, r=2;
	
	printf("%d\n",combine(n,r));
	
	return 0;
}

