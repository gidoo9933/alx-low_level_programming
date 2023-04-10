#include "main.h"
#include <stdlib.h>

/**
* read_textfile- Read the text file to print to output.
* @filename: name of file being read
* @letters: the number of letters to read from file
* Return: w- actual number of bytes read and printed out
*        return 0 if failure or filename is NULL.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t a, b, c;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	c = read(a, buffer, letters);
	b = write(STDOUT_FILENO, buffer, c);

	free(buffer);
	close(a);
	return (b);
}

