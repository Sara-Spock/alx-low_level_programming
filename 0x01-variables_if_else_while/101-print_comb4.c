#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 * Return Always 0 (success)
 */
int main(void)
{
	int m, d, s;

	for (m = '0'; m <= '9'; m++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (s = '0'; s <= '9'; s++)
			{
				if (m < d && d < s)
				{
					putchar(m);
					putchar(d);
					putchar(s);

					if (m != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
