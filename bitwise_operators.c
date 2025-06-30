#include<stdio.h>

int main(){
	int num = 6, num1 = 11;
	
	printf("%d\n",num&num1);		//bitwise AND
	printf("%d\n",num|num1);		//bitwise OR
	printf("%d\n",num^num1);		//bitwise XOR
	
	//right shift
	printf("%d\n",12>>2);
	printf("%d\n",9>>3);
	
	//left shift
	printf("%d\n",12<<2);
	printf("%d\n",9<<3);
		
	return 0;
}
