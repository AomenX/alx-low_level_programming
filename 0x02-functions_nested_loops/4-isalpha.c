#include "main.h"
/**
 * _isalpha - unction that checks for alphabetic character
 * Prototype: int _isalpha(int c);
 * @c: the character to be checked,
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise.
 */
int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
