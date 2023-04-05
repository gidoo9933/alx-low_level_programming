#include "lists.h"

/**
* find_listint_loop - find a loop in a linked list
* @head: linked list to search for loop
*
* Return: the address of node where the loop starts, or NULL if fail
*/

listint_t *find_listint_loop(listint_t *head)
{
listint_t *first = head;
listint_t *last = head;

if (!head)
return (NULL);

while (first && last && last->next)
{
last = last->next->next;
first = first->next;
if (last == first)
{
first = head;
while (first != last)
{
first = first->next;
last = last->next;
}
return (last);
}

return (NULL);
}
