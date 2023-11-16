#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print arguments
 * @separator: pointer to string
 * @n: number of arg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_num;

	va_start(print_num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(print_num, int));
		if (separator != NULL)
			if (i < n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(print_num);

}
