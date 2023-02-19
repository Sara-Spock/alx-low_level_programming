#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int lr;

	for (lr = 'z'; lr >= 'a'; lr--)
	{
		putchar(lr);
	}
	putchar('\n');
	return (0);
}
