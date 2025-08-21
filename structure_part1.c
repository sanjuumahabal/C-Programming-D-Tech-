#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct date{
	int day, month, year;
};

struct student{
	int rollno;
	char name[20];
	float marks;
	double fees;
};

int main(){
	struct student s1;
	
	s1.rollno = 40;
	strcpy(s1.name, "Vedika");
	s1.marks = 92.0;
	s1.fees = 100000;
	
	printf("Roll No.: %d\n",s1.rollno);
	printf("Name: %s\n",s1.name);
	printf("Marks: %.1f\n",s1.marks);
	printf("Fees Paid: %.2lf\n",s1.fees);
	
	printf("\n");
	
	
	struct student s2;
	
	printf("Enter Roll No: ");
	scanf("%d",&s2.rollno);
	
	fflush(stdin);
	
	printf("Enter Name: ");
	fgets(s2.name,20,stdin);
	
	printf("Enter Marks: ");
	scanf("%f",&s2.marks);
	
	printf("Enter Fees Paid: ");
	scanf("%lf",&s2.fees);
	
	printf("Roll No.: %d\n",s2.rollno);
	
	s2.name[strlen(s2.name)-1] = '\0';
	
	printf("Name: %s\n",s2.name);
	printf("Marks: %.1f\n",s2.marks);
	printf("Fees Paid: %.2lf\n",s2.fees);
	
	
	
	
	
//	struct date d1 = {21, 8, 2025};		//at the time of decleration
//	
//	printf("%d-%d-%d\n",d1.day, d1.month, d1.year);
//	
//	int num;
//	
//	struct date d2;
//	
//	d2.day = 18;
//	d2.month = 8;
//	d2.year = 2006;
//	
//	printf("%d-%d-%d\n",d2.day, d2.month, d2.year);
	
	return 0;
}
