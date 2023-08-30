#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#include<stdlib.h>
/**
 * main-entry point into the code
 *
 * printf-will print out if you win or loss
 *
 * if-this will compare if you win or looss
 *
 * Return:Always 0 (success)
 */
int main(void)
{
	srand(time(NULL));
	int max_number=10;
		int rand_num = rand() % max_number + 1;
		printf("%d\n", rand_num);
		printf("guess a number from 1-%d:", max_number);
		int input;
		scanf("%d", &input);
		if (rand_num == input)
		{
		printf("You win !!!\n");
		}
		else
		{
		printf("You lose!!!\n");
	
		}
		if (rand_num == 6)
		{
			printf("it's is equal to 6\n");
		}
		printf("play again");
		return (0);
}

