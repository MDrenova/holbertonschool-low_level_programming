#include <stdlib.h>
/**
 * _calloc - allocated memory for an array using malloc
 * @nmemb: number of elemets
 * @size: size of bytes for each element
 * Return: NULL if nmemb or size is 0 and if malloc failes else return
 * pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	char *arr = malloc(size * nmemb);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb)
		arr[i] = 0;
	return (arr);
}
