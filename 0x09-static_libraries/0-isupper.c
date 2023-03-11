#include "main.h"

/**
 * _isupeer - cheks a character is uppercase
 * @c: carrier integer variable
 * Return:
 * 1 if true, 0 if fase
 */
int _isupper(int c)
{
	if (c >= 65 && c<= 90)
	{
		return (1);
	}
	return (0);
}
