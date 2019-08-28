#include "holberton.h"
/**
 * free_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * Return: Nothing.
 */
void free_grid(char **grid)
{
	int n = 0;

	for (n = 0; grid[n]; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
