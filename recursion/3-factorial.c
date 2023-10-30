#include "main.h"
/**
 * factorial - function to calculate fact!
 *
 * @n: factorial num
 *
 * Return: 1 for 0 value, faktorial number if n > 0 and -1 for negative input
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	else
		return (1);
}
