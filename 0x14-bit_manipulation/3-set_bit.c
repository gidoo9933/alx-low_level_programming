#include "main.h"

/**
* set_bit - sets the value of a bit at a given index
* @n: pointer where bit will be found
* @index: index of the bit whose value is to be returned
*
* Return: the value of the bit or -1 if an error occured
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
