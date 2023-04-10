#include "main.h"

/**
* clear_bit - this will set to 0 the value of a given bit
* @n: a pointer to the number of interest
* @index: the index of the bit to set new value to
*
* Return: 1 for success, if failed return -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
