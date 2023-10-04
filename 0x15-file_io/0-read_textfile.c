#include "main.h"
#include <stdio.h>
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: 0 if null or number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, r, w;
	char *buffer;

	buffer = malloc(letters);

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	r = read(file, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(file);
	free(buffer);
	return (w);
}

