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
char *opcode, *arg;
int result = 0;

opcode = strtok(code, " \t\n");
if (!opcode || opcode[0] == '#') {
return 0;
}

arg = strtok(NULL, " \t\n");
trans.opcode = opcode;
trans.payload = arg;

if (strcmp(opcode, "push") == 0) {
code_push(stack, line_number);
} else if (strcmp(opcode, "pop") == 0) {
code_pop(stack, line_number);
} else if (strcmp(opcode, "pall") == 0) {
code_pall(stack, line_number);
} else if (strcmp(opcode, "pint") == 0) {
code_pint(stack, line_number);
} else if (strcmp(opcode, "swap") == 0) {
code_swap(stack, line_number);
} 
else
{
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
if (data) {
fclose(data);
}
_freesta(*stack);
exit(EXIT_FAILURE);
}

return result;
}
