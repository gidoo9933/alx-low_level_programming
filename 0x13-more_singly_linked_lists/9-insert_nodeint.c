#include "lists.h"

/**
* insert_nodeint_at_index - insert a new node in a linked list,
* at a given position
* @head: pointer to the first node in the linked list
* @idx: index where the new node is added
* @n: data to be inserted in the new node
*
* Return: pointer to the new node, or NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *newnode;
listint_t *numb = *head;

newnode = malloc(sizeof(listint_t));
if (!newnode || !head)
return (NULL);

newnode->n = n;
newnode->next = NULL;

if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}

for (i = 0; numb && i < idx; i++)
{
if (i == idx - 1)
{
newnode->next = numb->next;
numb->next = newnode;
return (newnode);
}
else
numb = numb->next;
}

return (NULL);
}
