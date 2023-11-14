#include <stdio.h>

/**
 *print_name - prints a name
 *@name: name to be printed
 *@f: function callback
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
