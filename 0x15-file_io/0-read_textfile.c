#include "holberton.h"
/**
 * read_textfile - entry point
 * @filename: name of file
 * @letters: number of letters to print
 * Return: number of letters to read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char buf[1024];
	int fd;

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL)
		return (0);

	read(fd, buf, letters);
	buf[letters] = '\0';

	printf("%s", buf);

	return (_strlen(buf));
}
/**
 * _strlen - entry point
 * @buf: str to count
 * Return: number of character
 */
int _strlen(char *buf)
{
	int i = 0;

	while (buf[i])
		i++;

	return (i);
}
