#include "lists.h"

/**
* add_node_end - adds a node to the end of a list
* @head: pointer to the list
* @str: string
* Return:  of new node  and NULL if failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	char *pstr;
	list_t *newnode, *travnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	pstr = strdup(str);
	if (pstr == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->len = strlen(pstr);
	newnode->str = pstr;
	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		travnode = *head;
		while (travnode->next != NULL)
			travnode = travnode->next;
		travnode->next = newnode;
	}
	return (*head);
	free(newnode);
}
