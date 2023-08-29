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

	while (*head != NULL)
	{
		listint_t *current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;
	return (*head);
}
