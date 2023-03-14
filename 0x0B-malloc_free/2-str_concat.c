#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int bread, concat_bread = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (bread = 0; s1[bread] || s2[bread]; bread++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (bread = 0; s1[bread]; bread++)
		concat_str[concat_bread++] = s1[bread];

	for (bread = 0; s2[bread]; bread++)
		concat_str[concat_bread++] = s2[bread];

	return (concat_str);
}
