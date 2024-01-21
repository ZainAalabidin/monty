#include "monty.h"

/**
* _pall_ - print everything in stack
* @h: pointer to pointer of first node
* @cnt: line counter (not used)
*
* Return: none
*/

void _pall_(stack_t **h, unsigned int cnt)
{
	stack_t *snode;
	(void)cnt;

	snode = *h;
	if (snode == NULL)
		return;

	while (snode)
	{
		printf("%d\n", snode->n);
		snode = snode->next;
	}
}

/**
* _swap_ - swap first two elements of stack
* @h: first node
* @cnt: line counter
*
* Return: none
*/

void _swap_(stack_t **h, unsigned int cnt)
{
	stack_t *snode;
	int len = 0, tmp;

	snode = *h;
	while (snode)
	{
		snode = snode->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	snode = *h;
	tmp = snode->n;
	snode->n = snode->next->n;
	snode->next->n = tmp;
}
