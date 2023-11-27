#include "main.h"

/**
 * main - check code.
 * @ac : variable
 * @av : variable
 * Return: check declaration
 */

int main(int ac, char **av)
{
	int fr, fw, fi, fo, fci, fco;
	char bf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fi = open(av[1], O_RDONLY);
	if (fi == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	fo = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fo == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((fr = read(fi, bf, 1024)) != 0)
	{
		if (fr == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

		fw = write(fo, bf, fr);
		if (fw == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	fci = close(fi);
	if (fci == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fi), exit(100);
	fco = close(fo);
	if (fco == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fo), exit(100);
	return (1);
}
