#include "main.h"

/**
* print_square - print a square with #
*
* Return: always 0
*
*/

void print_square(int size)
{
  int size;
  int r;
  int m;
  if (size > 0)
    {
  for (r = 0; r <= size; r++)
    {
      _putchar('\n');
  for (m = 0; m <= r; m++)
    {
      _putchar('#');
      _putchar('\n');
    }
    }
    }
  else
  _putchar('\n');

  return (0);
}
