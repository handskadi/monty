#include "monty.h"

/**
 * main - Monty Project by ALX
 * @ac: Command line args
 * @av: ptr to string to be tokenized.
 * Description: print the output in lower case.
 * Return: always 0 means success.
 */
int main(int ac, char **av)
{
	(void)av;

	/* check if the number os commands line args. */
	if (ac != 2)
	{
		dprintf(2, "USAGE: monty file \n");
		exit(EXIT_FAILURE);
	}

	return (0);
}
