#include "main.h"

/**
 * swap_int - swaps the values of x and s
 * @x: pointer 1
 * @s: pointer 2
 * Return; 0
 */

void swap_int(int *x, int *s)
{
	*x += *s;
	*s = *x - *s;
	*x = *x - *s;
}
