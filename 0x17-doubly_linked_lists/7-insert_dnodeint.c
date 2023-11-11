#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The data for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *iter = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}

	while (iter != NULL && i < idx - 1)
	{
		iter = iter->next;
		i++;
	}

	if (iter == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = iter->next;
	new->prev = iter;
	if (iter->next != NULL)
		iter->next->prev = new;
	iter->next = new;

	return (new);
}
