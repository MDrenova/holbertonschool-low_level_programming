#include <stdlib.h>
/**
 * array_range - creates an array of integers and contains value
 * for min to max
 * @min: minimun value
 * @max: maximum value
 * Return: pointer to the newly created array, NULL if min greater than
 * max and if malloc fails
 */
int *array_range(int min, int max)
{
	int *array_int;
	int i, len;

	if (min > max)
		return (NULL);
	for (i = min; i < max; i++)
		len++;

	array_int = malloc(len * sizeof(int));
	if (array_int == NULL)
		return (NULL);

	i = 0;

	while (i < len && min <= max)
	{
		array_int[i] = min;
		min++;
		i++;
	}
	return (array_int);
}
