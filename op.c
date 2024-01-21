#include "monty.h"

/**
 * _add_ - add first 2 elements of the stack
 * @h: pointer to pointer to first node
 * @cnt: line counter
 *
 * Return: none
 */

void _add_(stack_t **h, unsigned int cnt)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	res = tmp->n + tmp->next->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}

/**
 * _sub_ - subtract 2 elements of the stack
 * @h: pointer to pointer to first node
 * @cnt: line counter
 *
 * Return: none
 */

void _sub_(stack_t **h, unsigned int cnt)
{
	stack_t *tmp;
	int res, i;

	tmp = *h;
	for (i = 0; tmp != NULL; i++)
		tmp = tmp->next;

	if (i < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	res = tmp->next->n - tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}

/**
 * _mul_ - multiply first 2 elements of the stack
 * @h: pointer to pointer to first node
 * @cnt: line counter
 *
 * Return: none
 */

void _mul_(stack_t **h, unsigned int cnt)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	res = tmp->next->n * tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}

/**
 * _div_ - divide first 2 elements of the stack
 * @h: pointer to pointer to first node
 * @cnt: line counter
 *
 * Return: none
 */

void _div_(stack_t **h, unsigned int cnt)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	res = tmp->next->n / tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}

/**
 * _mod_ - compute modulos of two elements in stack
 * @h: pointer to pointer to first node
 * @cnt: line counter
 *
 * Return: none
 */

void _mod_(stack_t **h, unsigned int cnt)
{
	stack_t *tmp;
	int len = 0, res;

	tmp = *h;
	while (tmp)
	{
		tmp = tmp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	tmp = *h;
	if (tmp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", cnt);
		fclose(line.file);
		free(line.line_cntt);
		free_dlstack(*h);
		exit(EXIT_FAILURE);
	}
	res = tmp->next->n % tmp->n;
	tmp->next->n = res;
	*h = tmp->next;
	free(tmp);
}
