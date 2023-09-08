#include "main.h"
#include <stdlib.h>


/**
* read_textfile- function that reads a text file and print to STDOUT.
* @filename: the name of text file being read
* @letters: number of letters to be read from file
* Return: the actual number of bytes read and printed
*        0 otherwise, when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t fd;
int wrtBytes;
int rdBytes;


fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
rdBytes = read(fd, buff, letters);
wrtBytes = write(STDOUT_FILENO, buff, rdBytes);


free(buff);
close(fd);
return (wrtBytes);
}
