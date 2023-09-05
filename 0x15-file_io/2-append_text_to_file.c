#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - creates a file and puts text in it
 * with 600 perms (do not change if it exists)
 *
 * @filename: name for file
 * @text_content: text to put into file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, fl;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	fl = open(filename, O_WRONLY | O_APPEND);

	if (fl == -1)
		return (-1);

	write(fl, text_content, i);

	return (1);
}

