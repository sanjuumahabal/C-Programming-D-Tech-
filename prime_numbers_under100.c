#include<stdio.h>

int main(){
	int num;
	
//	printf("Enter a Number: ");
//	scanf("%d",&num);
	
	
	int i, flag, j, count=0;
	
	for(j=2; j<=200; j++){
		for(i=2; i<=j/2;i++){
			flag=1;
			if(j%i==0){
				flag=0;
//				printf("Not Prime !!");
				break;
			}
		}
		if(flag){
			printf("%d ",j);
			count++;
		}
	}
	
	printf("\nTotal Prime Numbers printed %d\n",count);
		
	
	
	return 0;
}

