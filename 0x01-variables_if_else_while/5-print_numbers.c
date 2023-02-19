#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers
 * of base 10 starting from 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		printf("%i", m);
	}
	putchar('\n');
	return (0);
}
