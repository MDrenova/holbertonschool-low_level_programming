#include "main.h"
/**
 * _isdigit - Entry point
 * header file
 * @c: is parameter
 * Return:0
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
