#include "lists.h"

/**
 *add_nodeint_end - adds new node the end
 *@head: our head in our list
 *@n:number to be added
 *Return: added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	/*if the list is empty ,we set new node as head*/
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/*Traverse to the last node*/
	t = *head;
	while (t->next != NULL)
	{
		t = t->next;
	}
	/*Attaching last's node to the new node*/
	t->next = new;

	return (new);
}
