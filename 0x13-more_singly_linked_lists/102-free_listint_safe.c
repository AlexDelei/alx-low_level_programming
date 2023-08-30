#include "lists.h"
/**
 *free_listint_safe - frees a list
 *@h:pointer to pointer to the head of our linked list
 *Return:count of nodes
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t cn = 0;

	while (*h != NULL)
	{
		listint_t *current = *h;
		*h = (*h)->next;
		cn++;

		if ((void *)current <= (void *)current->next)
		{
			free(current);
			break;
		}
		free(current);
	}
	return (cn);
}
