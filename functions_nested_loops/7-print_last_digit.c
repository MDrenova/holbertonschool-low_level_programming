#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: is parameter
 * return abs(n);
 * Return:0
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n = -n;
		_putchar (n + '0');
		return (n);
	}
	else
	{
		_putchar (n + '0');
		return (n);
	}
}
