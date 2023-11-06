#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function to create an arry
 * @str: sie to duplicate
 * Return: null or a pointer to s
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len = strlen(s1);
	int len2 = strlen(s2); 
	char *s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s = malloc(sizeof(char) * (len + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len + i] = s2[i];
	s[len + i] = '\0';
	return (s);
}
