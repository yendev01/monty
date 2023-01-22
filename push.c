#include "monty.h"

/**
  * get_push - ...
  * @stack:...
  * @line_number: ...
  * Return:...
  */

void get_push(stack_t **stack, unsigned int line_number)
{
	int number;
	stack_t *newHead;
	char *temp1;

	temp1 = strtok(NULL, " \t\n\r");
	if (!temp1)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	number = atoi(temp1);
	if (number == 0 && strcmp(temp1, "0") != 0)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	newHead = malloc(sizeof(stack_t));
	if (!newHead)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newHead->n = number;
	if (*stack == NULL)
	{
		newHead->next = NULL;
		newHead->prev = NULL;
		*stack = newHead;
	}
	else
	{
		(*stack)->prev = newHead;
		newHead->next = *stack;
		newHead->prev = NULL;
		*stack = newHead;
	}
}
