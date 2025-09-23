#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse,
 * followed by a newline
 * Return: always 0 (success)
 */
int	main(void)
{
	char	ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
