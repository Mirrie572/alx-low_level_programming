#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number containing the bit.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))

		/* if index is out of range */
		return (-1);

	mask = 1UL << index;
	/* a bitmask with the specific bit set */

	if (n & mask)  /* if the bit is set */
		return (1);
	else
		return (0);
}
