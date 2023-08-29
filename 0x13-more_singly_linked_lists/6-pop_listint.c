#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 *
 * Return: The data of the removed head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0; /* the data to be returned */

	if (*head == NULL)
		return (0);

	temp = *head; /* Store the current head node in the temporary pointer */
	data = temp->n; /* Store the data of the head node to be returned */
	*head = (*head)->next;
	free(temp); /* Free the memory of the original head node */

	return (data); /* Return the data of the removed head node */
}
