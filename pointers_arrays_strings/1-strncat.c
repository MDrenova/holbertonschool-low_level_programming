#include <stdio.h>
/**
 * _strncat - cut string to n-th element
 * @dest: destination where the string will be copied
 * @src: source of what will be cut
 * @n: until when it will be cuted
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < n)
	{
		dest[len] = src[i];

		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
