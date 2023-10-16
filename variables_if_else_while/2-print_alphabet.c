#include <stdio.h>
/**
 * main - Entry point
 * Print alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch = 'a';

    	// Write the Character to stdout
    	for (ch = 'a'; ch <= 'z'; ch++)
		    putchar(ch);putchar('\n');
        return (0);
}
