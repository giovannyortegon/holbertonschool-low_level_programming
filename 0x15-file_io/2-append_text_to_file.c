#include "holberton.h"

/**
 * append_text_to_file - entry point
 * @filename: name of file
 * @text_content: text to add
 * Return: Always 1 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write(fd, text_content, len);
	}
	else
		write(fd, "", 0);

	return (1);
}
/**
 * _strlen - entry point
 * @str: string to count
 * Return: Number of characters
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}
