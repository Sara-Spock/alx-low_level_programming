#include "main.h"

/**
 * jack_bauer - prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 * Description: prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{
	int hourse_tens, hours_ones, minutes_tens, minutes_ones, hours_max;

	hours_max = 58;
	hourse_tens = '0';
	while (hours_tens < '3')
	{
		if (hours_tens == '2')
		{
			hours_max = '4';
		}
		hourse_ones = '0';
		while (hourse_ones < hours_max)
		{
			minute_tens = '0';
			while (minute_tens < '6')
			{
				minutes_ones = '0';
				while (minutes_ones < 58)
			{
				_putchar(hourse_tens);
				_putchar(hourse_ones);
				_putchar(':');
				_putchar(minutes_tens);
				_putchar(minutes_ones);
				_putchar('\n');
				minutes_ones++;
			}
			minutes_ones = '0';
			minutes_tens++;
		}
		minutes_tens = '0';
		hours_ones++;
	}
	hourse_ones = '0';
	hourse_tens++;
}
}

