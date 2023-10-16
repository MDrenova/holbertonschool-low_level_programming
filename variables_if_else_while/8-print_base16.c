#include <stdio.h>
/**
 * main - Entry point
 * Print numbers base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	char ch = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
