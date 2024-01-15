#include "search_algos.h"
/**
 * linear_search - funtion that searches for a value in an array of integers
 * @array: array that will be searched in
 * @size: size of array
 * @value: value to search in array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n",i,array[i]);

		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
