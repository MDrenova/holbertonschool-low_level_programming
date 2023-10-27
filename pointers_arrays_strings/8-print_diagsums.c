#include <stdio.h>

/**
 * print_diagsums - Print sum od diagonals
 * @size: size of matrix / array
 * @a: pointer to array / matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum, sum1;

	sum = 0;
	sum1 = 0;

	for  (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum1 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum, sum1);
}
