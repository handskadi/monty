#include "monty.h"

/**
 * is_number - validate wether it is a number.
 * @str: str to check.
 * Return: if string is a valid number then 1 or 0 otherwise.
 */
int is_number(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (index == 0 && str[index] == '-' && str[index + 1])
		{
			index++;
			continue;
		}
		if (str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}

	return (1);
}
