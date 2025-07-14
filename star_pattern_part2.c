#include<stdio.h>
//star Patters 2
int main(){
	
	int i, j, k=1;
	char c='A';
	//	PATTERN 1 NUMBER/CHARACTER PYRAMID 
	
//	for(i=1; i<=5; i++){		//rows
////		k=1;
//		c='A';
//		for(j=1; j<=9; j++){	//colums
//			if(j>=6-i && j<=4+i){
//				if(j<5){
//					printf("%c",c);
//					c++;
//				}
//				else{
//					printf("%c",c);
//					c--;
//				}
//			}
//			else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
	
	
	
	
	
	//Pattern 2 - Hollow Half Pyramid
	
	for ( i = 1; i <= 10; i++)
    {
        for ( j = 1; j <= 10; j++)
        {
            if((j==1) || (j==i) || (i==10))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
	return 0;
}

