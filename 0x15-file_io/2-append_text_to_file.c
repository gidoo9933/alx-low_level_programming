#include "main.h"


/**
* append_text_to_file - function that Appends text at the end of a file.
* @filename: Pointer to the name of the file to be appended.
* @text_content: The string to be added to the end of the file.
*
* Return: on function failure or filename is NULL - -1.
*         If the file does not exist the user lacks write permissions - -1.
*         Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int rd, wrtBytes, len = 0;


if (filename == NULL)
return (-1);


if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}


rd = open(filename, O_WRONLY | O_APPEND);
wrtBytes = write(rd, text_content, len);


if (rd == -1 || wrtBytes == -1)
return (-1);


close(rd);


return (1);
}
