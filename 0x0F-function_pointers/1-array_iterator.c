#include "function_pointers.h"

/**
 * array_iterator -  function of  an arraay
 * @array: array
 * @action: pointer
 * @size: size of an array
 * Return: void
 */





void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
		for (i =  0; i < size; i++)
			action(array[i]);
}
