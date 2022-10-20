#include "main.h"
/**
 * print_numbers -> print_numbers
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		_puchar(x + '0');
	_putchar('\n');
}
