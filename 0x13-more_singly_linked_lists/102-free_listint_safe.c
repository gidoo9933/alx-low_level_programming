#include "lists.h"

/**
* free_listint_safe - frees a linked list
* @h: a pointer to the first node in the list to be freed
*
* Return: returns number of items in the newly freed list
*/

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int b;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		b = *h - (*h)->next;
	if (diff > 0)
	{
		current = (*h)->next;
		free(*h);
		*h = current;
		length++;
	}
	else
	{
		free(*h);
		*h = NULL;
		length++;
		break;
	}

	*h = NULL;

	return (length);
}
