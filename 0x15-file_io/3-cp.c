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
buffer = build__buffer(argv[2]);
f1 = open(argv[1], O_RDONLY);
r1 = read(f1, buffer, 1024);
t2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

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
r1 = read(f1, buffer, 1024);
t2 = open(argv[2], O_WRONLY | O_APPEND);

} while (r1 > 0);
free(buffer);
error_file(f1);
error_file(t2);
return (0);
}
/**
 * build__buffer - build buffer
 * @num : file
 * Return: void
 */
char *build__buffer(char *num)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (!buffer)
{
dprintf(STDERR_FILENO, "Error: Can't write from file %s \n", num);
exit(99);
}
return (buffer);
}

/**
 * error_file - check errors
 * @df: file
 * Return: Void
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

