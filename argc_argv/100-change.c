#include <stdio.h>
#include <stdlib.h>
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int i, count, amount;
	int cents[] = {25, 10, 5, 2, 1};

	count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		while (amount >= cents[i])
		{
			amount -= cents[i];
			count++;
		}
	}
	printf("%d\n", count);
	return (0);

}
