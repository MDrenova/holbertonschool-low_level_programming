#include "main.h"
/**
 * _isupper - Entry point
 * header file
 * @c: is parameter
 * Return:0
 */

int _isupper(int c)
{
	int i;
	
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
