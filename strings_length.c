#include "monty.h"

/**
 * str_length - Determines the strings length.
 * @str: string to analize.
 *
 * Return: integer with the length of the string.
 */
int str_length(char *str)
{
	int j, count = 0;

	for (j = 0; str[j]; j++)
	{
		count++;
	}

	return (count);
}
