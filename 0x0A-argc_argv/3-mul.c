#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that takes the first two integer arguments
 * and prints the product
 * @argc: number of command linearguments
 * @argv; Arry name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
		int i, g;

		if (argc == 1 || argc == 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			g = 1;

			for (i = 1; i < 3; i++)
				g *= atoi(argv[i]);

			printf("%d\n", g);
		}
		return (0);
}
