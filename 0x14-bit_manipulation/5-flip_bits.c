#include "main.h"


/**
 * flip_bits - this counts the number of bits to flip
 * to move from one number to the other
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, start = 0;

	while (xor > 0)
	{
		start = start + (xor & 1);
		xor >>= 1;
	}

	return (start);
}
