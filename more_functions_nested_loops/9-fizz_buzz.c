#include <stdio.h>
/**
 * main- function entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char fizz[] = "Fizz";
	char buzz[] = "Buzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s", buzz);
			break;
		}
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("%s%s ", fizz, buzz);
		else if (i % 3 == 0)
			printf("%s ", fizz);
		else if (i % 5 == 0)
			printf("%s ", buzz);
		else
			printf("%d ", i);
	}
	printf("\n");

	return (0);
}
