#include<stdio.h>

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	
	
}

int main(){
//	int x = 60;
	
//	int *y = &x;
//	
//	int **z = &y;
//	
//	printf("%d\n",**z);
//	
//	printf("%d %d %d %d\n",y, &z, *y, &x);
//	printf("%d %d %d %d\n",**z, *&x, &y, x);
	
	int p = 10;
	
	int *q = &p;
	
	int **r = &q;
	
	int ***s = &r;
	
	printf("%d %d %d %d\n",p,&q,**&q, *q);
	printf("%d %d %d %d\n",**s,&r, **&q, p);
	printf("%d %d %d %d\n",***s, **r, *q, *&p);
	
	return 0;
}

