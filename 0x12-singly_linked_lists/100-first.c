#include <stdio.h>
void first(void) __attribute__ ((constructor));

/**
 * first - Print sentence befere main function
 * function is executed
 * Returns: nothing
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
