#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
//    int num1=45, num2=50;
//	
//    printf("\nnum1 = %d, num2 = %d\n", num1, num2);
//    
//    swap(&num1, &num2);
//
//    printf("\nnum1 = %d, num2 = %d\n", num1, num2);


	int a = 45;
	
	int *b;
	
	b = &a;
	
	int c=10;
	
	int *p = &c;
	
	printf("%d %d %d %d\n",a,*&b, *p, *p);
	printf("%d %d %d\n",*b,*&a, &b);
	
//	printf("%d\n",*b);
	
    return 0;
}

