#include "main.h"

/**
 * reverse_array - Reverse the content of an array of integer
 * @a: the array of integers to be reversed
 * @n: the number of elements in the arrary
 */

void reverse_array(int *a, int n)
{
	int i = 0, index;

	for (index = n / 2; index > 0; index--, i++)
	{
		a[n - i - 1] += a[i];
		a[i] = a[n - i - 1] - a[i];
		a[n - i - 1] = a[n - i - 1] - a[i];
	}
}
