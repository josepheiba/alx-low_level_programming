#include "main.h"

/**
 * read_textfile - check code.
 * @filename : variable
 * @letters : variable
 * Return: check declaration
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int rd, pt;
	char *text;

	text = malloc(letters * sizeof(char));
	if (text == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, text, letters);
	if (rd == -1)
		return (0);

	pt = write(STDOUT_FILENO, text, rd);
	free(text);
	close(fd);
	return (pt);
}
