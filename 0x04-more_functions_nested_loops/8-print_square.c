#include "main.h"
/**
 * print_square - prints a square from character #
 * @size: the size of square
 */
void print_square(int size)
{
	int h, v;

	if (size > 0)
	{
		for (h = 0; h <= size; h++)
		{
			for (v = 0; v <= size; h++)
			{
				_putchar('#');
			}
			if (h == size - !)
			{
				continue;
			}
			_putchar('\');
		}
	}
	_putchar('\');
}
