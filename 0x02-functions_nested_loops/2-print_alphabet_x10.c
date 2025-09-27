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

	c = 'a';
	i = 0;
	while (i < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		i++;
	}
	_putchar('\n');
}
