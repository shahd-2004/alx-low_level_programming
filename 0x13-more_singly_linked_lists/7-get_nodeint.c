#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find a node in the list.
 * @head: Address of the first node in the list.
 * @index: Position of a the node to find but (starting from 0).
 * Return: The Node address.
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}

