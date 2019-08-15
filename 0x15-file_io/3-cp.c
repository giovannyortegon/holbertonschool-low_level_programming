#include "holberton.h"

/**
 * main - entry point
 * @ac: quantity of arguments
 * @arv: arguments
 * Return: Always 0 (Success)
 */
int main(int ac, char **arv)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from  file_to\n", arv[0]);
		exit(97);
	}

	copy_file(arv[1], arv[2]);

	return (0);
}
/**
 * copy_file - entry point
 * @filename: from file
 * @file_new: to file new
 * Return: lenth of string
 */
int copy_file(const char *filename, const char *file_new)
{
	int fold, fnew, r_old, w_new;
	int size = 1024;
	char *buf;

	buf = (char *) malloc(size * sizeof(char));
	if (buf == NULL)
		return (-1);

	fold = open(filename, O_RDONLY);

	if (fold == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	r_old = read(fold, buf, size);
	buf[r_old] = '\0';
	if (r_old == -1)
		exit(98);

	fnew = open(file_new, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fnew == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_new);
		exit(99);
	}

	w_new = write(fnew, buf, r_old);
	if (w_new == -1)
		exit(99);

	close_f(fold);
	close_f(fnew);
	free_buf(buf);

	return (r_old);

}
/**
 * close_f - entry point
 * @fd: file descriptor
 */
void close_f(int fd)
{
	int ret, errsv;

	errsv = errno;

	ret = close(fd);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", errsv);
		exit(100);
	}
}
/**
 * free_buf - entry point
 * @buf: free buffer
 */
void free_buf(char *buf)
{
	if (buf != NULL)
		free(buf);
}
