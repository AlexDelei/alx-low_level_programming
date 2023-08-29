#include "lists.h"

/**
 *insert_nodeint_at_index - Inserts a new node at a given position
 *@head:pointer to pointer to head in our linked list
 *@idx: index given
 *@n:data value to be stored in the new node
 *
 *Return:pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *current;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	/*inserting in the beggining*/
	if (idx == 0)
	{
		new_node->next = *head;/*setting next pointer to head*/
		*head = new_node;/*Updating the head pointer*/
		return (new_node);
	}
	/*inserting in the middle*/
	current = *head;
	for (count = 0; count < idx - 1; count++)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
