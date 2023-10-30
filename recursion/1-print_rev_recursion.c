#include "main.h"
/**
 * _print_rev_recursion - function to make recursive rev string
 *
 * @s: string pointer
 */
void _print_rev_recursion(char *s);
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
		_putchar('\n');
}
