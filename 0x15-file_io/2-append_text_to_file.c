#include "main.h"

/**
 * append_text_to_file - function to append a file.
 * @filename: name of the file to append contents.
 * @text_content: string to append to the file.
 *
 * Return: function fails (-1).
 *         Otherwise - (1).
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int count = 0;

	if (text_content == NULL || filename == NULL)
	{
		return (-1);
	}
	while (text_content[count] != '\0')
	{
		count++;
	}
	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, count);

	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}

