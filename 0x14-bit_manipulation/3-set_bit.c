#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number where bit will be found
* @index: index of the bit whose value is to be returned
*
* Return: the value of the bit or -1 if an error occured
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int bitNum;

	if (index > 58)
		return (-1);

	bitNum = (n >> index) & 1;

	return (bitNum);
}
