#include "main.h"

/**
* print_triangle - print a triangle with size
*
* Return: always 0
*
*/

void print_triangle(int size)
{
  int size;
  int m;
  int r;
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

	 
