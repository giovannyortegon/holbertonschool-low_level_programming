#include "holberton.h"
/**
 * read_textfile - entry point
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd, w, r;

	buf = (char *) malloc(letters * sizeof(char));

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	buf[letters] = '\0';
	if (r == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
		return (0);

	close(fd);
	free(buf);

	return (w);
}
