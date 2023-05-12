#include "main.h"

/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 *
 * Return: number bytes read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int q;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	q = open(filename, O_RDONLY);
	if (q == -1)
		return (0);
	bytes = read(q, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(q);
	return (bytes);
}
