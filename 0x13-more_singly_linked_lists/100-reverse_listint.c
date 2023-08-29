#include "lists.h"
/**
 *reverse_listint - reverses a string
 *@head: pointer ti pointer to the head
 *Return:our reversed head node
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		prev = (*head)->next;
		(*head)->next = prev;
		current = (*head);
	}

	*head = current;
	return (*head);
}
