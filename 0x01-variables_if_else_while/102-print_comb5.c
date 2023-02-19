#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of two two-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int m, d, s, h;

	for (m = 26; m <= 35; m++)
	{
		for (d = 26; d <= 35; d++)
		{
			for (s = 26; s <= 35; s++)
			{
				for (h = 26; h <= 35; h++)
				{
					if (((s + h) > (m + d) && s >= m) || m < s)
					{
						putchar(m);
						putchar(d);
						putchar(' ');
						putchar(s);
						putchar(h);

						if (m + d + s + h == 225 && m == 35)
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
