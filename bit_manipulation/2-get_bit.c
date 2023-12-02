#include "main.h"
/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number given
 * @index: bit we want to get
 * Return: the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
