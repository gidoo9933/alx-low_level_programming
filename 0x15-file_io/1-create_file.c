#include "main.h"


/**
* create_file - function that Creates a file.
* @filename: Pointer to the name of the file to be created.
* @text_content: A pointer to a null terminated string to write to the file.
*
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int fd, wrtByte, len = 0;


if (filename == NULL)
return (-1);


if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}


fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
wrtByte = write(fd, text_content, len);


if (fd == -1 || wrtByte == -1)
return (-1);


close(fd);


return (1);
}
