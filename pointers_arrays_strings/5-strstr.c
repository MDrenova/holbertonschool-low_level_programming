#include <stddef.h>
/**
 * _strstr - functions to compare a string in another string
 * @haystack: pointer to string
 * @needle: pointer a string to compare
 * Return: point to nth char
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *haystack_i = haystack;
		char *need_i = needle;

		while (*haystack_i == *need_i && *need_i != '\0')
		{
			haystack_i++;
			need_i++;
		}
		if (*need_i == '\0')
			return haystack;
	}

	return (NULL);
}
