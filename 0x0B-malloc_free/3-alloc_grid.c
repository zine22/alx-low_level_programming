#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - return a pointer to a 2 dim array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
int **grid, i, j;
grid = malloc(sizeof(*grid) * height);

if (width <= 0 || height <= 0 || grid == 0)
{
return (NULL);
}
else
{
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(**grid) * width);
if grid[i] == 0
{
return (NULL);
}
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
}
return (grid);
}
