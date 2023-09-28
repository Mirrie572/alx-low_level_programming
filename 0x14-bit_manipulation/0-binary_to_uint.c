#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to the binary string
 *
 * Return: converted unsigned int, or 0 if conversion fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	/* Iterate through the binary string */
	for (; *b != '\0'; b++)
	{
		/* Check if the character is not '0' or '1' */
		if (*b != '0' && *b != '1')
			return (0);

		/* Convert the binary digit to its integer value */
		result = (result << 1) + (*b - '0');
	}

	return (result);
}
