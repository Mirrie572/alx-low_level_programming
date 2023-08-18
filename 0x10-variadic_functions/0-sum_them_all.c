#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up all parameters
 *
 * @n: constant variable
 * Return: Always zero and the sum
 *
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;

	int sum = 0;

	va_start(args, n);

	if (n == 0)
	{
		va_end(args);

		return (0);
	}

	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			int value = va_arg(args, int);

			sum += value;
		}

		va_end(args);

		return (sum);
	}

}
