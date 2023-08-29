#include "lists.h"

/**
 *pop_listint - deletes the current head of a node
 *@head:pointer to pointer to the head of a linked list
 *
 *Return:data from our deleted head
 *
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}

	if (*head != NULL)
	{
		temp = *head;/*storing the address of head*/
		data = temp->n;/*obtaining the value of the current head*/
		*head = temp->next;/*updating the pointer to the next node*/
		free(temp);/*Freeing the current head*/
	}
	return (data);
}
