#include "lists.h"

/**
* sum_listint - calculate sum of all the data in a listint_t list
* @head: first node of the linked list
*
* Return: return the resulting sum
*/

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *numb = head;

while (numb)
{
sum += numb->n;
numb = numb->next;
}

return (sum);
}
