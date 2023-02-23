#include "main.h"

/**
 * isalpha - Entry point
 * @c: value integer recieves
 * Description: checks for alphabetic character
 * Return: 1 if true. 0 if false.
 */
int isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
