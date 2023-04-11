#include "main.h"

/**
* create_file - function that Creates file.
* @filename: pointer to the name of the file to be created.
* @text_content: points to a string to write to the file.
*
* Return: -1 on function failure
*         Otherwise - 1.
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
		lenght++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, lenght);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
