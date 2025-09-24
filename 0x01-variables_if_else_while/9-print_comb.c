#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers,
 * separated by ", ", followed by a newline
 * Return: always 0 (success)
 */
int	main(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
