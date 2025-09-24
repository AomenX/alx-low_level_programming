#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits,
 * separated by ", ", he three digits must be different,
 * 012, 120, 102, 021, 201, 210 are considered the same combination,
 * of the three digits 0, 1 and 2,
 * Print only the smallest combination of three digits, in ascending order
 * Return: always 0 (success)
 */
int	main(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	while (x <= 55)
	{
		y = x + 1;
		while (y <= 56)
		{
			z = y + 1;
			while (z <= 57)
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != 55 || y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
