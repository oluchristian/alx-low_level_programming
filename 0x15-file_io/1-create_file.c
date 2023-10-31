#include "main.h"

/**
 * create_file - creates a file with specified content
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_letters;
	int bytes_written;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (num_letters = 0; text_content[num_letters]; num_letters++)
	{

	}
	bytes_written = write(file_descriptor, text_content, num_letters);
	if (bytes_written == -1)
		return (-1);
	close(file_descriptor);
	return (1);
}

