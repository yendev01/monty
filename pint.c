#include "monty.h"

/**
  * get_pint - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pint(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty", line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", t1->n);
}
