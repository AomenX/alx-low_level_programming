#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase,
 * followed by a newline
 * Return: always 0 (success)
 */
int	main(void)
{
	int	i;
	char	ch;

	i = 48;
	ch = 'a';
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
