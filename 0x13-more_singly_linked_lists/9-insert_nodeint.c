#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at aan index of list
 * @head: beginning of trhe list
 * @idx: index of list
 * @n: data value
 * Return: address of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *temp;
	unsigned int i = 0;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = temp;
		*head = newnode;
		return (*head);
		free(newnode);
	}
	while (i < idx)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		i++;
	}
	newnode->next = temp->next;
	temp->next = newnode;
	return (newnode);
	free(newnode);
}
