#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Copies the contents
 * @argc: The number of arguments
 * @argv: An array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
int f1, t2, r1, w2;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}


buffer = malloc(sizeof(char) * 1024);
if (!buffer)
return (0);

f1 = open(argv[1], O_RDONLY);
r1 = read(f1, buffer, 1024);
t2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 06664);

do {

if (r1 == -1  || f1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w2 = write(t2, buffer, r1);
if (w2 == -1 || t2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
free(buffer);
exit(99);
}

t2 = open(argv[2], O_WRONLY | O_APPEND);
r1 = read(f1, buffer, 1024);
} while (r1 > 0);
free(buffer);
error_file(f1);
error_file(t2);

return (0);
}


/**
 * error_fileerror_file - check errors
 * @df: file
 */

void error_file(int df)
{
int err = close(df);
if (err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %d \n", df);
exit(100);
}
}
