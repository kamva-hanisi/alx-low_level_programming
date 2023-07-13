#include "main.h"

/**
 * create_file - written file
 * @filename: create name of the file
 * @text_content: write string in the file
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int file_open, writter, len = 0;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	for (len = 0; text_content[len];)
	{
		len++;
	}

	file_open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file_open == -1)
	{
		return (-1);
	}

	writter = write(file_open, text_content, len);

	if (writter == -1)
	{
		return (-1);
	}

	close(file_open);

	return (1);
}
