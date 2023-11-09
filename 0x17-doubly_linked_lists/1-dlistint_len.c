#include "lists.h"
/**
 *dlistint_len - counts the number of elements
 *@h:pointer to struct
 *Return:no. of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
