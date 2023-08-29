#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	/* Initialize a counter for the nodes */

	/* Traverse the linked list */
	while (h != NULL)
	{
		printf("%d\n", h->n);
		/* Print the value of the current node */

		h = h->next; /* Move to the next node */
		count++; /* Increment the node count */
	}

	return (count); /* Return the total number of nodes */
}
