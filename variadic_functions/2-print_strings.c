#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print arguments
 * @separator: pointer to string
 * @n: number of arg
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list print_str;
	char *current_string;

	va_start(print_str, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(print_str, char *);
		if (current_string == NULL)
			printf("(nil)");
		else
			printf("%s", current_string);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(print_str);

}
