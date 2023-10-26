/**
 * _memset - functions to set n bytes with a charachter
 * @s: pointer to string
 * @b: character to fill
 * @n: n-th byt to fill
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
