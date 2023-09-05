#include "main.h"

/**
 * read_textfile - Reads and prints the contents of a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters (bytes) to read and print.
 *
 * Return: The actual number of letters read and printed,
 * otherwise 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t bytes_written;
	ssize_t num;

	/* Open the file for reading */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	/* allocating memory for buffer */
	buffer = malloc(sizeof(char) * letters);

	/* Read data from the file into the buffer */
	num = read(file_descriptor, buffer, letters);

	/* writing to stdout */
	bytes_written = write(STDOUT_FILENO, buffer, num);

	/* Cleanup and return the number of letters read */
	free(buffer);
	close(file_descriptor);
	return (bytes_written);
}
