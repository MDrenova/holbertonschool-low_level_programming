#include <stdio.h>
/**
 * main - Entry point
 * Print number from 0 to 9
 *
 */
int main(void)
{
        char num = '0';
	while(num <= '9')
	{
        	putchar(num);
        	num++;
	}    
    	putchar('\n');
        return (0);
}
