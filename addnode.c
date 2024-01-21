#include "monty.h"

/**
* addnstack - add node to top of stack
* @h: first node
* @value: new value
*
* Return: none
*/

void addnstack(stack_t **h, int value)
{
	stack_t *new, *node;

	node = *h;
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (node)
		node->prev = new;

	new->n = value;
	new->next = *h;
	new->prev = NULL;
	*h = new;
}
