#include "main.h"
/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * Prototype: void puts2(char *str);
 * @str: string to print the chars from
 */
void	puts2(char *str)
{
	int	i;
	int	len;

	i = 0;
	while (str[i])
		i++;
	len = i - 1;
	i = 0;
	while (i <= len)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
