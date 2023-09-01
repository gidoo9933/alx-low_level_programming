#include "main.h"

/**
* get_endianness - checks if a machine is big indian or little
* Return: if big 0, and 1 for little
*/

int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return (*c);
}
