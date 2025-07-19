#include<stdio.h>
//funtions

/*
1. LCM
2. prime number
3. star
*/



void printHello(){			//function definition
	printf("Hello, Good Morning !!");
	printf("End of printHello Function !!");
	
}

void subtraction();		//function prototype


void addition(){
	int num1,num2;
	
	printf("\nEnter Two Numbers: ");
	scanf("%d%d",&num1, &num2);
	
	printf("\nSum is %d\n",num1+num2);
	
}



void check(){
	
	int choice;
	printf("\ncheck function choice: %d",choice);
		
}

int main(){
	printf("\n1. Addition ");
	printf("\n2. Subtraction ");
	printf("\n3. Exit");
	
	int choice;
	
	
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);

	switch(choice){
		case 1:
			addition();		//function call
			break;
		case 2:
			subtraction();
			break;
		case 3:
			printf("Thank You !!");
			break;
		default:
			printf("Invalid !");
			break;
	}
	return 0;
}


void subtraction(){
	int num1,num2;
	
	printf("\nEnter Two Numbers: ");
	scanf("%d%d",&num1, &num2);
	
	printf("\nDifference is %d\n",num1-num2);
}
