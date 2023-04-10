#include "main.h"
#include <iostream>

/**
* print_binary - prints decimal number in binary
* @n: number to print in binary
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	cout << ((n & 1) + '0');
}
