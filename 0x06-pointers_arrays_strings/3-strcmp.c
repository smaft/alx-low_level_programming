#include "main.h"
/**
 * _strcmp - compares pionter to two strings.
 * @s1: A pionter to the first string to be compared
 * @s2: A pionter to the scond strinf to be compared
 *
 * Return: Always success
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
