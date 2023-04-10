#include "main.h"
#include <unistd.h>

/**
* _putchar - writes a character c to standard output
* @c: The character to print to stdout
*
* Return: On success 1.
* On error, return -1, and error number is set appropriately.
*/

int _putchar(char c)
{

	return (write(1, &c, 1));

}
