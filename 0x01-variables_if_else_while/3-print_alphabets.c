#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints alphabet in lowercase then uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		putchar(lr);
	}
	for (lr = 'A'; lr <= 'Z'; lr++)
	{
		putchar(lr);
	}
	putchar('\n');
	return (0);
}
