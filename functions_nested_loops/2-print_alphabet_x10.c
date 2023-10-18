#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char lett;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
			_putchar(lett);
		_putchar('\n');
	}

}
