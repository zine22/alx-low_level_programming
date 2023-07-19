#include "function_pointers.h"

/**
* main - prints the opcodes
*
* @argc: number
* @argv: arguments
*
* Return: Always 0
*/

int main(int argc, char **argv)
{
char *a = (char *)main;
int b;

if (argc != 2)
printf("Error\n"), exit(1);
b = atoi(argv[1]);

if (b < 0)
printf("Error\n"), exit(2);

while (b--)
printf("%02hhx%s", *a++, b ? " " : "\n");
return (0);
}
