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
	unsigned int i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		s[i] = s1[i];
	for (i = 0; i < strlen(s2); i++)
		s[strlen(s1) + i] = s2[i];
	s[strlen(s1) + i] = '\0';
	return (s);
}
