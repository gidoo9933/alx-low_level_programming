#include "main.h"

/**
* binary_to_uint - this will convert to unsigned int a binary number 
* @b: pointer to string containing chars 0 and 1
*
* Return: the unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = 2 * num + (b[i] - '0');
	}

	return (num);
}
