#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: program will assign a random number to the variable n
 * each time it is executed
 * Return 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last number of %i is %i and is greater than 5\n", n. last);
	}
	else if (last == 0)
	{
		printf("Last number of %i is %i and is 0\n", n, last);
	}
	else if (last < 6)
	{
		printf("Last number of %i is %i and is less than 6 and not 0\n", n, Last);
	}
	return (0);
}
