#include "search_algos.h"
#include <stdlib.h>
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @start: index where to start the index
 * @end: end of array
 */
void print_array(const int *array, int start, int end)
{
	int i = start;

	printf("Searching in array: ");
	while (array && i < end)
	{
		printf("%d", array[i]);
		if (i < end - 1)
			printf(", ");
		++i;
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: array that will be searched in
 * @size: size of array
 * @value: value to search in array
 * Return: (-1) for null or not find or the index otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, medium;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		medium = (left + right) / 2;
		print_array(array, left, right + 1);
		if (array[medium] < value)
			left = medium + 1;
		else if (array[medium] > value)
			right = medium - 1;
		else
			return (medium);
	}
	return (-1);
}
