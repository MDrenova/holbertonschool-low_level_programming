#include <stdio.h>

char *_memset(char *, char, unsigned int);

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char buffer[] = "Talk is cheap. Show me the code.";
	char *p;
	unsigned int len;
	unsigned int offset;

	len = 33;
	simple_print_buffer(buffer, len);
	printf("-------------------------------------------------\n");
	offset = 0;
	p = _memset(buffer + offset, 0x20, 16);
	simple_print_buffer(buffer, len);
	printf("-------------------------------------------------\n");
	simple_print_buffer(p, len - offset);
	return (0);
}
