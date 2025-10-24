#include "main.h"
/**
 * rev_string - reverses a string
 * Prototype: void rev_string(char *s);
 * @s: string to be reversed
 */
void	rev_string(char *s)
{
	int	i;
	int	len;
	char	tmp;

	i = 0;
	while (s[i])
		i++;
	len = i - 1;
	i = 0;
	while (i <= len)
	{
		tmp = s[i];
		s[i] = s[len];
		s[len] = tmp;
		i++;
		len--;
	}
}
