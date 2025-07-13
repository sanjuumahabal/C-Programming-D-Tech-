#include<stdio.h>

int main(){
	int i,j;
	
	
//	PATTERN 1
//	for(i=0; i<10; i++){
//		for(j=0; j<10; j++){
//			if(j<=i){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}






	//PATTERN 2
//	for(i=0; i<4; i++){
//		for(j=0; j<7; j++){
//			if(j>=3-i && j<=3+i){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}






	//PATTERN 3
//	for(i=0; i<4; i++){
//		for(j=0; j<7; j++){
//			if(j>=i && j<=6-i){
//				printf("*");
//			}
//			else{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
	
	
	//PATTERN 4
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(j<=4-i){
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

