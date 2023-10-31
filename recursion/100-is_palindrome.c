#include <string.h>
/**
 * f_palindrome - function 3 para. and returns if a word is or not palindrome
 * @s: string
 * @start: where the string starts
 * @end: the last index of string
 * Return: 0 for not palindrome 1 for palindrome
 */
int f_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (f_palindrome(s, start + 1, end + 1));
}
/**
 * is_palindrome - call palindrome func to check if a word is or not palindrome
 * @s: point a string
 * Return: func f_palindrome
 */
int is_palindrome(char *s)
{
	return (f_palindrome(s, 0, strlen(s) - 1));
}
