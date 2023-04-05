#include "lists.h"

/**
* get_nodeint_at_index - returns the node at a certain index in a linked list
* @head: first node in the linked list
* @index: index of the node to return
*
* Return: return pointer to the node we're looking for, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
listint_t *numb = head;

while (numb && a < index)
{
numb = numb->next;
a++;
}

return (numb ? numb : NULL);
}
