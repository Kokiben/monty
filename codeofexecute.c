#include "monty.h"

/**
 * code_execute - Execute the Monty bytecode instruction.
 * @code: Monty bytecode instruction.
 * @stack: Ptr to stack.
 * @line_number: Line number Monty file.
 * @data: File ptr for error handling.
 * Return: 0 on success, -1 on failure.
 */
int code_execute(char *code, stack_t **stack, unsigned int line_number, FILE *data)
{
instruction_t mod_op[] = {
{"push", code_push}, {"pall", code_pall}, {"pint", code_pint},
{"pop", code_pop},
{"swap", code_swap},
{"add", code_add},
{"nop", code_nop},
{"sub", code_sub},
{"div", code_div},
{"mul", code_mul},
{"mod", code_mod},
{"pchar", code_pchar},
{"pstr", code_pstr},
{"rotl", rotl_op},
{"rotr", rotr_op},
{"queue", queue_op},
{"stack", stack_op},
{NULL, NULL}
};
unsigned int a = 0;
char *co;

co = strtok(code, " \n\t");
if (co && co[0] == '#')
return 0;

trans.payload = strtok(NULL, " \n\t");
while (mod_op[a].opcode && co)
{
if (strcmp(co, mod_op[a].opcode) == 0)
{
mod_op[a].f(stack, line_number);
return 0;
}
a++;
}

if (co && mod_op[a].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, co);
fclose(data);
free(code);
_freesta(*stack);
exit(EXIT_FAILURE);
}
return 1;
}
