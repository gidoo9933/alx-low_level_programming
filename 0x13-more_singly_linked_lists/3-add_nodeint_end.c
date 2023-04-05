#include "lists.h"

/**
* add_nodeint_end - adds a node at end of a linked list
* @head: pointer to the first element in the list
* @n: data to insert in the new element
*
* Return: return pointer to the new node, or NULL if fail
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *add;
listint_t *temp = *head;

add = malloc(sizeof(listint_t));
if (!add)
return (NULL);

add->n = n;
add->next = NULL;

if (*head == NULL)
{
*head = add;
return (add);
}

while (temp->next)
temp = temp->next;

temp->next = add;

return (add);
}
