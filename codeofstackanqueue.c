#include "monty.h"

/**
 * stack_op - Sets format of data to a stack (LIFO).
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void stack_op(stack_t **stack, unsigned int line_number)
{
(void)line_number;
trans.status = 0;
(void)stack;
}

/**
 * queue_op - Sets format of data to a queue (FIFO).
 * @stack: Ptr to stack.
 * @line_number: Line number in Monty file.
 */
void queue_op(stack_t **stack, unsigned int line_number)
{
(void)line_number;
trans.status = 1;
(void)stack;
}
