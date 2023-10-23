#include <stdio.h>
/**
 * print_array - print an array
 * @a: entered value for name array
 * @n: lenght of array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	putchar('\n');
}
