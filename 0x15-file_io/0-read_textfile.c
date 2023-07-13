#include "main.h"

/**
 * read_textfile - Read file and print
 * @filename: file to read
 * @letters: letters to read
 * Return: number of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *memory;
	ssize_t file_open, writter, reader;

	if (filename == NULL)
	{
		return (0);
	}

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
	{
		return (0);
	}
	memory = malloc(sizeof(char) * letters);
	reader = read(file_open, memory, letters);
	writter = write(STDOUT_FILENO, memory, reader);

	free(memory);
	close(file_open);

	return (writter);

}
