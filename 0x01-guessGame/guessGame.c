#include <stdio.h>

/* i want to make a guess game where a user will have 3 chances to guess 
 * a luck number correctly 
 * */

int main ()
{
	int luckyNumber = 71;
	int input;
	int guessLimit =2;
	int guessCount = 0;
	int endCount = 0;

	printf("Guess the Lucky number and win a price. You only have 3 chances!\n");
	scanf("%d", &input);

	while(input != luckyNumber && endCount ==0)
	{
		if (guessCount <  guessLimit)
		{
			printf("Your guess(%d) is wrong. Try again!\n", input);
			scanf ("%d", &input);
			guessCount++;
		} else 
		{
			endCount = 1;
		}
	} 

	if (endCount ==1)
	{
	printf("Sorry, You lost. Come back tomorrow\n");
	} else
	{
		printf("Congrates, You won!\n");
	}
	return 0;
}
