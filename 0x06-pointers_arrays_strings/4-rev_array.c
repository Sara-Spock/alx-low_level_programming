#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integer
 * @a: the array of integers to be reversed
 * @n: the number of elements in the arrary
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = -1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
