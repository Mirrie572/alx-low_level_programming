#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at
 * a given index in a linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @index: Index of the node to be deleted, starting at 0.
 *
 * Return: 1 if succeeded, -1 if failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp; /* Declare pointers for traversing the list */
	unsigned int count = 0; /* Initialize a counter for the nodes */

	if (*head == NULL)
		return (-1); /* if the list is empty */

	/* If index is 0, delete the first node */
	if (index == 0)
	{
		temp = *head; /* Store the current head node */
		*head = (*head)->next; /* Update the head to the next node */
		free(temp); /* Free the memory of the original head node */
		return (1);
	}

	current = *head; /* current to the head of the list */

	/* Traverse the list to find the previous node at index index - 1 */
	while (current != NULL)
	{
		if (count == index - 1)
		{
			temp = current->next; /* Store the node to be deleted */
			current->next = temp->next; /* Update the previous node's next pointer */
			free(temp); /* Free the memory of the node to be deleted */
			return (1);
		}

		current = current->next;
		count++;
	}

	return (-1); /* index is out of bounds */
}
