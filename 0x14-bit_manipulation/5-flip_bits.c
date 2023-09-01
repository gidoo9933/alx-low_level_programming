#include "main.h"


/**
* flip_bits - counts the number of bits to flip
*		to get from one number to the other
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, a = 0;
	unsigned long int current;
	unsigned long int exclusiveOr = (~n & m) | (n & ~m)  /*same as n ^ m;*/


	for (i = 63; i >= 0; i--)
	{
		current = exclusiveOr >> i;
		if (current & 1)
		a++;
	}


	return (a);
}
