#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number whose bit is  be cleared.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, otherwise -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		/* Check if index is out of range */
		return (-1);

	mask = 1UL << index;
	/* a bitmask with the specific bit set */

	mask = ~mask;
	/* flip(invert) the bitmask to clear the desired bit */
	*n = *n & mask;
	/* Using bitwise AND to clear the bit */

	return (1);
}
