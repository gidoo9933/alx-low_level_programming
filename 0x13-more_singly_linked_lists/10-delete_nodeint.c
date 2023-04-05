#include "lists.h"

/**
* delete_nodeint_at_index - delete node in a linked list at a certain index
* @head: pointer to the first element in the linked list
* @index: index of the node to be deleted
*
* Return: 1 on (Success), or -1 (Fail)
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *numb = *head;
listint_t *current = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(numb);
return (1);
}

while (i < index - 1)
{
if (!numb || !(numb->next))
return (-1);
numb = numb->next;
i++;
}

current = numb->next;
numb->next = current->next;
free(current);

return (1);
}
