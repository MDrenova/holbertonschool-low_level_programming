#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 * ctype.h header file
 * @c: is parameter
 * Return:0
 */

int _isalpha(int c)
{

	if (isalpha(c))
		return (1);
	else
		return (0);
}
