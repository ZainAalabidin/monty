#include "monty.h"

/**
 * printfq - print first node of queue
 * @h: first node of queue (unused)
 * @cnt: line counter (unused)
 *
 * Return: none
 */

void printfq(stack_t **h, unsigned int cnt)
{
	(void)h;
	(void)cnt;

	line.sqf = 1;
}

/**
 * addq - add node to tail of queue
 * @value: new value
 * @h: head of the queue
 *
 * Return: none
 */

void addq(stack_t **h, int value)
{
	stack_t *new, *node;

	node = *h;
	new = malloc(sizeof(stack_t));

	if (new == NULL)
		printf("Error\n");

	new->n = value;
	new->next = NULL;

	if (node)
	{
		while (node->next)
			node = node->next;
	}
	if (!node)
	{
		*h = new;
		new->prev = NULL;
	}
	else
	{
		node->next = new;
		new->prev = node;
	}
}
