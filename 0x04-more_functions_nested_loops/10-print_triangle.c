#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: integer trype
 * Return: void
 */

void print_triangle(int size)
{
	int i = 1, ii;

	while (i <= size && size > 0)
	{
		ii = 0;
		while (ii < size - i)
		{
			_putchar('#');
			i++;
		}

		_putchar('\n');
		i++;
	}
	if (i == 1)
		_putchar('\n');
}
