#include <stdarg.h>

/**
 * sum_them_all - sum of arg past to funct
 * @n: number of int tht will be past
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list num;

	va_start(num, n);
	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, unsigned int);
	}
	va_end(num);

	return (sum);

}
