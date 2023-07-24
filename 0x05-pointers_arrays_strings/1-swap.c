#include "main.h"
/**
 * swap_int- swap the values of int
 * @a: input
 * @b: input
 * Return: void
 */

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}
