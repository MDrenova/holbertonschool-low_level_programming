#include <stdio.h>
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
