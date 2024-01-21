#include "monty.h"

/**
 * s_rottop_- rotate stack element to the top
 * @h: first node of stack
 * @cnt: line counter
 *
 * Return: none
 */

void s_rottop_(stack_t **h,  __attribute__((unused)) unsigned int cnt)
{
	stack_t *node1 = *h, *node2;

	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	node2 = (*h)->next;
	node2->prev = NULL;
	while (node1->next != NULL)
	{
		node1 = node1->next;
	}
	node1->next = *h;
	(*h)->next = NULL;
	(*h)->prev = node1;
	(*h) = node1;
}

/**
 * s_rotbtm_ - rotate stack element to the bottom
 * @h: first node of stack
 * @counter: line counter
 *
 * Return: none
 */

void s_rotbtm_(stack_t **h, __attribute__((unused)) unsigned int cnt)
{
	stack_t *snode;

	snode = *h;
	if (*h == NULL || (*h)->next == NULL)
	{
		return;
	}
	while (snode->next)
	{
		snode = snode->next;
	}
	snode->next = *h;
	snode->prev->next = NULL;
	snode->prev = NULL;
	(*h)->prev = snode;
	(*h) = snode;
}
