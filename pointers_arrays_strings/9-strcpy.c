#include <stdio.h>
/**
 * *_strcpy - copy an array
 * @dest: entered value for destination array
 * @src: array that will be copied
 * Return: the copied array
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
