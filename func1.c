#include "monty.h"

/**
 * _pop_ - print top node on stack
 * @h: pointer to pointer of first node
 * @cnt: line counter
 *
 * Return: none
 */

void _pop_(stack_t **h, unsigned int cnt)
{
	stack_t *tmp;

	if (*h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}

	tmp = *h;
	*h = tmp->next;
	free(tmp);
}

/**
 * _print_ - print top node on stack
 * @h: pointer to pointer of first node
 * @cnt: line counter
 *
 * Return: none
 */

void _print_(stack_t **h, unsigned int cnt)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*h)->n);
}

/**
 * _none_ - do nothing
 * @h: pointer to pointer of first node
 * @cnt: line counter
 *
 * Return: none
 */

void _none_(stack_t **h, unsigned int cnt)
{
	(void) cnt;
	(void) h;
}
