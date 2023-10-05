#include "main.h"
#include <stdio.h>
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: string to write to file
 * Return: 0 if null or success (1)
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t file, w;
	ssize_t count = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);

	if (file == -1)
	{
		close(file);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(file);
		return (-1);
	}
	while (*text_content != '\0')
	{
		text_content++;
		count++;
	}
	text_content -= count;
	w = write(file, text_content, count);

	if (w == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}

