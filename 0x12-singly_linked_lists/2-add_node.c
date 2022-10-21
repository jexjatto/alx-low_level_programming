#include "lists.h"

/**
* add_node - adds a node tot the begining of a list
* @head: pointer tot the first node
* @str: string
* Return: address of new node successfull and NULL if failed
*/
list_t *add_node(list_t **head, const char *str)
{
	char *pstr;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	pstr = strdup(str);
	if (pstr == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->str = pstr;
	newnode->len = strlen(pstr);
	newnode->next = *head;
	*head = newnode;
	return (*head);
	free(newnode);
}
