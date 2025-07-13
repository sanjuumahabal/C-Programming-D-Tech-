#include<stdio.h>
//Fibonacci Series

int main(){
	int a=-1, b=1, c;
	
	int i;
	
	//print first n terms in fibonacci series
//	for(i=1; i<=10; i++){
//		c = a + b;
//		printf("%d ",c);
//		a = b;
//		b = c;
//	}

	//find nth term
	int search;
	
	printf("Enter the term to search in fibonacci Series: ");
	scanf("%d",&search);
	
	
	if(search==0 || search==1){
		printf("Present in the Fibo Series\n");
		return 0;
	}
	
	while (1) {
        c = a + b;
        if (c == search) {
            printf("%d is in the Fibonacci Series.\n", search);
            break;
        }
        if (c > search) {
            printf("%d is NOT in the Fibonacci Series.\n", search);
            break;
        }
        a = b;
        b = c;
    }
			
	
	return 0;
}

