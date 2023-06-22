#include "monty.h"

/**
 * check_args - Validates the nm of my CL args
 * @ac: Number of commands.
 */
void check_args(int ac)
{
	if (ac == 2)
	{
		return;
	}
	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
