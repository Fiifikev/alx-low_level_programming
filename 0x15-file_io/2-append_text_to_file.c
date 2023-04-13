#include "main.h"
#include <string.h>

/**
 * append_text_to_file -function that appends a file
 * @filename: name of file
 * @text_content: text to be append
 * Return: 1 o  success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{

	int fd, wt, len;

	len = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);

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
