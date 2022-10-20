#include "main.h"
#include <stdio.h>
/**
 * _isupper check upper case alphas
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
