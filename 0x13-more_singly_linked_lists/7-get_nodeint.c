#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: head of the list
 * @index: node index
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

	node = head;
	if (node == NULL)
		return (NULL);

	if (index == 0)
	{
		node = head;
		return (node);
	}
	while (i <= index)
	{
		node = head;
		if (head->next == NULL && i < index)
			return (NULL);
		head = head->next;
		i++;
	}
	if (node == NULL)
		return (NULL);
	else
		return (node);
}
