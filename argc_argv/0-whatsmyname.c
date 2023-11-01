#include <stdio.h>
/**
 * main - main funcion
 * @argc: arguments past in unix count
 * @argv: strings pasted
 * ne vend te int argc mund te __attribute__((unused)) argc
 * Return: Return 0
 */
int main(int argc, char *argv[])
{
	int arg = argc - 1;

	printf("%s\n", argv[arg]);
	return (0);
}
