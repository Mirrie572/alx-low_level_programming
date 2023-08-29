#include"lists.h"

/**
 * free_listint - Frees a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	/* Declare a pointer for traversing the list */

	/* Traverse the linked list */
	while (head != NULL)
	{
		current = head;
		/* Store the current node in a temporary variable */
		head = head->next; /* Move to the next node */
		free(current); /* Free the memory of the current node */
	}
}
