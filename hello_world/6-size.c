#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print with printf() function size of variable byte
 */
int main(void)
{
	char character;
	int int_num;
	long int long_num;
	long long int long_num_long;
	float float_num;

	printf("Size of a char: %ld byte(s)\n", sizeof(character));
	printf("Size of int: %ld byte(s)\n", sizeof(int_num));
	printf("Size of long int: %lu byte(s)\n", sizeof(long_num));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long_num_long));
	printf("Size of float: %lu byte(s)\n", sizeof(float_num));
	return (0);
}
