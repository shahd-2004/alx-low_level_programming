#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - It deletes the first element of the singly linked list.
 * @head: A pointer to the list.
 * Return: Integer if is success.
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int my_data;

	if (*head == NULL)
		return (0);

	tp = *head;
	*head = tp->next;
	my_data = tp->n;
	free(tp);
	return (my_data);
}

