#include "main.h"
/**
 * read_textfile - reads the text file
 * @filename: name of file
 * @letters: number of letters
 * Return: the number of elements it could read and print
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int rd;
	int wt;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	rd = read(fd, buffer, letters);
	buffer[letters] = '\0';
	if (rd == -1)
	{
		return (0);
	}
	wt = write(STDOUT_FILENO, buffer, rd);
	if (wt == -1)
	{
		close(fd);
		return (0);
	}
	if (wt != rd)
	{
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (rd);
}
