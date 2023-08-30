#include "lists.h"
/**
 * sum_listint - Returns the sum of all data values in a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 *
 * Return: Sum of all data values, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0; /*the sum of data values */

	/* Traverse the linked list */
	while (head != NULL)
	{
		sum += head->n; /* Add the current node's data value to the sum */
		head = head->next;
	}

	return (sum); /* Return the sum of data values */
}
