#include "monty.h"

/**
 * _pstr_ - print string at the top of stack
 * @h: first node of linked list
 * @cnt: line counter
 *
 * Return: none
 */

void _pstr_(stack_t **h, unsigned int cnt)
{
	stack_t *snode;
	(void)cnt;

	snode = *h;
	while (snode)
	{
		if (snode->n > 127 || snode->n <= 0)
		{
			break;
		}
		printf("%c", snode->n);
		snode = snode->next;
	}
	printf("\n");
}
