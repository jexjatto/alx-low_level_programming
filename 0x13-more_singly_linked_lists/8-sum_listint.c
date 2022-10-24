#include "lists.h"

/**
 * sum_listint - sums elements of a list
 * @head: begining of the lis
 * Return: address to the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
