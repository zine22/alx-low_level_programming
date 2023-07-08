#include <stdio.h>
#include <stdlib.h>

/**
* main - print number of arguments
*
* @argc: int
* @argv: list
*
* Return: 0
*/

int main(int argc, char *argv[])
{
int i;
(void)argv;
for (i = 0, i < argc, i++)
{
printf("argc = %d", i - 1, argc);
}
return (0);
}
