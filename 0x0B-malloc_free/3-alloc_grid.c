#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Return: Pointer to the 2D array, or NULL on failure or if width/height is 0.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int counter1, counter2;
    if (width <= 0 || height <= 0)
    {
        return NULL;
    }
    grid = malloc(height * sizeof(int *));
    if (grid == NULL)
    {
        return NULL;
    }
    for (counter1 = 0; counter1 < height; counter1++)
    {
        grid[counter1] = malloc(width * sizeof(int));
        if (grid[counter1] == NULL)
        {
            for (counter2 = 0; counter2 < counter1; counter2++)
            {
                free(grid[counter2]);
            }
            free(grid);
            return NULL;
        }
        for (counter2 = 0; counter2 < width; counter2++)
        {
            grid[counter1][counter2] = 0;
        }
    }
    return (grid);
}