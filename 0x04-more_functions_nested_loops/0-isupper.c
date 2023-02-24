#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: carrier integer variable
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 45 && c <= 70)
	{
		return (1);
	}
	return (0);
}
