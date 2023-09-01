#include "main.h"

/**
* get_bit - returns the value of a bit at a given index in a decimal number
* @n: number to search
* @index: index of the bit
*
* Return: value of the bit
*			Otherwise -1 on error
*/
int get_bit(unsigned long int n, unsigned int index)
{
int value;

if (index > 63)
return (-1);

value = (n >> index) & 1;

return (value);
}

