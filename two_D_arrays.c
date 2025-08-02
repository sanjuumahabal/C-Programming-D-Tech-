#include<stdio.h>
//
void printArray(int a[][3], int row){
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void printAddress(int a[][3], int row){
	int i,j;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ",&a[i][j]);
		}
	}
	printf("\n");
}

void add(int a[][3], int b[][3], int row){
	
	int sum[3][3];
	int i, j;
	
	for(i=0; i<row; i++){
		for(j=0; j<row; j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	printf("Addition is: \n");
	printArray(sum,row);
	
}

void takeInput(int a[][3], int row){
	int i, j;
	for(i=0; i<row; i++){
		for(j=0; j<row; j++){
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}

int main(){
	int a[3][3];
	int b[3][3];
	
//	printAddress(a,3);
	takeInput(a,3);
	takeInput(b,3);
	
	printArray(a,3);
	printArray(b,3);

	add(a,b,3);
	
	return 0;
}

