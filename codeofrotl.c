#include "monty.h"

/**
 * rotl_op - Rotates stack to top.
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void rotl_op(stack_t **stack, unsigned int line_number)
{
(void)line_number;

if (*stack != NULL && (*stack)->next != NULL)
{
stack_t *last_nod = *stack;

while (last_nod->next != NULL)
{
last_nod = last_nod->next;
}

last_nod->next = *stack;
(*stack)->prev = last_nod;
*stack = (*stack)->next;
(*stack)->prev->next = NULL;
(*stack)->prev = NULL;
}
}
