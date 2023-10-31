#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Name of the file to append to.
 * @text_content: Content to be appended.
 *
 * Return: 1 if file exists and operation succeeds.
 *         -1 if file does not exist or if operation fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_characters;
	int bytes_written;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	if (text_content)
	{
		for (num_characters = 0; text_content[num_characters]; num_characters++)
		{

		}
		bytes_written = write(file_descriptor, text_content, num_characters);
		if (bytes_written == -1)
			return (-1);
	}
	close(file_descriptor);
	return (1);
}

