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
	int len = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s[i] = str[i];
	s[i] = '\0';
	return (s);
}
