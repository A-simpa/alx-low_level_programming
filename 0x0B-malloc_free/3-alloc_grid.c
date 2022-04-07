#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - create a 2 dimensional array where each element is 0
*@height: number of rows
*@width: number of columns
*Return: returns a pointer to a pointer
*/

int **alloc_grid(int width, int height)
{
int size = width * height;
int **arr = malloc(sizeof(int) * size);
int i = 0;
int j = 0;

if (width == 0 || height == 0)
{
	return (NULL);
}

while (i < height)
{
	while (j < width)
	{
		arr[i][j] = 0;
	}
}
}
