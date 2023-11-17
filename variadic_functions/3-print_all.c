#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print arguments
 * @format: arguments that will be past as type
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";

	va_list print_str;

	va_start(print_str, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(print_str, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(print_str, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(print_str, double));
					break;
				case 's':
					str = va_arg(print_str, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(print_str);

}
