#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the name of the file
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters writen
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t read_count, write_count;
	char *content;

	if (filename == NULL)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);

	content = malloc(sizeof(char) * letters);
	if (content == NULL)
	{
		close(file_desc);
		return (0);
	}

	read_count = read(file_desc, content, letters);
	if (read_count == -1)
	{
		free(content);
		close(file_desc);
		return (0);
	}

	write_count = write(STDOUT_FILENO, content, read_count);
	if (write_count == -1 || write_count != read_count)
	{
		free(content);
		close(file_desc);
		return (0);
	}

	free(content);
	close(file_desc);

	return (write_count);
}
