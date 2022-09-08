#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a list
 * @head: The list
 * @n: data value of the node
 * Return: address to the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp != NULL)
		{
			if (temp->next == NULL)
			{
				temp->next = newnode;
				break;
			}
			temp = temp->next;
		}
	}
	return (temp);
	free(newnode);
}
