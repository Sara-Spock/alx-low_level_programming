#include "main.h"

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];
		
		_putchar(c);
		i++;
	}
	return (0);
}
