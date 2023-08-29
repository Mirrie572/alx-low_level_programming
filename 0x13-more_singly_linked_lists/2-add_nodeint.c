#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be added to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/* Declare a pointer for the new node */

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	/* Return NULL if memory allocation failed */

	new_node->n = n;
	/* Set the value of the new node */

	new_node->next = *head;
	/* Make the new node point to the current head */
	*head = new_node;
	/* Update the head to point to the new node */

	return (new_node);
	/* Return the address of the new node */
}
