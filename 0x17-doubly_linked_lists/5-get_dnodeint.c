#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node to be returned.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *iter = head;
	unsigned int i = 0;

	while (iter != NULL)
	{
		if (i == index)
			return (iter);
		i++;
		iter = iter->next;
	}
	return (NULL);
}
