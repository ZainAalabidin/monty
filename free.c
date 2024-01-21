#include "monty.h"

/**
 * free_dlstack - freedoubly linked list
 * @h: first node of stack
 * Return: none
 */

void free_dlstack(stack_t *h)
{
	stack_t *node;

	node = h;
	while (h)
	{
		node = h->next;
		free(h);
		h = node;
	}
}

/**
 * free_stack - free stack
 * @h: first node(unused)
 * @cnt: line counter (unused)
 *
 * Return: none
*/

void free_stack(stack_t **h, unsigned int cnt)
{
	(void)h;
	(void)cnt;

	line.sqf = 0;
}
