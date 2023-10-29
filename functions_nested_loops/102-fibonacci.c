#include <stdio.h>
/**
 * main - open fuction to make multip of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	signed long int i, nr, nr_s, nr_fib;

	nr = 0;
	nr_s = 1;
	nr_fib = nr + nr_s;
	printf("%ld, ", nr_fib);
	for (i = 1; i < 50; i++)
	{
		nr = nr_s;
		nr_s = nr_fib;
		nr_fib = nr + nr_s;
		printf("%ld", nr_fib);
		if (i != 49)
			printf(", ");
	}
	printf("\n");

	return (0);
}
