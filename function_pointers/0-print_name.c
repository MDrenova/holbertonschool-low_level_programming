/**
 * print_name - functio to print the name
 * @name: name para string
 * @f: function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
