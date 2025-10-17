#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * followed by a new line
 * Do not print 2 and 4
 */

void	print_most_numbers(void)
{
	int	c;

	c = '0';
	while (c <= '9')
	{
		if (c == '2' || c == '4')
			continue;
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
