#include "main.h"
#include <stdlib.h>
/**
 * _abs - Entry point
 * @n: is parameter
 * return abs(n);
 * Return:0
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
