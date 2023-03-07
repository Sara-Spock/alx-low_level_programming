#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c; the character to print
 *
 * Return: write on success 1
 * On error, -1 is returned and errno is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
