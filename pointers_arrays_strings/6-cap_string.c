/**
 * cap_string - changes all lowercase letter of a string to uppercase
 * @str: string
 * Return: charachter
 */

char *cap_string(char *str)
{
	int i, j;
	char a[13] = {' ', '.', ',', '\t', '\n', '(', ')', '\\', '{', '}', '!'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{

			if (str[i] == a[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		}
	}

	return (str);
}
