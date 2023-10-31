#include "main.h"
#include <stdio.h>

/**
 * check_file_opening - Checks if files can be opened and handles errors.
 * @file_descriptor_from: File descriptor for the source file.
 * @file_descriptor_to: File descriptor for the destination file.
 * @file_from_path: Path to the source file.
 * @file_to_path: Path to the destination file.
 *
 * This function checks if the source and destination files can be opened
 * and handles errors by printing appropriate messages and exiting the program.
 *
 * Return: No return.
 */
void check_file_opening(int file_descriptor_from, int file_descriptor_to, char *file_from_path, char *file_to_path)
{
	if (file_descriptor_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from_path);
		exit(98);
	}
	if (file_descriptor_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to_path);
		exit(99);
	}
}

/**
 * main - Copies the content of one file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
	int source_file_descriptor, destination_file_descriptor, close_error;
	ssize_t num_chars_read, num_chars_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_file_descriptor = open(argv[1], O_RDONLY);
	destination_file_descriptor = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_file_opening(source_file_descriptor, destination_file_descriptor, argv[1], argv[2]);

	num_chars_read = 1024;
	while (num_chars_read == 1024)
	{
		num_chars_read = read(source_file_descriptor, buffer, 1024);
		if (num_chars_read == -1)
			check_file_opening(-1, 0, argv[1], argv[2]);
		num_chars_written = write(destination_file_descriptor, buffer, num_chars_read);
		if (num_chars_written == -1)
			check_file_opening(0, -1, argv[1], argv[2);
	}

	close_error = close(source_file_descriptor);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file_descriptor);
		exit(100);
	}

	close_error = close(destination_file_descriptor);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file_descriptor);
		exit(100);
	}

	return (0);
}

