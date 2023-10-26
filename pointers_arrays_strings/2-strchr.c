#include <stddef.h>
/**
 * _strchr - functions to search a char in str
 * @s: pointer to string
 * @c: character to fill
 * Return: string
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	if (c == '\0')
		return ("");

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
