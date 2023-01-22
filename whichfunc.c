#include "monty.h"

/**
  * get_func - gets function
  * @s: ...
  * Return: ...
  */
void (*get_func(char *s))(stack_t **stack, unsigned int line_number)
{
	int i = 0;

	instruction_t func_list[]  = {
		{"push", get_push},
		{"pall", get_pall},
		{"pint", get_pint},
		{"pop", get_pop},
		{"swap", get_swap},
		{"add", get_add},
		{"nop", get_nop},
		{"sub", get_sub},
		{"div", get_div},
		{"mul", get_mul},
		{"mod", get_mod},
		{"pchar", get_pchar},
		{"pstr", get_pstr},
		{"rotl", get_rotl},
		{"rotr", get_rotr},
		{NULL, NULL},
	};

	if (s[0] == '#')
		exit(0);

	for (; i < 16; i++)
	{
		if (strcmp(func_list[i].opcode, (char *)s) == 0)
		{
			return (func_list[i].f);
		}
		continue;
	}

	return (NULL);
}
