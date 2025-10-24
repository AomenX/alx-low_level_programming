#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * Prototype: void puts_half(char *str);
 * @str: string to be printed
 */
void	puts_half(char *str)
{
	int	i;
	int	n;
	int	len;

	i = 0;
	while (str[i])
		i++;
	len = i - 1;
	n = (len + 1) / 2;

	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
