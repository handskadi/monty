#include "monty.h"

arg_t *arguments = NULL;

/**
 * main - Monty Project for alx
 * @ac: The number of CL args.
 * @av: A ptr to an array of strs amd the args
 * Description: This is a ALX Project for monty language Made by Mohamed KADI 
 * 			That print alphabets in lowercase using the putchar
 * 			In this Project we are meant to create interpreter for bytecodes.
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	size_t n = 0;

	check_args(ac);
	init_args();
	get_stm(av[1]);

	while (getline(&arguments->line, &n, arguments->stream) != -1)
	{
		arguments->line_number += 1; 
		token_line(); 
		set_inst(); 
		exec_inst(); 
		dump_tokens();
	}

	close_file(); 
	dump_args();

	return (0);
}
