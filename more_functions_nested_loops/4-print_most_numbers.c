#include "main.h"
/**
 * print_most_numbers - function print except 2,4
 * main.h header file
 * Return:0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
	}
	_putchar('\n');
}
