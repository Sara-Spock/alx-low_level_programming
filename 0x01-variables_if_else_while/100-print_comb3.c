#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0 (success)
 */
int main(void)
{
		int m, d;

		for (m = '0'; m <= '9'; m++)
		{
			for (d = '0'; d <= '9'; d++)
			{
				if (m < d)
				{
					putchar(m);
					putchar(d);
					
					if (m != '8' || (m == '8' && d != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
