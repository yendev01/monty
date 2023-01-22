#include "monty.h"

/**
  * get_pop - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pop(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_num);
		_free();
		exit(EXIT_FAILURE);
	}
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	free(t1);
}
