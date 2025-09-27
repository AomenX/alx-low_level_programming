#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Prototype: void print_alphabet(void),
 * You can only use _putchar twice in your code
 * Return: always 0 (success)
 */
void	print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
