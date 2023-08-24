#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of a list
 * @h: pointer for the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0; /* Number of nodes */

	while (h != NULL)
	{
		if (h->str == NULL)

		{printf("[0] (nil)\n"); }

		else
		{ printf("[%u] %s\n", h->len, h->str); }

		h = h->next;
		count++;
	}

	return (count);

}
