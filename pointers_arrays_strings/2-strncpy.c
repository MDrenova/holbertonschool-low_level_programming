#include <stdio.h>
/**
 * _strncpy - copy string to n-th element
 * @dest: destination where the string will be copied
 * @src: source of what will be copied
 * @n: until when it will be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
