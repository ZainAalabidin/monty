#include "monty.h"

/**
* _exec - execute opcode
* @stack: stack of linked list
* @line_cnt: line counter
* @file: pointer to monty file stream
* @line_cntt: line content
*
* Return: none
*/
int _exec(char *line_cntt, stack_t **stack, unsigned int line_cnt, FILE *file)
{
	instruction_t operation[] = {
				{"push", _push_},
				{"pall", _pall_},
			       	{"pint", _print_},
				{"pop", _pop_},
				{"swap", _swap_},
				{"add", _add_},
				{"nop", _none_},
				{"sub", _sub_},
				{"div", _div_},
				{"mul", _mul_},
				{"mod", _mod_},
				{"pchar", _pchart_},
				{"pstr", _pstr_},
				{"rotl", s_rottop_},
				{"rotr", s_rotbtm_},
				{"queue", printfq},
				{"stack", free_stack},
				{NULL, NULL}
				};
	unsigned int index = 0;
	char *command;

	command = strtok(line_cntt, " \n\t");
	if (command && command[0] == '#')
		return (0);
	line.arg = strtok(NULL, " \n\t");
	while (operation[index].opcode && command)
	{
		if (strcmp(command, operation[index].opcode) == 0)
		{	operation[index].f(stack, line_cnt);
			return (0);
		}
		index++;
	}
	if (command && operation[index].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, command);
		fclose(file);
		free(line_cntt);
		free_dlstack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
