#include "main.h"

/**
 * print_line - prints a line
 * @n: variable
 *
 * Return: 0
 */

void pritn_line(int n)
{
	int a;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 0; a < n; a++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
