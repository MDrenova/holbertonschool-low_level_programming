#include "main.h"
/**
 * print_times_table - print multi table to 14 * 14
 * @n: number input
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, multi;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				multi = i * j;

				if (multi >= 100)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (multi / 100 + '0');
					_putchar (multi % 100 / 10 + '0');
					_putchar (multi % 10 + '0');
				}
				else if (multi >= 10)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (multi / 10 + '0');
					_putchar (multi % 10 + '0');
				}
				else
				{
					if (j == 0)
					{
						_putchar (multi + '0');
					}
					else
					{
						_putchar (',');
						_putchar (' ');
						_putchar (' ');
						_putchar (' ');
						_putchar (multi + '0');
					}
				}
			}
			_putchar('\n');
		}
	}
}
