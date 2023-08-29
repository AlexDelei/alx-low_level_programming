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
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
