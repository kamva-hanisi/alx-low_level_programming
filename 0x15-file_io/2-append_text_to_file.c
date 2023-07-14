#include "main.h"

/**
* append_text_to_file - Appends text in the file
* @filename: write names of the file
* @text_content: string added to the file
*Return: -1
*/

int append_text_to_file(const char *filename, char *text_content)

{
	int writter, opened, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}

	opened = open(filename, O_WRONLY | O_APPEND);
	writter = write(opened, text_content, len);

	if (opened == -1)
	{
		return (-1);
	}
	if (writter == -1)
	{
		return (-1);
	}
	close(opened);

	return (1);
}
