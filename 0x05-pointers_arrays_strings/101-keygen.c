#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - generates random passwords
 * Return: 0
 */

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 1324)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(1324 - sum);
	return (0);
}
