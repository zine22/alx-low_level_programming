#include "main.h"

/**
* print_diagonal - print a diagonal line
*
* Return: always 0
*
*
*/

void print_diagonal(int n)
{
  int n;
  int m;
  int r;
  
  if (n > 0)
    {
      for (r = 0; r < n; r++)
	{
	  _putchar('\n');
      
      for (m = 0; m <= r; m++)
	{
	  _putchar('\\');
	}
	}
      _putchar('\n');

    }
  else
    _putchar('\n');
  return (0);
}
