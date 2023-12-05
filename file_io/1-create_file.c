#include "main.h"
/**
 * create_file - creates a file with specific permissions
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t write_count, text_length = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length])
			text_length++;

		write_count = write(file_desc, text_content, text_length);
		if (write_count == -1)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
