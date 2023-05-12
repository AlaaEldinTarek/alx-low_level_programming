#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *t)
{
	int r = 0;

	if (!t)
		return (0);

	while (*t++)
		r++;
	return (r);
}

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int q;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	q = open(filename, O_WRONLY | O_APPEND);
	if (q == -1)
		return (-1);
	if (len)
		bytes = write(q, text_content, len);
	close(q);
	return (bytes == len ? 1 : -1);
}
