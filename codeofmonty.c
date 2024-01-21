#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include "monty.h"
transport_t trans = {0, NULL, NULL, NULL};

/**
 * main - interpreter for custom monty code.
 * @argc: total number of arguments.
 * @argv: location of the monty file.
 * Return: 0 upon successful execution.
 */

int main(int argc, char *argv[])
{
char *line_content;
FILE *monty_file;
size_t line_size = 0;
ssize_t line_read = 1;
stack_t *stack = NULL;
unsigned int line_counter = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

monty_file = fopen(argv[1], "r");
trans.data = monty_file;

if (!monty_file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}
while (line_read > 0)
{
line_content = NULL;
line_read = getline(&line_content, &line_size, monty_file);
trans.payload = line_content;
line_counter++;

if (line_read > 0)
{
code_execute(line_content, &stack, line_counter, monty_file);
}

free(line_content);
}

_freesta(stack);
fclose(monty_file);

return 0;
}
