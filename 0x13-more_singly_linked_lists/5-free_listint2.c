#include "lists.h"

/**
 *free_listint2 - frees a linked list and sets head to NULL
 *@head:pointer to a pointer to the head of our linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tr;/*Declaring a pointer to traverse your list*/

	while (*head != NULL)
	{
		tr = *head;
		*head = (*head)->next;
		free(tr);
	}
}
