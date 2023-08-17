#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 *
 * @array: array
 * @size: how many elem to print(size of array)
 * @action: function pointer to print in regular or hex
 *
 * return: nothing for success
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	do {
		action(array[i]);
		i++;
	} while (i < size);


}
