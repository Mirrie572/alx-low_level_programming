#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node
 * at a given position in a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @idx: Index where the new node should be added, starting at 0.
 * @n: Value to be added to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node; /* a pointer for the new node */
	listint_t *current = *head; /* a pointer for traversing the list */
	unsigned int count = 0; /* a counter for the nodes */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL); /* if memory allocation failed */

	new_node->n = n; /* Set the value of the new node */

	/* If index is 0, insert at the beginning */
	if (idx == 0)
	{
		new_node->next = *head; /* Make the new node point to the current head */
		*head = new_node; /* Update the head to point to the new node */
		return (new_node); /* the address of the new node */
	}

	/* Traverse the list to find the previous node at index idx - 1 */
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			/* Make the new node point to the next node */
			current->next = new_node; /* Update the previous node's next pointer */
			return (new_node); /* the address of the new node */
		}

		current = current->next; /* Move to the next node */
		count++; /* Increment the counter */
	}

	/* If index is out of bounds, free the new node and return NULL */
	free(new_node);
	return (NULL);
}
