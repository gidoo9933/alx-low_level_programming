#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file to be appended
* @text_content: string to add to end of the file.
*
* Return: -1 on NULL or function failure
*         deny write permissions if file is absent - -1.
*         Otherwise - 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, length);

	if (o == -1 || w == -1)
	return (-1);

	close(o);
	return (1);
}
