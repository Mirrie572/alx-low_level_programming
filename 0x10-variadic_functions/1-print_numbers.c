#include <stdarg.h>
#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - a function that print num followed by a separator
 * @n: is a constant variable
 * @separator: separate numbers
 * Return: nothing for success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list args;

	unsigned int i;

	va_start(args, n);

	{

		for (i = 0; i < n; i++)

		{

			int num = va_arg(args, int);

			printf("%d", num);

			if (i != (n - 1) && separator != NULL)

			{

				printf("%s", separator);

			}
		}

		printf("\n");

		va_end(args);
	}

}
