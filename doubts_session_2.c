#include<stdio.h>
//Program to check whether a year is a leap year or not. Using switch statement

int main(){
	int year;
	
//	printf("Enter Year: ");
//	scanf("%d",&year);
	
	
//	switch((year%4==0 && year%100!=0) || (year%400==0)){
//		case 1:
//			printf("Leap Year !!");
//			break;
//		case 0:
//			printf("Not a Leap Year !!");
//			break;
//	}

	
	
	
	
	//PROGRAM 2
//	 Program to convert a positive number into a negative number and negative
//  number into a positive number using a switch  statement
	
	int choice = 0;
	
//	while(choice!=3){
//		
//		printf("\n1. Positive to Negative");
//		printf("\n2. Negative to Positive");
//		printf("\n3. Exit");
//		
//		int num;
//		printf("\nEnter Your Choice: ");
//		scanf("%d",&choice);
//		
//		switch(choice){
//			case 1:
//				printf("Enter a Positive Number: ");
//				scanf("%d",&num);
//				
//				if(num<0)
//					printf("%d",num);
//				else{
//					num = num*(-1);
//					printf("Number: %d\n",num);
//				}
//				break;
//			case 2:
//				printf("Enter a Negative Number: ");
//				scanf("%d",&num);
//				
//				if(num>0){
//					printf("Number: %d\n",num);
//				}
//				else{
//					num = num*(-1);
//					printf("Number: %d\n",num);
//				}
//				break;
//			case 3:
//				printf("Thank You !!");
//				break;
//			default:
//				printf("Invalid Input\n");
//		}
//	}




	//DIAMOND PATTERN
	int i,j;
	for(i=1; i<=4; i++){
		for(j=1; j<=9; j++){
			if(j>=6-i && j<=4+i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=1; i<=5; i++){
		for(j=1; j<=9; j++){
			if(j>=i && j<=10-i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}

