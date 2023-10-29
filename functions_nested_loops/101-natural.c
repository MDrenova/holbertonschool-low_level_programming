#include <stdio.h>
/**
 * main - open fuction to make multip of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}
