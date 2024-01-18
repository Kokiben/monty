#include <stdio.h>
#include <string.h>
#include "monty.h"

/**
 * main - interpreter for custom monty code.
 * @arc: total number of arguments.
 * @arv: location of the monty file.
 * Return: 0 upon successful execution.
 */

int main(int arc, char *arv[])
{
char *opcode;
FILE *data;
size_t line_buffer_size = 0;
size_t line_length;
unsigned int line_counter = 0;
stack_t *execut_stack = NULL;


if (arc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
else
{
data = fopen(arv[1], "r");
trans.data = data;

if (!data)
{
fprintf(stderr, "Error: Can't open file %s\n", arv[1]);
exit(EXIT_FAILURE);
}
}
do {
opcode = NULL;
line_length = getline(&opcode, &line_buffer_size, data);
trans.opcode = opcode;
line_counter++;

if (line_length > 0)
{
code_execute(opcode, &execut_stack, line_counter, data);
}

free(opcode);
} while (line_length > 0);

_freesta(execut_stack);
fclose(data);
return (0);
}
