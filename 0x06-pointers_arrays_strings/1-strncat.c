#include "main.h"
/**
 * _strncat - concatenates two strings.
 * it will use at most n bytes from src
 * @dest: string to be append upon
 * @src: string to be appended to dest
 * @n: the numbre of bytes from src to be appended to des
 * Return: pionter to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{

	       dest[i] = src[j];
	       i++;
	       j++;
	}
	dest[i] = '\0';
	return (dest);
}
