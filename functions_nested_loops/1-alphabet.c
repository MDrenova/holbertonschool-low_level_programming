#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		_putchar(lett);
	_putchar('\n');
}
