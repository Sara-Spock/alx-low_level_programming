#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and print it
 * and if the number is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
	int  n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lu is positive\n", n);
	else if (n < 0)
		printf("%lu is negative\n", n);
	else
		printf("%lu is zero\n", n);

	return (0);
}
