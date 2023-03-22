#include "function_pointers.h"

/**
 * int_index - index off an  array
 * @array:array
 * @cmp:pointer
 * @size : size
 * Return:the first element for which the cmp function does not return 0
 * If no element matches, return -1
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
return (-1);
}
