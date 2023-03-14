#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array and assign a character
 * @size:size of an array
 * @c:char to be assigned
 * Return: pointer to an array, null if it fails
 */







char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int index;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		arr[index] = c;
	return (arr);
}
