#include "main.h"

/**
* _strstr - locates a substring
* @haystrack: The string to be searched
* @needle: The substring to be located
*
* Return: If it's substring must locate
*/

char *_strstr(char *haystrack, char *needle)
{
	int index;

	if (*needle == 0)
	{
		return (haystrack);
	}

	while (*haystrack)
	{
		index = 0;

		if (haystrack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystrack);

				index++;

			} while (haystrack[index] == needle[index]);
		}

		haystrack++;
	}

	return ('\0');
}
