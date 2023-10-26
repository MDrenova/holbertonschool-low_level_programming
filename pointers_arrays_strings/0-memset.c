/**
 * _memset - functions to set n bytes with a charachter
 * @s: pointer to string
 * @b: character to fill
 * @n: n-th byt to fill
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i, j;
	
	for (j = 0; j < (int) n; j++)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
