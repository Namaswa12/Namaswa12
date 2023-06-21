//number guessing game using loops and random number generator

#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int number, guess, nguesses =1;
	srand (time(0));
	number = rand()%100+1;
	do
	{
		printf("guess the number 1 to 100\n");
		scanf("%d",&guess);
		if(guess>number){
			printf("lower number please\n");
		}
		else if(guess<number)
		{
			printf("greater number please\n");
		}
		else if (guess == number){
			printf("yees you got it!\nyou took %d attempts", nguesses);
		}
         
		 nguesses++;
		
		
	}while(guess!=number);
	
		return 0;
}