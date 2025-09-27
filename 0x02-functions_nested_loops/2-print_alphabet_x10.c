#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 * Return: always 0 (success)
 */
void	print_alphabet_x10(void)
{
	char	c;
	int	i;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
