#include "lists.h"

/**
 *reverse_listint - reverses a linked list
 *@head:pointer to pointer to head of the linked list
 *Return:first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = next;
	}
	*head = prev;
	return (*head);
}
