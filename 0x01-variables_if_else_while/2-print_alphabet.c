#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercare
 * Return: ALways 0 (success)
 */
int main(void)
{
	int lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		putchar(lr);
	}
	putchar('\n');
	return (0);
}
