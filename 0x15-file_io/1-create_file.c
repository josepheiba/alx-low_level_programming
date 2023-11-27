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

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY);
	if (fd == -1)
		return (-1);

	i = 0;
	while (text_content[i] != '\0')
		i++;

	pt = write(fd, text_content, i);
	if (pt < 0)
		return (-1);
	close(fd);
	return (1);
}
