#include "lists.h"

/**
* list_len - returns the number of elements in a singly-linked list
* @h: list to be counted
* Return: number of nodes/elements in the list
*/
size_t list_len(const list_t *h)
{
	const list_t *ph;
	size_t n = 0;

	ph = h;
	while (ph != NULL)
	{
		ph = ph->next;
		n++;
	}
	return (n);
}
