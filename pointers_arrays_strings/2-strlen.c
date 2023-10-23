/**
 * _strlen - lenght of a string
 * @s: entered value
 * Return: length that was counted
 */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
