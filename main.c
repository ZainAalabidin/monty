#include "monty.h"
#define _GNU_SOURCE

line_t line = {NULL, NULL, NULL, 0};
/**
* main - monty code interpreter
* @argc: argument counter
* @argv: argument vector
*
* Return: always 0
*/
int main(int ac, char *av[])
{
	char *line_cntt;
	FILE *file;
	size_t len = 0;
	ssize_t ReadLine = 1;
	stack_t *stack = NULL;
	unsigned int cnt = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(av[1], "r");
	line.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit(EXIT_FAILURE);
	}

	while (ReadLine > 0)
	{
		line_cntt = NULL;
		ReadLine = getline(&line_cntt, &len, file);
		line.line_cntt = line_cntt;
		cnt++;

		if (ReadLine > 0)
			_exec(line_cntt, &stack, cnt, file);

		free(line_cntt);
	}

	free_dlstack(stack);
	fclose(file);
	return (0);
}
