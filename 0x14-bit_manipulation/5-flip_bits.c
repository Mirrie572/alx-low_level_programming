#include "main.h"

/**
 * flip_bits - Calculates the number of bits to flip
 * to transform one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	/* XOR to find differing bits */
	unsigned int count = 0;
	/* counts  number of bits to be flipped */

	while (xor_result)
	{
		/* Increment the counter for each set (1) bit in the XOR result */
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
