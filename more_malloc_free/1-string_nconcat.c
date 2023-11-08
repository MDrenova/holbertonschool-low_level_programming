#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * string_nconcat - concat 2 strings
 * @s1: string
 * @s2: string 2
 * @n: number of charachters of str 2 to concat
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len;
	char *str;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	len = strlen(s2);
	if (n < strlen(s2))
		len = n;
	str = malloc(strlen(s1) + len);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < strlen(s1); i++)
		str[i] = s1[i];
	for (i = 0; i < len; i++)
		str[strlen(s1) + i] = s2[i];
	str[strlen(s1) + i] = '\0';

	return (str);
}
