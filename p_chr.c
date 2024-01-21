#include "monty.h"

/**
 * _pchart_ - print the char at the top of stack
 * @h: stack head
 * @cnt: line counter
 *
 * Return: none
 */

void _pchart_(stack_t **h, unsigned int cnt)
{
	stack_t *snode;

	snode = *h;
	if (!snode)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	if (snode->n > 127 || snode->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", snode->n);
}
