#include"lists.h"

/**
 * listint_len - Returns the number of elements
 * in a listint_t linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;
	/* Initialize a counter for the elements */

	/* Traverse the linked list */
	while (h != NULL)
	{
		number++; /* Increment the element count */
		h = h->next; /* Move to the next element */
	}

	return (number);
}
