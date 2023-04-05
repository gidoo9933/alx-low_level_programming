#include "lists.h"

/**
* pop_listint - deletes the head node of linked list
* @head: a pointer to first element in the linked list
*
* Return: return the data inside the elements that was deleted,
* or 0 if the list is empty
*/

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (numb);
}
