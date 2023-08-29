#include "lists.h"

/**
 *delete_nodeint_at_index - deletes node at given index
 *@head:pointer to pointer to the head of our list
 *@index: where we should delete
 *Return:1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current = *head, *temp;
	listint_t *prev = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (current != NULL && count < index - 1)
	{
		prev = current;
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		return (-1);
	}
	prev->next = current->next;
	free(current);
	return (1);
}
