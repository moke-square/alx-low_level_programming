#include "main.h"

/**
 * read_textfile - a function that reads a
 * text file and prints it to the POSIX standard output
 * @filename: of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (y);
}
