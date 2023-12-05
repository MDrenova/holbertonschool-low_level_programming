#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	ssize_t write_count, text_length = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
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
