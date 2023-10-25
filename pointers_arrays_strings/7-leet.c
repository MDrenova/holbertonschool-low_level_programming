/**
 * leet - changes all lowercase letter of a string to uppercase
 * @str: string
 * Return: charachter
 */

char *leet(char *str)
{
	int i, j;

	char lett[10] = {'a', 'A', 'e', 'E', 'o', 'E', 't', 'T', 'l', 'L'};
	char num[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lett[j])
				str[i] = num[j];
				break;
		}
	}

	return (str);
}
