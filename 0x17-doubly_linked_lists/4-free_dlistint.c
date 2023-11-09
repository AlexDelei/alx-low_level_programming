#include "lists.h"
/**
 *free_dlistint - frees this doubly linked list
 *@head:pointer to head of node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
