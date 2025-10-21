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

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
