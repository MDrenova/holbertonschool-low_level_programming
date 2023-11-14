#include <stddef.h>
/**
 * array_iterator - prints array
 *@size: size of array
 *@action: pointer to a function that will be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
