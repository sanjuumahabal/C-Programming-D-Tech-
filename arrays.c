#include<stdio.h>
//Arrays
int main(){
	int n=56;
	
	int marks[] = {45,78,65,43,23,56,78,98,76,54,67,54,23};		//declaration of arrays
	
//	float arr[] = {45.56, 3.1416, 78.56};
	
	int m[6];
	
	m[0] = 50;
	m[1] = 46;
	m[2] = 56;
	m[4] = 78;
	m[0] = 55;
	
	printf("%d %d %d %d %d %d\n",&m[0], &m[1], &m[2], &m[3], &m[4], &m[5]);
	
	
	return 0;
}

