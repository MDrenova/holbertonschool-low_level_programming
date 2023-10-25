/**
 * _strcmp - function to compare string alphabetically
 * @s1: first string
 * @s2: second string
 * Return: defference of strings
 */
int _strcmp(char *s1, char *s2)
{
	int i, def;

	def = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		def = s1[i] - s2[i];
		if (def != 0)
			return (def);
	}
	return (def);
}
