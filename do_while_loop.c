#include<stdio.h>
//do while loop
// print 10 even natural numbers
int main(){
	int i=0;
	
	do{
		if(i%2==0){
			printf("%d ",i);
			break;
		}
		i++;
		
	}while(i!=1);		//i=11
	
	
//	if(i<=2){
//		printf("%d ",i);
//		break;
//	}
	
	return 0;
}

