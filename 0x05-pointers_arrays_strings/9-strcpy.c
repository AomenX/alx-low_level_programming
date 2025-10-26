#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * Prototype: char *_strcpy(char *dest, char *src);
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char	*_strcpy(char *dest, char *src)
{
	int	i, l;

	l = 0;
	while (src[l])
		l++;

	i = 0;
	while(i < l)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
