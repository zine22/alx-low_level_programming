#include "main.h"

/**
* print_alphabet_x10 - nested loop to print a to z 10 times
*/

void print_alphabet_x10(void)
{
int a;
int r;
for (r = 1; r <= 10; r++)
{
for (a = 'a'; a < 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
