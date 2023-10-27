/**
 * _atoi - function to convert string to number
 * @s: the string that will be convert
 * Return: the converted string
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += sign * (s[i] - '0');
		}
		else if (result)
			break;
		i++;
	}
	return (result);
}
