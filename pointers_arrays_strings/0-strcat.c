#include <stdio.h>
/**
 * _strcat - cut string
 * @dest: destination where the string will be copied
 * @src: source of what will be cut
 * Return: destination
 */
char _strcat(char *dest, char *src)
{
	int len, len_src, j, i;
	
	len = 0;
	len_src = 0;
	j = 0;

	while (dest[len] != '\0')
		len++;
	while (src[len_src] != '\0')
		len_src++;
	for (i = len_src; i < len; i++)
	{
		src[len_src] = dest[j];
		j++;
	}
	dest[i] = '\0';

	return (*dest);
}
