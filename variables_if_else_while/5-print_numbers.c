#include <stdio.h>
/**
 * main - Entry point
 * Print number from 0 to 9
 * Anothe ex:
 * int num = 0;
 *       while (num <10){
 *          printf("%d", num);
 *           num++;
 *       }
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
