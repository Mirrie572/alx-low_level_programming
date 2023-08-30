#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: A pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL; /* a pointer for the previous node */
	listint_t *current = *head; /* a pointer for the current node */
	listint_t *next_node; /* a pointer for the next node */

	/* Reverse the pointers while traversing the list */
	while (current != NULL)
	{
		next_node = current->next; /* Store the next node */

		current->next = prev; /* Reverse the pointer of the current node */

		prev = current; /* Move the prev pointer to the current node */
		current = next_node; /* Move the current pointer to the next node */
	}

	*head = prev; /* Update the head to point to the new first node */
	return (*head);
}
