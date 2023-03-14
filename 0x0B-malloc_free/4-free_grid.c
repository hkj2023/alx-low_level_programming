#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - to print an array.
 * @grid: array element
 * @height: heigth of grid
 * main: Entry point
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
int index;
for (index = 0; index < height; index++)
free(grid[index]);
free(grid);
}
