#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function to concate 2 arry
 * @s1: first string
 * @s2: second string
 * Return: null or a pointer to s
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int len = strlen(s1);
	int len2 = strlen(s2);
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s = malloc(sizeof(char) * (len + len2 + 1));
	if (s == NULL)
		return NULL;
	for (i = 0; i < len; i++)
		s[i] = s1[i];
	for (i = 0; i < len2; i++)
		s[len + i] = s2[i];
	s[len + i] = '\0';
	return (s);
}
