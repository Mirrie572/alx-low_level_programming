#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns numbers of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{

	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);

}
