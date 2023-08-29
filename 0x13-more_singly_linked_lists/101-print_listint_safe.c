#include "lists.h"
/**
 *print_listint_safe - prints linked list
 *@head:pointer to head node
 *Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t count = 0;

	while (fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			exit(98);
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		count++;
	}
	return (count);
}
