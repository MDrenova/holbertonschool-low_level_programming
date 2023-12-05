#include <stdarg.h>
#include "main.h"
/**
 * cp - copy file to another file
 * @file_from: file that wil be copied
 * @file_to: the name of the file that is copied
 */
void cp(char *file_from, char *file_to)
{
	int file_src, file_dest;
	ssize_t read_count, write_count;
	char content[1024];

	file_src = open(file_from, O_RDONLY);
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_dest = open(file_from, O_WRONLY | O_CREAT | O_TRUNC | 0664);
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((read_count = read(file_src, content, 1024)) > 0)
	{
		write_count = (file_dest, content, read_count);
		if (write_count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_src);
			close(file_dest);
			exit(99);
		}
	}
	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_src);
		close(file_dest);
		exit(98);
	}

	close_file(file_dest, file_src);
}
/**
 * close_file - function to close file if any error return message
 * @file_src: file descrtiptor source
 * @file_dest: file destination descriptor
 */
void close_file(char *file_src, char *file_dest)
{
	if (close(file_src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100);
	}
	if (close(file_dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
}
/**
 * main - main function
 * @argc: argumnet count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp(argv[1], argv[2]);

	return (0);
}
