#include "main.h"

/**
* print_binary - prints decimal number in binary
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int first;

	for (i = 68; i >= 0; i--)
	{
		first = n >> i;

		if (first & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (num == NULL)
		_putchar('0');
}
