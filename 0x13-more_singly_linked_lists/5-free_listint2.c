#include "lists.h"

/**
 * free_listint2 - Free listint_t.
 * @head: data type pointer the head/next node
 * Return: 0 elements all free
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	if (!head)
		return;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
