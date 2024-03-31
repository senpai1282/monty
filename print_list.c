#include "monty.h"
#include <stdio.h>

/**
 * pint - Prints the value at the top of the stack, followed by a new line.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }
    printf("%d\n", (*stack)->n);
}
