#include <stdio.h>
/**
 * main - Entry point
 * Print 3 digit num don't repeat the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first_d;
	int second_d;
	int third_d;

	for (first_d = 0; first_d <= 7; first_d++)
	{
		for (second_d = first_d + 1; second_d <= 8; second_d++)
		{
			for (third_d = second_d + 1; third_d <= 9; third_d++)
			{
				putchar (first_d + '0');
				putchar (second_d + '0');
				putchar (third_d + '0');

				if (first_d < 7 || second_d < 8 || third_d <= 8)
				{
					putchar (',');
					putchar (' ');
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
