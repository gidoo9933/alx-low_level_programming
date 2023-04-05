#include "lists.h"

/**
* print_listint_t - prints all elements of a linked list
* @h: linked list of type listint_t to be printed
*
* Return: list of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h)
	{
		printf("%d\n", h->n);
		list++;
		h = h->next;
	}

	return (list);
}
