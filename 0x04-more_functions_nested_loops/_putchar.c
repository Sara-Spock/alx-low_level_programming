#include <unistd.h>

/**
 * _putchar - writes character in 
 * @c:the character to print
 * Return: 1 if true, 0 if false
 * on error, -1 return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
