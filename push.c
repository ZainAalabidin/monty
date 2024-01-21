#include "monty.h"

/**
 * _push_ - function that adds node to the stack
 * @head: double head pointer to the stack
 * @cnt: line count
 *
 * Return: nothing
 */
void _push_(stack_t **h, unsigned int cnt)
{
	int x, y = 0, f = 0;

	if (line.arg)
	{
		if (line.arg[0] == '-')
			y++;
		for (; line.arg[y] != '\0'; y++)
		{
			if (line.arg[y] > 57 || line.arg[y] < 48)
				f = 1; }
		if (f == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", cnt);
			fclose(line.file);
			free(line.line_cntt);
			free_dlstack(*h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE); }
	x = atoi(line.arg);
	if (line.sqf == 0)
		addnstack(h, x);
	else
		addq(h, x);
}
