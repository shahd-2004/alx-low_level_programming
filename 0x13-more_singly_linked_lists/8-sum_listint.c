#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - Sum all of the data of (n) in the list.
 * @head: Address of the first of a node of the list.
 * Return: The Integer.
 **/

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

