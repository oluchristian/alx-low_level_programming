#include "main.h"
/**
 * read_textfile - eads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: 0 if null or number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filname == NULL)
		return (0);
	FILE *file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	char *buffer = malloc(letters);

	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}
	ssize_t read_bytes = fread(buffer, 1, letters, file);

	if (read_bytes == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	ssize_t write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	if (write_bytes == -1 || write_bytes != read_bytes)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);

	return (write_bytes);
}
