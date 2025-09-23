#include <stdio.h>
/**
 * main - Print all the letters except q and e,
 * followed by a newline.
 * Return: always 0 (success)
 */
int	main(void)
{
	char	ch;

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
