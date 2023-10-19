#include "main.h"
/**
 * print_diagonal - function print line
 * @n: - parameter from input until when print \
 * main.h header file
 * Return: Void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
