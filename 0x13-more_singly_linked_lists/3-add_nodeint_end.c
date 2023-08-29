#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of
 * a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* Set the value of the new node */

	new_node->next = NULL;
	/* The new node will be the last, so set next to NULL */

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		/* Traverse the list to find the last node */

		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		/* Make the last node point to the new node */
	}

	return (new_node);
	/* Return the address of the new node */
}
