#include<stdio.h>

int main(){
//	int a, b= 5;
//	
//	printf("Enter a Value: ");
//	scanf("%d",&a);
//	
//	
//	switch(a){
//		case 5:
//			printf("This is one !\n");
//			break;
//		case 'a':
//			printf("This is two!!\n");
//			break;
//		case 7:
//			printf("Three\n");
//			break;
//		case 4:
//			printf("Four\n");
//			break;
//		case 10:
//			printf("Five !!!\n");
//			break;
//		default:
//			printf("Invalid case Constant\n");
//	}



	//simple calculator
	
	float num1, num2;
	
	printf("\nEnter Two Numbers: ");
	scanf("%f%f",&num1, &num2);
	
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Product\n");
	printf("4. Division\n");
	
	int choice;
	
	printf("\nEnter Your Choice: ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("Sum is %f.\n",num1+num2);
			break;
		case 2:
			printf("Difference is %f.\n",num1-num2);
			break;
		case 3:
			printf("Product is %f.\n",num1*num2);
			break;
		case 4:
			printf("Division is %f.\n",num1/num2);
			break;
		default:
			printf("Invalid Input\n");
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
