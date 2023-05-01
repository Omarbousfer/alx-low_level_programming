#include "lists.h"

/**
 * free_listint - Frees a list of integers
 * @head: data type pointer the head/next node
 * Return: 0 elements all free
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
