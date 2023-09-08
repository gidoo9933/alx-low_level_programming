#include "main.h"
#include <stdio.h>
#include <stdlib.h>


char *create_buffer(char *file);
void close_file(int fd);


/**
* create_buffer - this Allocates 1024 bytes for a buffer.
* @file: name of file the buffer is storing chars for.
*
* Return: A pointer to the newly-allocated space or buffer.
*/
char *create_buffer(char *file)
{
char *buffer;


buffer = malloc(sizeof(char) * 1024);


if (!buffer)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}


return (buffer);
}


/**
* close_file - function that Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
int stop;


stop = close(fd);


if (stop == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}


/**
* main -a function to copy the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: for incorrect argument - exit code 97.
*              If file_from does not exist or cannot be read - exit code 98.
*/
int main(int argc, char *argv[])
{
int from, to, rdByte, wrtByte;
char *buffer;


if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}


buffer = create_buffer(argv[2]);
from = open(argv[1], O_RDONLY);
rdByte = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);


do {
if (from == -1 || rdByte == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}


wrtByte = write(to, buffer, rdByte);
if (to == -1 || wrtByte == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}


rdByte = read(from, buffer, 1024);
to = open(argv[2], O_WRONLY | O_APPEND);


} while (rdByte > 0);


free(buffer);
close_file(from);
close_file(to);


return (0);
}
