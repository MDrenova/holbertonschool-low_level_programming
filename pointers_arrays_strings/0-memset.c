/**
 * _memset - functions to set n bytes with a charachter
 * @s: pointer to string
 * @b: character to fill
 * @n: n-th byt to fill
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
