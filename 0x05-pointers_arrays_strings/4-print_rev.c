#include "main.h"
/**
 * print_rev -  function that prints a string, in reverse
 * followed by a new line
 * Prototype: void print_rev(char *s);
 * @s: string to print in reverse
 */
void	print_rev(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
		i++;
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
