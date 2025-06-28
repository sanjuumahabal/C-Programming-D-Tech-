#include<stdio.h>
//WAP to calculate area of a circle. (pi*r^2)
int main(){
	float radius;
	
	printf("Enter Radius of a Circle: ");
	scanf("%f",&radius);
	
	float area = 3.14156 * radius * radius;
	
	printf("Area of Circle is %f.\n",area);
}
