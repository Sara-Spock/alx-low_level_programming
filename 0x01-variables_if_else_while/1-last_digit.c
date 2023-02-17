#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: A program that will assign a random number to the variable n
 * each time it is executed
 * Return 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last number of %d is %d  and is greater than 5\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last number of %d is %d and is lass than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Last number of %d is %d and is 0\n", n, l);
	}
	return (0);
}
