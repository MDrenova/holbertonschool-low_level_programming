#include <stdio.h>
/**
 * main - Entry point
 * Print alphabet lower and upper case
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch = 'a';
	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	char capital = 'A';
	while(capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
