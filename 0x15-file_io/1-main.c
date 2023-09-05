#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program.
 *
 * @ac: The number of command-line arguments.
 * @av: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int res;

	/* Check the number of command-line arguments */
	if (ac != 3)
	{
		dprintf(2, "Usage: %s filename text\n", av[0]);
		exit(1);
	}

	res = create_file(av[1], av[2]);

	/* Print the result of create_file */
	printf("-> %i)\n", res);

	return (0);
}
