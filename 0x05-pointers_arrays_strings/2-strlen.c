/**
 * _strlen - function that returns the length of a string.
 * Prototype: int _strlen(char *s);
 * @s: string to evaluate
 * Return: the length of the string
 */
int	_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
