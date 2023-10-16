#include <stdio.h>
/**
 * main - Entry point
 * Print numbers base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	
	while (num <= 9)
	{
		putchar('0' + num);
		if (num == 9)
		{
			break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
