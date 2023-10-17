#include <stdio.h>
/**
 * main - Entry point
 * Print 2 digit num don't repeat the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_d;
	int second_d;

	for (first_d = 0; first_d < 9; first_d++)
	{
		for (second_d = first_d + 1; second_d <= 9; second_d++)
		{
			putchar (first_d + '0');
			putchar (second_d + '0');
			if (first_d < 8 || second_d < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
