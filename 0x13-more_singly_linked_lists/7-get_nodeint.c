#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to retrieve, starting at 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head; /* Declare a pointer for traversing the list */

	unsigned int count = 0;

	/* Traverse the linked list */
	while (current != NULL)
	{
		if (count == index)
			/* Check if the current index matches the desired index */
			return (current);

		current = current->next;
		count++;
	}

	return (NULL);
}
