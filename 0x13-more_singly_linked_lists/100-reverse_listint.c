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
	listint_t *next_node = NULL; /* a pointer for the next node */

	/* Reverse the pointers while traversing the list */
	while (*head != NULL)
	{
		next_node = (*head)->next; /* Store the next node */

		(*head)->next = prev; /* Reverse the pointer of the current node */

		prev = *head; /* Move the prev pointer to the current node */
		*head = next_node;
	}

	*head = prev; /* Update the head to point to the new first node */
	return (*head);
}
