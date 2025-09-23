#include <stdio.h>
/**
 * main - prints all single digits of base 10,
 * followed by a newline
 * Return: always 0 (success)
 */
int	main(void)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
