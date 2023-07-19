#include "calc.h"

/**
* *get_op_func - function to calculate op
*
* @s: member
*
* Return: function
*/

int (*get_op_func(char *s))(int, int)
{
  
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i;
while (i < 5)
return (ops[i])
}
