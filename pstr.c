#include "monty.h"

/**
  * get_pstr - ...
  * @stack:...
  * @line_num: ...
  * Return:...
  */

void get_pstr(stack_t **stack, __attribute__((unused)) unsigned int line_num)
{
	stack_t *t1 = *stack;
	int num;

	if (!*stack)
	{
		printf("\n");
	}
	else
	{
		while (t1)
		{
			num = t1->n;
			if (num > 0 && num < 255)
			{
				printf("%c", num);
			}
			else
			{
				break;
			}
			t1 = t1->next;
		}
		printf("\n");
	}
}
