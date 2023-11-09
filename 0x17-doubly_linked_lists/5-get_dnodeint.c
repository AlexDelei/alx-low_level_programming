#include "lists.h"
/**
 * get_dnodeint_at_index - the nth node of the doubly
 *@head:node head
 *@index:the nth value
 *Return:null if no index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}

