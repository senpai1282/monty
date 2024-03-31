#include "monty.h"
#include <stdio.h>

/**
 * main - function main of montybytecode interpreter
 * @argc: amount of parameters of the main
 * @argv: double pointer to each parameter of main
 * Return: 0
 */
int main(int argc, char **argv)
{
    FILE *fp = NULL;
    int status = 1, line = 1;
    char line_buffer[1024];
    char *str; /* Declare str here */

    if (argc != 2)
    {
        printf("USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        printf("Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (status)
    {
        if (fgets(line_buffer, sizeof(line_buffer), fp) == NULL)
            break;
        str = strtok(line_buffer, " \n\t\r"); /* Move declaration here */
        make_op(str, line);
        line++;
    }
    fclose(fp);
    return (0);
}
