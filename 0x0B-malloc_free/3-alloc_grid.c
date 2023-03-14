#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - to print two dimensional array.
 * @width: the length of array1
 * @height: the length of array
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
int **grid;
int w, h;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (h = 0; h < height; h++)
{
grid[h] = malloc(sizeof(int) * width);
if (grid[h] == NULL)
{
for (; h >= 0; h--)
free(grid[h]);
free(grid);
return (NULL);
}
}

for (h = 0; h < height; h++)
{
for (w = 0; w < width; w++)
grid[h][w] = 0;
}
return (grid);
}
