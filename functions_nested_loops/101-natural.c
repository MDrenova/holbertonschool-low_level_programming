#include <stdio.h>
/**
 * main - open fuction to make multip of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int i, j, sum, sum1;

	sum = 0;
	sum1 = 0;
	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		if (i % 3 == 0 && i % 5 == 0)
			sum1 = sum1 + i;
	}

	sum = sum - sum1;
	printf("Sum of multipliesa number with 3 and 5 is %d \n", sum);

	return (0);
}
