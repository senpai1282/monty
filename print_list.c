#include "monty.h"

/**
 * do_pint - Print the value at the top of the stack
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void do_pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*stack)->n);
}

/**
 * pint - Wrapper function for do_pint
 * @stack: Pointer to the top of the stack
 * @line_number: Line number being executed
 */
void pint(stack_t **stack, unsigned int line_number)
{
    do_pint(stack, line_number);
}
