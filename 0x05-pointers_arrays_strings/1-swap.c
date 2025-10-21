#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * Prototype: void swap_int(int *a, int *b);
 * @a: pointer to first value
 * @b: pointer to second value
 */
void	swap_int(int *a, int *b)
{
	int	hold;

	hold = *a;
	*a = *b;
	*b = hold;
}
