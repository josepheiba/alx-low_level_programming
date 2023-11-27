#include "main.h"

/**
 * create_file - check code.
 * @filename : variable
 * @text_content : variable
 * Return: check declaration
 */

int create_file(const char *filename, char *text_content)
{
	int fd, pt, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;

		pt = write(fd, text_content, i);
		if (pt == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
