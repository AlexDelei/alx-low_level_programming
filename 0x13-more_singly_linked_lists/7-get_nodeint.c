#include "lists.h"

/**
 *get_nodeint_at_index - returns nth node of a linked list
 *@head: pointer to the head of our list
 *@index: index of the node
 *Return:NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
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
