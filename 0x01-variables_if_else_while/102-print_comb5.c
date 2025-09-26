#include<stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers,
 * The numbers should range from 0 to 99, separated by a space,
 * The combination of numbers must be separated by ", ",
 * in ascending order
 * Return: always 0 (success)
 */
int	main(void)
{
	int	x;
	int	y;

	x = 48;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			putchar(x / 10 + '0');
			putchar(x % 10 + '0');
			putchar(' ');
			putchar(y / 10 + '0');
			putchar(y % 10 + '0');
			if (x != 98)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
