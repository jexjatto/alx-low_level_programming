#include "lists.h"

/**
* print_list - this program prints all the elements in a singly-linked list
* @h: list to be printed
* Return: number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	const list_t *ph;
	size_t n = 0;

	ph = h;
	while (ph != NULL)
	{
		if (ph->str == NULL)
			printf("[%d] (nil)\n", ph->len);
		else
			printf("[%d] %s\n", ph->len, ph->str);
		ph = ph->next;
		n++;
	}
	return (n);
}
