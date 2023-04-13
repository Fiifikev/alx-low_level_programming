#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: text what goes into the file
 * Return: 1 on success , -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wt, len;

	len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		wt = write(fd, text_content, len);
		if (wt != len || wt == -1)
			return (-1);
	}
	close(fd);
	return (1);

}
