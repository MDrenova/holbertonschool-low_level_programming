#include "main.h"
/**
 * print_binary - print the converted number dec to binary
 * @n: number to convert
 *
 * Return: the converted number
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) + '0');
}
