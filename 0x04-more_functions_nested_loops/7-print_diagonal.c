#include "main.h"

/**
 * print_diagonal - 7-print_diagonal.c
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < 1)
		{
			_putchar(' ');
			ii++;
		}
		_putchar
			('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
