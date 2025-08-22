#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
};

struct date input_date(){
	struct date temp;
	
	printf("Enter Date: (DD/MM/YYYY) ");
	scanf("%d/%d/%d",&temp.day, &temp.month, &temp.year);
	
	return temp;
}

void print_date(struct date d1){
	printf("%d/%d/%d\n",d1.day, d1.month, d1.year);
}

int main(){
	
	struct date mydate;
	
	struct date *ptr = &mydate;
	
	ptr->day = 12;
	ptr->month = 10;
	ptr->year = 2010;
	
	
	print_date(*ptr);
	
	
	struct date mydate2;
	
	struct date *ptr2 = &mydate2;
	
//	*(arr + i) == arr[i] == i[arr];

	(*ptr2).day = 8;
	(*ptr2).month = 12;
	(*ptr2).year = 2003;
	
	print_date(*ptr2);
	
//	struct date dates[5];
//	
//	int i;
//	for(i=0; i<5; i++){
//		dates[i] = input_date();
//	}
//	
//	//printing dates
//	for(i=0; i<5; i++){
//		print_date(dates[i]);
//	}
	
	
	
//	struct date d1;
//	
//	d1 = input_date();		//TNRS
//	
//	print_date(d1);
	
	return 0;
}
