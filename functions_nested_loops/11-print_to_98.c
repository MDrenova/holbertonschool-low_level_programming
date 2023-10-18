#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point
 * @n: random number
 * Print natural number until 98;
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		printf("%d, ", n);
		do {
			n = n + 1;
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d", n);
		} while (n < 98);
		printf("\n");
	}

	else if (n > 98)
	{
		printf("%d, ", n);
		do {
			n = n - 1;
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
				printf("%d", n);
		} while (n > 98);
		printf("\n");
	}

	else
		printf("%d\n", n);
}
