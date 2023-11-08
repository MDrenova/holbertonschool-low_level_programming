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
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	char *index;
	unsigned int i;
	unsigned int total_len;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;

	total_len = length1 + n;

	index = malloc(total_len + 1);

	if (index == NULL)
		return (NULL);

	for (i = 0; i < length1; i++)
	{
		index[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		index[length1 + i] = s2[i];
	}
	index[total_len] = '\0';

	return (index);
}
