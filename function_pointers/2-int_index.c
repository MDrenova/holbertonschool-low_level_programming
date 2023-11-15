#include <stddef.h>
/**
 * int_index - check on for an element array
 * @size: size of array
 * @cmp: pointer to a function that will compare
 * @array: array for input
 * Return: return the index or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			return (i);
		}
	}

	return (-1);
}
