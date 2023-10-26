#include <stddef.h>
/**
 * _strpbrk - functions to search a char in str
 * @s: pointer to string
 * @accept: character to compare
 * Return: point to nth char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return (NULL);
}
