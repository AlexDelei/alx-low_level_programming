#include "lists.h"

/**
 *sum_listint - adds data value
 *@head:pointer to our head lists
 *Return:summation
 *
 */
int sum_listint(listint_t *head)
{
	int sum = 0;/*variable intialization*/

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
