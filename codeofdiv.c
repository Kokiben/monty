#include "monty.h"

/**
 * code_div - Divides second top element by top element of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_div(stack_t **stack, unsigned int line_number)
{
stack_t *current;
int length = 0, result;

current = *stack;
while (current)
{
current = current->next;
length++;
}

if (length < 2)
{
fprintf(stderr, "L%d: division, stack too short\n", line_number);
fclose(trans.data);
free(trans.payload);
_freesta(*stack);
exit(EXIT_FAILURE);
}

current = *stack;
result = current->next->n / current->n;
current->next->n = result;
*stack = current->next;
free(current);
}
