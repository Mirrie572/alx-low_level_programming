#include "lists.h"

/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: Pointer to a pointer to the head of the linked list.
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	/* Declare a pointer for traversing the list */

	if (head == NULL)
		return;

	/* Traverse the linked list */
	while (*head != NULL)
	{
		current = *head; /* Store the current node in a temporary variable */

		*head = (*head)->next;

		free(current); /* Free the memory of the current node */
	}

	*head = NULL;
	/* Set the head to NULL after all nodes are freed */
}
