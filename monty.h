#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct line_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @line_cntt: line content
 * @sqf: flag change stack to queue and rev
 *
 * Description: carries values through the program
 */
typedef struct line_s
{
	char *arg;
	FILE *file;
	char *line_cntt;
	int sqf;
}  line_t;
extern line_t line;

int _exec(char *line_cntt, stack_t **stack, unsigned int line_cnt, FILE *file);
void free_dlstack(stack_t *h);
void free_stack(stack_t **h, unsigned int cnt);
void printfq(stack_t **h, unsigned int cnt);
void addq(stack_t **h, int value);
void addnstack(stack_t **h, int value);
void _pop_(stack_t **h, unsigned int cnt);
void _print_(stack_t **h, unsigned int cnt);
void _none_(stack_t **h, unsigned int cnt);
void _push_(stack_t **h, unsigned int cnt);
void _pall_(stack_t **h, unsigned int cnt);
void _swap_(stack_t **h, unsigned int cnt);
void _mod_(stack_t **h, unsigned int cnt);
void _div_(stack_t **h, unsigned int cnt);
void _mul_(stack_t **h, unsigned int cnt);
void _sub_(stack_t **h, unsigned int cnt);
void _add_(stack_t **h, unsigned int cnt);
void _pchart_(stack_t **h, unsigned int cnt);
void _pstr_(stack_t **h, unsigned int cnt);
void s_rottop_(stack_t **h,  __attribute__((unused)) unsigned int cnt);
void s_rotbtm_(stack_t **h, __attribute__((unused)) unsigned int cnt);
void addnstack(stack_t **h, int value);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
#endif
