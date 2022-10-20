#include "main.h"
/**
 * print_diagonal - draws a diagonal line using \ charcter
 * @n: the number of \ charcter to be drawn
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (i = 0, i <= x; i++)
			{
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			}
		_putchar('\n');
	}
}
