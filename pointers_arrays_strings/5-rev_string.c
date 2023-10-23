#include "main.h"
/**
 * rev_string - print a string
 * @s: entered value
 */

void rev_string(char *s)
{
	int len = 0;
	int end, start;

	while (s[len] != '\0')
		len++;
	end = len - 1;
	start = 0;

	while (start < end)
	{
		char tmp = s[start];

		s[start] = s[end];

		s[end] = tmp;

		start++;
		end--;
	}

}
