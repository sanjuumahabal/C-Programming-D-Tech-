#include<stdio.h>
#include<string.h>


//STRINGS PART 2
int main(){
	char name[20], name1[20];
	
//	printf("Enter your first name: ");
//	scanf("%s");
//	fgets(name, 20, stdin);		//to input only string values
	
//	printf("Enter Your last name: ");
//	fgets(name1, 20, stdin);
//	
	
//	printf("Name: %s %s",name,name1);

//	printf("%s",name);	
//	printf("Length of name: %d\n",strlen(name));
//	printf("Uppercase name: %s\n",strupr(name));
//	printf("Lowercase Name: %s\n",strlwr(name));
	
//	strcpy(name1, name);
	
//	printf("Reverse String is: %s\n",strrev(name));
	
//	name1 = name;		//it is not possible, it's an error
	
//	strcat(name, name1);
	
	
//	name = "apple";			//problem
	strcpy(name, "apple"); //solution
	
//	name1 = "banana";		//problem
	strcpy(name1,"apple");
	
	
	printf("%d\n",strcmp(name, name1));
	
	
	return 0;
}

