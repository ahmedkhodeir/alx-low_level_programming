#include "lists.h"

/**
 * get_nodeint_at_index - return the node at certain index in linked list
 * @head: the first node in the list
 * @index: index of node to return
 *
 * Return: pointer to node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
