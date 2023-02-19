#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char m;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
