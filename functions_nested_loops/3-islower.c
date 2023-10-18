#include "main.h"
#include <ctype.h>
/**
 * _islower - Entry point
 * ctype.h header file
 * @c: is parameter
 * Return:0
 */

int _islower(int c)
{

	if (islower(c))
		return (1);
	else
		return (0);
}
