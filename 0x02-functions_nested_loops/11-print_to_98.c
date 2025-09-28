#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line, separated by ", ",
 * Numbers should be printed in order
 * Prototype: void print_to_98(int n);
 * @n: int to be printed
 */
void	print_to_98(int n)
{
	int	i;
	int	j;

	i = n;
	if (n < 98)
	{
		while (i <= 98)
		{
			if (i != 98)
				printf("%d, ", i);
			else if (i == 98)
				printf("%d\n", i);
			i++;
		}
	}
	j = n;
	else if (n > 98)
	{
		while (j >= 98)
		{
			if (j != 98)
				printf("%d, ", j);
			else if (j == 98)
				printf("%d\n", j);
			j--;
		}
	}
}
