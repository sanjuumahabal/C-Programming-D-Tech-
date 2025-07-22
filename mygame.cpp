#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void game(){
	
	int number;
	srand(time(0));
    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    printf("******NUMBER GUESSING GAME******");
    int attempts = 0;
	do{
		printf("\nEnter your guess: ");
		scanf("%d",&number);
		
		attempts++;
		
		if(number==randomNumber){
			printf("\nYou Won !!!");
			printf("\nAttempts: %d",attempts);
			break;
		}
		else if(number<randomNumber){
			printf("Too Low !!");
		}
		else{
			printf("Too High !!");
		}
		
		
	}while(1);
}

int main(){
	char choice;
	do{
		game();
		printf("\nDo you want to play again? (y/n): ");
		scanf(" %c",&choice);
		system("cls");
		
	}while(choice=='y'||choice=='Y');
	
	printf("Thank You !!!");
	
	return 0;
}

