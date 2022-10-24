#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 * @a: first pionter
 * @b: scond pionter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*a = *b;
	*b = constant;
}
