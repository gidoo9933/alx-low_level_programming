#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *               initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - return a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int baby;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (baby = 0; baby < size; baby++)
		array[baby] = c;

	return (array);
}
