#include "main.h"
/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the number to change.
 * @index: The index of the bit to set.
 *
 * Return: If an error occurred - -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n | (1 << index);

	return (1);
}
