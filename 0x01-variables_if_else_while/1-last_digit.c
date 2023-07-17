#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - a program prints last digit
 * Return: 0 for success
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10
	if (ld > 5)
	{printf("Last digit of %d and is greater than 5\n", ld);
	}
	else if (ld == 0)
	{printf("Last digit of %d and is zero\n", ld);
	}
	else
	{printf("Last digit of %d and is less than 6 and not zero\n", ld);
	}
	return (0);
}
