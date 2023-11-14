#include <stddef.h>
/**
 * array_iterator - prints array
 * @size: size of array
 * @action: pointer to a function that will be used
 * @array: array for input
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
