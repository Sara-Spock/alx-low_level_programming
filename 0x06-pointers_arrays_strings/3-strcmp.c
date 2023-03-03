#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * return: if str1 < str2,the negitve difference
 * of the first unmatched character
 * if s1 == s2, 0.
 * if s1 > s2, the posistve diffrence of the
 * first unmatched charecters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
