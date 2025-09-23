#include <stdio.h>
/**
 * main - prints all single digits of base 10,
 * using only putchar func, without using var of type char,
 * followed by a newline
 * Return: always 0 (success)
 */
int	main(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar(10);
	return (0);
}
