#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int m;

	for (m = 0; m < 10; m++)
	{
		putchar(m + '0');
	}
	putchar('\n');
	return (0);
}
