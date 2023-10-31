#include "main.h"
/**
 * is_prime - function to see if num is prime or not
 * @n: nume=ber to check
 * @i: numr of iteration
 * Return: 0 for not prime 1 to prime
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0)
		return (0);
	if (i == n / 2)
		return (1);
	else
		return (is_prime(n, i + 1));
}
/**
 * is_prime_number - function to calculate power of a num
 * @n: number to calc prime
 * Return: if num is prime
 */
int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
