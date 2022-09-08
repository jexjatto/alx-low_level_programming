#include "lists.h"

/**
* free_list - frees a list
* @head: list to be freed
* Return: void
*/
void free_list(list_t *head)
{
	list_t *ph;

	ph = head;
	while (head)
	{
		ph = head;
		head = head->next;
		free(ph->str);
		free(ph);
	}
	free(head);
}
