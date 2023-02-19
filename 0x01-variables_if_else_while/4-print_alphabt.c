#include <stdio.h>
#include <unsitd.h>
/**
 * main - Entry point
 * Description: prints lowercase alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
	int lr;

	for (lr = 'a'; lr <= 'z'; lr++)
	{
		if (lr != 'e' && lr != 'q')
		{
			putchar(lr);
		}
		else
		{
		}
	}
	putchar('\n');
	return (0);
}
