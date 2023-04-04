#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - a programthat takes in all integer arguments and returnss the sum.
 * @argc: Number of comman line arguments
 * @argv: Array name
 * Return: 1 if a non integer is among the passed in arguments,
 * 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, g, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);

			for (g = 0; g < leanght; g++)
			{
				if (isdigit(*(ptr + g)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
