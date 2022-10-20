#include "main.h"
#include <stdio.h>
/**
 * _isupper check upper case alphas
 * Return: 1 if char upper ,0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
