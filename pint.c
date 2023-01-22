#include "monty.h"

/**
  * get_pint - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pint(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{

	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(fd);
		_free();
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
