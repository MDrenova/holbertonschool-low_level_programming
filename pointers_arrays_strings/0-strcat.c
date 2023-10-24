#include <stdio.h>
/**
 * _strcat - cut string
 * @dest: destination where the string will be copied
 * @src: source of what will be cut
 * Return: destination
 */
char *_strcat(char *dest, char *src)
{
	int len, i;
	len = 0;
	i = 0;

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len] = src[i];

		len++;
		i++;
	}
	dest[len] = '\0';

	return (dest);
}
