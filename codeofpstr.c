#include "monty.h"

/**
 * code_pstr - Prints string starting at top of stack.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void code_pstr(stack_t **stack, unsigned int line_number)
{
stack_t *current_nod = *stack;

(void)line_number;

if (current_nod == NULL)
{
putchar('\n');
return;
}

while (current_nod != NULL && current_nod->n != 0 && current_nod->n >= 0 && current_nod->n <= 127)
{
putchar(current_nod->n);
current_nod = current_nod->next;
}

putchar('\n');
}
