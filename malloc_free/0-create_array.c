#include <stdlib.h>
/**
 * create_array - function to create an arry
 * @size: sie of array
 * @c: character
 * Return: null or a pointer to s
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s = (char *)malloc(sizeof(c) * size);

	if (size == 0)
		return (NULL);
	if (s == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
