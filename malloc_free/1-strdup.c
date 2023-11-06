#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function to create an arry
 * @str: sie to duplicate
 * Return: null or a pointer to s
 */

char *_strdup(char *str)
{
	int i;
	int len = strlen(str) + 1;

	char *s = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
