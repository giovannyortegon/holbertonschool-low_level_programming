#include "holberton.h"

/**
 * create_file - entry point
 * @filename: name of file
 * @text_content: content
 * Return: Always 1 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename ==  NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	len = _strlen(text_content);
	if (text_content != NULL)
		write(fd, text_content, len);
	else
	{
		text_content = "";
		write(fd, text_content, 0);
	}
	close(fd);

	return (1);
}
/**
 * _strlen - entry point
 * @str: string
 * Return:  length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
