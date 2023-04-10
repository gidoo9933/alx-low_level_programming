#include "main.h"

/**
* get_endianness - finds a machine's endian ie little or big endian
* Return: return 0 if big endian, 1 if little
*/

int get_endianness(void)
{
	unsigned int b = 1;
	char *e = (char *) &b;

	if (*e == 1)
		return (1);

	return (0);

}
