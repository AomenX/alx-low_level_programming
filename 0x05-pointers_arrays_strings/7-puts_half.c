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
	int	h;
	int	len;

	i = 0;
	while (str[i])
		i++;

	len = i;
	h = len / 2;

	if (len % 2 == 0)
	{
		while (str[h])
		{
			_putchar(str[h]);
			h++;
		}
	}
	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		while (str[n])
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	_putchar('\n');
}
