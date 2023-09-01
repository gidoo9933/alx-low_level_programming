#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: the number to print in binary representation
 */
void print_binary(unsigned long int n)
{
	int i, len = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}

