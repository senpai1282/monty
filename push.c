#include "monty.h"
#include <stdio.h>

/**
 * push - Pushes an element onto the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the file.
 */
void push(stack_t **stack, unsigned int line_number)
{
    char *value_str = strtok(NULL, " \t\n\r");
    int value;

    printf("Value string: %s\n", value_str); // Debugging print

    if (!value_str || !isdigit(*value_str))
    {
        fprintf(stderr, "L%d: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    value = atoi(value_str);
    add_dnodeint(stack, value);
}

/**
 * pall - Prints all values on the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the file.
 */
void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    (void)line_number;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
