#include "main.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * Prototype: void _puts(char *str);
 * @str: pointer to the string to print
 */
void	_puts(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
