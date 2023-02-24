#include "main.h"

/**
 * print_integer - prints number
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	int m;

	m = n;
	if (n < 0)
	{
		_putchar(45);
		m = -n;
	}
	if (m / 10)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}
