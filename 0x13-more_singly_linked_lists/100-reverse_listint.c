#include "lists.h"

/**
* reverse_listint - reverse a linked list
* @head: pointer to the first node in the list to be reversed
*
* Return: returns a pointer to the first node in the created list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *last = NULL;

	while (*head)
	{
		last = (*head)->last;
		(*head)->last = first;
		first = *head;
		*head = last;
	}

	*head = first;

	return (*head);
}
