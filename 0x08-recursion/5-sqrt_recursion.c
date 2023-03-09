#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural sqaure root of an inputted
 * number
 * @num: the number to find the square root of
 * @root: the root to be tsted
 *
 * Return: if the number has natural sqaure root
 * if the number does not have a natural square root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Return the natural square root of number
 * @n: the number to return the square root of.
 *
 * Return: if n has a natural square root - the natural square root
 * of n
 * if n does not have a natural square root - -1
 *
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);
	return (find_sqrt(n, root));
}
